module IFU(
  input  [63:0] io_in_addr,
  output [31:0] io_out_inst
);
  wire  fetchmem_ren; // @[IFU.scala 24:24]
  wire  fetchmem_wen; // @[IFU.scala 24:24]
  wire [63:0] fetchmem_raddr; // @[IFU.scala 24:24]
  wire [63:0] fetchmem_rdata; // @[IFU.scala 24:24]
  wire [63:0] fetchmem_waddr; // @[IFU.scala 24:24]
  wire [63:0] fetchmem_wdata; // @[IFU.scala 24:24]
  wire [7:0] fetchmem_mask; // @[IFU.scala 24:24]
  wire [31:0] ebreak_inst; // @[IFU.scala 30:22]
  MEM fetchmem ( // @[IFU.scala 24:24]
    .ren(fetchmem_ren),
    .wen(fetchmem_wen),
    .raddr(fetchmem_raddr),
    .rdata(fetchmem_rdata),
    .waddr(fetchmem_waddr),
    .wdata(fetchmem_wdata),
    .mask(fetchmem_mask)
  );
  Ebreak ebreak ( // @[IFU.scala 30:22]
    .inst(ebreak_inst)
  );
  assign io_out_inst = fetchmem_rdata[63:32]; // @[IFU.scala 28:41]
  assign fetchmem_ren = 1'h1; // @[IFU.scala 25:21]
  assign fetchmem_wen = 1'h0; // @[IFU.scala 26:21]
  assign fetchmem_raddr = io_in_addr; // @[IFU.scala 27:21]
  assign fetchmem_waddr = 64'h0;
  assign fetchmem_wdata = 64'h0;
  assign fetchmem_mask = 8'h0;
  assign ebreak_inst = fetchmem_rdata[63:32]; // @[IFU.scala 31:38]
endmodule
module Contr(
  input  [31:0] io_in_inst,
  output [3:0]  io_out_alu_op,
  output        io_out_alu_src,
  output        io_out_reg_write
);
  wire [31:0] _controller_T = io_in_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  controller_0 = 32'h13 == _controller_T; // @[Lookup.scala 31:38]
  assign io_out_alu_op = {{3'd0}, controller_0}; // @[Lookup.scala 31:38]
  assign io_out_alu_src = 32'h13 == _controller_T; // @[Lookup.scala 31:38]
  assign io_out_reg_write = 32'h13 == _controller_T; // @[Lookup.scala 31:38]
endmodule
module ImmGen(
  input  [31:0] io_in_inst,
  output [63:0] io_out_imm
);
  wire [19:0] imm_hi = io_in_inst[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire [11:0] imm_lo = io_in_inst[31:20]; // @[ImmGen.scala 25:53]
  wire [31:0] _imm_T_2 = {imm_hi,imm_lo}; // @[Cat.scala 30:58]
  wire [31:0] _imm_T_3 = io_in_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _imm_T_4 = 32'h13 == _imm_T_3; // @[Lookup.scala 31:38]
  wire [31:0] imm = _imm_T_4 ? _imm_T_2 : 32'h0; // @[Lookup.scala 33:37]
  assign io_out_imm = {{32'd0}, imm}; // @[Lookup.scala 33:37]
endmodule
module IDU(
  input  [31:0] io_in_inst,
  output [4:0]  io_out_rs1,
  output [4:0]  io_out_rs2,
  output [4:0]  io_out_rd,
  output [63:0] io_out_imm,
  output [3:0]  io_contr_alu_op,
  output        io_contr_alu_src,
  output        io_contr_reg_write
);
  wire [31:0] contr_io_in_inst; // @[IDU.scala 34:21]
  wire [3:0] contr_io_out_alu_op; // @[IDU.scala 34:21]
  wire  contr_io_out_alu_src; // @[IDU.scala 34:21]
  wire  contr_io_out_reg_write; // @[IDU.scala 34:21]
  wire [31:0] immgen_io_in_inst; // @[IDU.scala 44:22]
  wire [63:0] immgen_io_out_imm; // @[IDU.scala 44:22]
  Contr contr ( // @[IDU.scala 34:21]
    .io_in_inst(contr_io_in_inst),
    .io_out_alu_op(contr_io_out_alu_op),
    .io_out_alu_src(contr_io_out_alu_src),
    .io_out_reg_write(contr_io_out_reg_write)
  );
  ImmGen immgen ( // @[IDU.scala 44:22]
    .io_in_inst(immgen_io_in_inst),
    .io_out_imm(immgen_io_out_imm)
  );
  assign io_out_rs1 = io_in_inst[19:15]; // @[IDU.scala 48:27]
  assign io_out_rs2 = io_in_inst[24:20]; // @[IDU.scala 49:27]
  assign io_out_rd = io_in_inst[11:7]; // @[IDU.scala 50:27]
  assign io_out_imm = immgen_io_out_imm; // @[IDU.scala 46:21]
  assign io_contr_alu_op = contr_io_out_alu_op; // @[IDU.scala 36:23]
  assign io_contr_alu_src = contr_io_out_alu_src; // @[IDU.scala 37:23]
  assign io_contr_reg_write = contr_io_out_reg_write; // @[IDU.scala 38:23]
  assign contr_io_in_inst = io_in_inst; // @[IDU.scala 35:23]
  assign immgen_io_in_inst = io_in_inst; // @[IDU.scala 45:21]
endmodule
module RegFile(
  input         clock,
  input         reset,
  input         io_in_reg_write,
  input  [4:0]  io_in_rs1_addr,
  input  [4:0]  io_in_rs2_addr,
  input  [4:0]  io_in_rd_addr,
  input  [63:0] io_in_rd_data,
  output [63:0] io_out_rs1_data,
  output [63:0] io_out_rs2_data
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] reg_1; // @[RegFile.scala 25:20]
  reg [63:0] reg_2; // @[RegFile.scala 25:20]
  reg [63:0] reg_3; // @[RegFile.scala 25:20]
  reg [63:0] reg_4; // @[RegFile.scala 25:20]
  reg [63:0] reg_5; // @[RegFile.scala 25:20]
  reg [63:0] reg_6; // @[RegFile.scala 25:20]
  reg [63:0] reg_7; // @[RegFile.scala 25:20]
  reg [63:0] reg_8; // @[RegFile.scala 25:20]
  reg [63:0] reg_9; // @[RegFile.scala 25:20]
  reg [63:0] reg_10; // @[RegFile.scala 25:20]
  reg [63:0] reg_11; // @[RegFile.scala 25:20]
  reg [63:0] reg_12; // @[RegFile.scala 25:20]
  reg [63:0] reg_13; // @[RegFile.scala 25:20]
  reg [63:0] reg_14; // @[RegFile.scala 25:20]
  reg [63:0] reg_15; // @[RegFile.scala 25:20]
  reg [63:0] reg_16; // @[RegFile.scala 25:20]
  reg [63:0] reg_17; // @[RegFile.scala 25:20]
  reg [63:0] reg_18; // @[RegFile.scala 25:20]
  reg [63:0] reg_19; // @[RegFile.scala 25:20]
  reg [63:0] reg_20; // @[RegFile.scala 25:20]
  reg [63:0] reg_21; // @[RegFile.scala 25:20]
  reg [63:0] reg_22; // @[RegFile.scala 25:20]
  reg [63:0] reg_23; // @[RegFile.scala 25:20]
  reg [63:0] reg_24; // @[RegFile.scala 25:20]
  reg [63:0] reg_25; // @[RegFile.scala 25:20]
  reg [63:0] reg_26; // @[RegFile.scala 25:20]
  reg [63:0] reg_27; // @[RegFile.scala 25:20]
  reg [63:0] reg_28; // @[RegFile.scala 25:20]
  reg [63:0] reg_29; // @[RegFile.scala 25:20]
  reg [63:0] reg_30; // @[RegFile.scala 25:20]
  reg [63:0] reg_31; // @[RegFile.scala 25:20]
  wire [63:0] _GEN_1 = 5'h1 == io_in_rs1_addr ? reg_1 : 64'h0; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_2 = 5'h2 == io_in_rs1_addr ? reg_2 : _GEN_1; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_3 = 5'h3 == io_in_rs1_addr ? reg_3 : _GEN_2; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_4 = 5'h4 == io_in_rs1_addr ? reg_4 : _GEN_3; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_5 = 5'h5 == io_in_rs1_addr ? reg_5 : _GEN_4; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_6 = 5'h6 == io_in_rs1_addr ? reg_6 : _GEN_5; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_7 = 5'h7 == io_in_rs1_addr ? reg_7 : _GEN_6; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_8 = 5'h8 == io_in_rs1_addr ? reg_8 : _GEN_7; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_9 = 5'h9 == io_in_rs1_addr ? reg_9 : _GEN_8; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_10 = 5'ha == io_in_rs1_addr ? reg_10 : _GEN_9; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_11 = 5'hb == io_in_rs1_addr ? reg_11 : _GEN_10; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_12 = 5'hc == io_in_rs1_addr ? reg_12 : _GEN_11; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_13 = 5'hd == io_in_rs1_addr ? reg_13 : _GEN_12; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_14 = 5'he == io_in_rs1_addr ? reg_14 : _GEN_13; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_15 = 5'hf == io_in_rs1_addr ? reg_15 : _GEN_14; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_16 = 5'h10 == io_in_rs1_addr ? reg_16 : _GEN_15; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_17 = 5'h11 == io_in_rs1_addr ? reg_17 : _GEN_16; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_18 = 5'h12 == io_in_rs1_addr ? reg_18 : _GEN_17; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_19 = 5'h13 == io_in_rs1_addr ? reg_19 : _GEN_18; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_20 = 5'h14 == io_in_rs1_addr ? reg_20 : _GEN_19; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_21 = 5'h15 == io_in_rs1_addr ? reg_21 : _GEN_20; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_22 = 5'h16 == io_in_rs1_addr ? reg_22 : _GEN_21; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_23 = 5'h17 == io_in_rs1_addr ? reg_23 : _GEN_22; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_24 = 5'h18 == io_in_rs1_addr ? reg_24 : _GEN_23; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_25 = 5'h19 == io_in_rs1_addr ? reg_25 : _GEN_24; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_26 = 5'h1a == io_in_rs1_addr ? reg_26 : _GEN_25; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_27 = 5'h1b == io_in_rs1_addr ? reg_27 : _GEN_26; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_28 = 5'h1c == io_in_rs1_addr ? reg_28 : _GEN_27; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_29 = 5'h1d == io_in_rs1_addr ? reg_29 : _GEN_28; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_30 = 5'h1e == io_in_rs1_addr ? reg_30 : _GEN_29; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  wire [63:0] _GEN_33 = 5'h1 == io_in_rs2_addr ? reg_1 : 64'h0; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_34 = 5'h2 == io_in_rs2_addr ? reg_2 : _GEN_33; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_35 = 5'h3 == io_in_rs2_addr ? reg_3 : _GEN_34; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_36 = 5'h4 == io_in_rs2_addr ? reg_4 : _GEN_35; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_37 = 5'h5 == io_in_rs2_addr ? reg_5 : _GEN_36; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_38 = 5'h6 == io_in_rs2_addr ? reg_6 : _GEN_37; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_39 = 5'h7 == io_in_rs2_addr ? reg_7 : _GEN_38; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_40 = 5'h8 == io_in_rs2_addr ? reg_8 : _GEN_39; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_41 = 5'h9 == io_in_rs2_addr ? reg_9 : _GEN_40; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_42 = 5'ha == io_in_rs2_addr ? reg_10 : _GEN_41; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_43 = 5'hb == io_in_rs2_addr ? reg_11 : _GEN_42; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_44 = 5'hc == io_in_rs2_addr ? reg_12 : _GEN_43; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_45 = 5'hd == io_in_rs2_addr ? reg_13 : _GEN_44; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_46 = 5'he == io_in_rs2_addr ? reg_14 : _GEN_45; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_47 = 5'hf == io_in_rs2_addr ? reg_15 : _GEN_46; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_48 = 5'h10 == io_in_rs2_addr ? reg_16 : _GEN_47; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_49 = 5'h11 == io_in_rs2_addr ? reg_17 : _GEN_48; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_50 = 5'h12 == io_in_rs2_addr ? reg_18 : _GEN_49; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_51 = 5'h13 == io_in_rs2_addr ? reg_19 : _GEN_50; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_52 = 5'h14 == io_in_rs2_addr ? reg_20 : _GEN_51; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_53 = 5'h15 == io_in_rs2_addr ? reg_21 : _GEN_52; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_54 = 5'h16 == io_in_rs2_addr ? reg_22 : _GEN_53; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_55 = 5'h17 == io_in_rs2_addr ? reg_23 : _GEN_54; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_56 = 5'h18 == io_in_rs2_addr ? reg_24 : _GEN_55; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_57 = 5'h19 == io_in_rs2_addr ? reg_25 : _GEN_56; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_58 = 5'h1a == io_in_rs2_addr ? reg_26 : _GEN_57; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_59 = 5'h1b == io_in_rs2_addr ? reg_27 : _GEN_58; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_60 = 5'h1c == io_in_rs2_addr ? reg_28 : _GEN_59; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_61 = 5'h1d == io_in_rs2_addr ? reg_29 : _GEN_60; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  wire [63:0] _GEN_62 = 5'h1e == io_in_rs2_addr ? reg_30 : _GEN_61; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  assign io_out_rs1_data = 5'h1f == io_in_rs1_addr ? reg_31 : _GEN_30; // @[RegFile.scala 27:19 RegFile.scala 27:19]
  assign io_out_rs2_data = 5'h1f == io_in_rs2_addr ? reg_31 : _GEN_62; // @[RegFile.scala 28:19 RegFile.scala 28:19]
  always @(posedge clock) begin
    if (reset) begin // @[RegFile.scala 25:20]
      reg_1 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h1 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_1 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_2 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h2 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_2 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_3 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h3 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_3 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_4 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h4 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_4 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_5 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h5 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_5 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_6 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h6 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_6 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_7 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h7 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_7 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_8 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h8 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_8 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_9 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h9 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_9 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_10 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'ha == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_10 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_11 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'hb == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_11 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_12 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'hc == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_12 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_13 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'hd == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_13 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_14 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'he == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_14 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_15 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'hf == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_15 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_16 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h10 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_16 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_17 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h11 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_17 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_18 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h12 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_18 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_19 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h13 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_19 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_20 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h14 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_20 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_21 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h15 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_21 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_22 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h16 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_22 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_23 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h17 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_23 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_24 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h18 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_24 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_25 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h19 == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_25 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_26 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h1a == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_26 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_27 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h1b == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_27 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_28 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h1c == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_28 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_29 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h1d == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_29 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_30 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h1e == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_30 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
    if (reset) begin // @[RegFile.scala 25:20]
      reg_31 <= 64'h0; // @[RegFile.scala 25:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 29:26]
      if (5'h1f == io_in_rd_addr) begin // @[RegFile.scala 30:24]
        reg_31 <= io_in_rd_data; // @[RegFile.scala 30:24]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  reg_1 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  reg_2 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  reg_3 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  reg_4 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  reg_5 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  reg_6 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  reg_7 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  reg_8 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  reg_9 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  reg_10 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  reg_11 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  reg_12 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  reg_13 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  reg_14 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  reg_15 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  reg_16 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  reg_17 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  reg_18 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  reg_19 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  reg_20 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  reg_21 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  reg_22 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  reg_23 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  reg_24 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  reg_25 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  reg_26 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  reg_27 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  reg_28 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  reg_29 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  reg_30 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  reg_31 = _RAND_30[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ALU(
  input  [3:0]  io_in_alu_op,
  input  [63:0] io_in_src1,
  input  [63:0] io_in_src2,
  output [63:0] io_out_dest
);
  wire [63:0] _io_out_dest_T_1 = io_in_src1 + io_in_src2; // @[ALU.scala 28:21]
  wire [63:0] _io_out_dest_T_3 = io_in_src1 - io_in_src2; // @[ALU.scala 29:21]
  wire [63:0] _io_out_dest_T_5 = 4'h1 == io_in_alu_op ? _io_out_dest_T_1 : 64'h0; // @[Mux.scala 80:57]
  assign io_out_dest = 4'h2 == io_in_alu_op ? _io_out_dest_T_3 : _io_out_dest_T_5; // @[Mux.scala 80:57]
endmodule
module EXU(
  input         clock,
  input         reset,
  input  [4:0]  io_in_rs1,
  input  [4:0]  io_in_rs2,
  input  [4:0]  io_in_rd,
  input  [63:0] io_in_imm,
  input  [3:0]  io_contr_alu_op,
  input         io_contr_alu_src,
  input         io_contr_reg_write
);
  wire  regs_clock; // @[EXU.scala 29:20]
  wire  regs_reset; // @[EXU.scala 29:20]
  wire  regs_io_in_reg_write; // @[EXU.scala 29:20]
  wire [4:0] regs_io_in_rs1_addr; // @[EXU.scala 29:20]
  wire [4:0] regs_io_in_rs2_addr; // @[EXU.scala 29:20]
  wire [4:0] regs_io_in_rd_addr; // @[EXU.scala 29:20]
  wire [63:0] regs_io_in_rd_data; // @[EXU.scala 29:20]
  wire [63:0] regs_io_out_rs1_data; // @[EXU.scala 29:20]
  wire [63:0] regs_io_out_rs2_data; // @[EXU.scala 29:20]
  wire [3:0] ALU_io_in_alu_op; // @[EXU.scala 35:19]
  wire [63:0] ALU_io_in_src1; // @[EXU.scala 35:19]
  wire [63:0] ALU_io_in_src2; // @[EXU.scala 35:19]
  wire [63:0] ALU_io_out_dest; // @[EXU.scala 35:19]
  wire  mem_ren; // @[EXU.scala 40:19]
  wire  mem_wen; // @[EXU.scala 40:19]
  wire [63:0] mem_raddr; // @[EXU.scala 40:19]
  wire [63:0] mem_rdata; // @[EXU.scala 40:19]
  wire [63:0] mem_waddr; // @[EXU.scala 40:19]
  wire [63:0] mem_wdata; // @[EXU.scala 40:19]
  wire [7:0] mem_mask; // @[EXU.scala 40:19]
  RegFile regs ( // @[EXU.scala 29:20]
    .clock(regs_clock),
    .reset(regs_reset),
    .io_in_reg_write(regs_io_in_reg_write),
    .io_in_rs1_addr(regs_io_in_rs1_addr),
    .io_in_rs2_addr(regs_io_in_rs2_addr),
    .io_in_rd_addr(regs_io_in_rd_addr),
    .io_in_rd_data(regs_io_in_rd_data),
    .io_out_rs1_data(regs_io_out_rs1_data),
    .io_out_rs2_data(regs_io_out_rs2_data)
  );
  ALU ALU ( // @[EXU.scala 35:19]
    .io_in_alu_op(ALU_io_in_alu_op),
    .io_in_src1(ALU_io_in_src1),
    .io_in_src2(ALU_io_in_src2),
    .io_out_dest(ALU_io_out_dest)
  );
  MEM mem ( // @[EXU.scala 40:19]
    .ren(mem_ren),
    .wen(mem_wen),
    .raddr(mem_raddr),
    .rdata(mem_rdata),
    .waddr(mem_waddr),
    .wdata(mem_wdata),
    .mask(mem_mask)
  );
  assign regs_clock = clock;
  assign regs_reset = reset;
  assign regs_io_in_reg_write = io_contr_reg_write; // @[EXU.scala 30:24]
  assign regs_io_in_rs1_addr = io_in_rs1; // @[EXU.scala 31:24]
  assign regs_io_in_rs2_addr = io_in_rs2; // @[EXU.scala 32:24]
  assign regs_io_in_rd_addr = io_in_rd; // @[EXU.scala 33:24]
  assign regs_io_in_rd_data = ALU_io_out_dest; // @[EXU.scala 47:28]
  assign ALU_io_in_alu_op = io_contr_alu_op; // @[EXU.scala 36:20]
  assign ALU_io_in_src1 = regs_io_out_rs1_data; // @[EXU.scala 37:20]
  assign ALU_io_in_src2 = io_contr_alu_src ? io_in_imm : regs_io_out_rs2_data; // @[EXU.scala 38:26]
  assign mem_ren = 1'h0; // @[EXU.scala 41:16]
  assign mem_wen = 1'h0; // @[EXU.scala 42:16]
  assign mem_raddr = ALU_io_out_dest; // @[EXU.scala 43:16]
  assign mem_waddr = ALU_io_out_dest; // @[EXU.scala 44:16]
  assign mem_wdata = regs_io_out_rs2_data; // @[EXU.scala 45:16]
  assign mem_mask = 8'h0;
endmodule
module CPU(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] IFU_io_in_addr; // @[CPU.scala 16:19]
  wire [31:0] IFU_io_out_inst; // @[CPU.scala 16:19]
  wire [31:0] IDU_io_in_inst; // @[CPU.scala 20:19]
  wire [4:0] IDU_io_out_rs1; // @[CPU.scala 20:19]
  wire [4:0] IDU_io_out_rs2; // @[CPU.scala 20:19]
  wire [4:0] IDU_io_out_rd; // @[CPU.scala 20:19]
  wire [63:0] IDU_io_out_imm; // @[CPU.scala 20:19]
  wire [3:0] IDU_io_contr_alu_op; // @[CPU.scala 20:19]
  wire  IDU_io_contr_alu_src; // @[CPU.scala 20:19]
  wire  IDU_io_contr_reg_write; // @[CPU.scala 20:19]
  wire  EXU_clock; // @[CPU.scala 23:19]
  wire  EXU_reset; // @[CPU.scala 23:19]
  wire [4:0] EXU_io_in_rs1; // @[CPU.scala 23:19]
  wire [4:0] EXU_io_in_rs2; // @[CPU.scala 23:19]
  wire [4:0] EXU_io_in_rd; // @[CPU.scala 23:19]
  wire [63:0] EXU_io_in_imm; // @[CPU.scala 23:19]
  wire [3:0] EXU_io_contr_alu_op; // @[CPU.scala 23:19]
  wire  EXU_io_contr_alu_src; // @[CPU.scala 23:19]
  wire  EXU_io_contr_reg_write; // @[CPU.scala 23:19]
  reg [63:0] pc; // @[CPU.scala 14:19]
  wire [63:0] _pc_T_1 = pc + 64'h4; // @[CPU.scala 18:12]
  IFU IFU ( // @[CPU.scala 16:19]
    .io_in_addr(IFU_io_in_addr),
    .io_out_inst(IFU_io_out_inst)
  );
  IDU IDU ( // @[CPU.scala 20:19]
    .io_in_inst(IDU_io_in_inst),
    .io_out_rs1(IDU_io_out_rs1),
    .io_out_rs2(IDU_io_out_rs2),
    .io_out_rd(IDU_io_out_rd),
    .io_out_imm(IDU_io_out_imm),
    .io_contr_alu_op(IDU_io_contr_alu_op),
    .io_contr_alu_src(IDU_io_contr_alu_src),
    .io_contr_reg_write(IDU_io_contr_reg_write)
  );
  EXU EXU ( // @[CPU.scala 23:19]
    .clock(EXU_clock),
    .reset(EXU_reset),
    .io_in_rs1(EXU_io_in_rs1),
    .io_in_rs2(EXU_io_in_rs2),
    .io_in_rd(EXU_io_in_rd),
    .io_in_imm(EXU_io_in_imm),
    .io_contr_alu_op(EXU_io_contr_alu_op),
    .io_contr_alu_src(EXU_io_contr_alu_src),
    .io_contr_reg_write(EXU_io_contr_reg_write)
  );
  assign IFU_io_in_addr = pc; // @[CPU.scala 17:18]
  assign IDU_io_in_inst = IFU_io_out_inst; // @[CPU.scala 21:18]
  assign EXU_clock = clock;
  assign EXU_reset = reset;
  assign EXU_io_in_rs1 = IDU_io_out_rs1; // @[CPU.scala 30:27]
  assign EXU_io_in_rs2 = IDU_io_out_rs2; // @[CPU.scala 31:27]
  assign EXU_io_in_rd = IDU_io_out_rd; // @[CPU.scala 32:27]
  assign EXU_io_in_imm = IDU_io_out_imm; // @[CPU.scala 33:27]
  assign EXU_io_contr_alu_op = IDU_io_contr_alu_op; // @[CPU.scala 24:27]
  assign EXU_io_contr_alu_src = IDU_io_contr_alu_src; // @[CPU.scala 25:27]
  assign EXU_io_contr_reg_write = IDU_io_contr_reg_write; // @[CPU.scala 26:27]
  always @(posedge clock) begin
    if (reset) begin // @[CPU.scala 14:19]
      pc <= 64'h80000000; // @[CPU.scala 14:19]
    end else begin
      pc <= _pc_T_1; // @[CPU.scala 18:6]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  pc = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
