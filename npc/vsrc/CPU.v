module RegFile(
  input         clock,
  input         reset,
  input  [4:0]  io_rs1_addr,
  input  [4:0]  io_rd_addr,
  input  [63:0] io_rd_data,
  output [63:0] io_rs1_data
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
  reg [63:0] reg_1; // @[RegFile.scala 15:21]
  reg [63:0] reg_2; // @[RegFile.scala 15:21]
  reg [63:0] reg_3; // @[RegFile.scala 15:21]
  reg [63:0] reg_4; // @[RegFile.scala 15:21]
  reg [63:0] reg_5; // @[RegFile.scala 15:21]
  reg [63:0] reg_6; // @[RegFile.scala 15:21]
  reg [63:0] reg_7; // @[RegFile.scala 15:21]
  reg [63:0] reg_8; // @[RegFile.scala 15:21]
  reg [63:0] reg_9; // @[RegFile.scala 15:21]
  reg [63:0] reg_10; // @[RegFile.scala 15:21]
  reg [63:0] reg_11; // @[RegFile.scala 15:21]
  reg [63:0] reg_12; // @[RegFile.scala 15:21]
  reg [63:0] reg_13; // @[RegFile.scala 15:21]
  reg [63:0] reg_14; // @[RegFile.scala 15:21]
  reg [63:0] reg_15; // @[RegFile.scala 15:21]
  reg [63:0] reg_16; // @[RegFile.scala 15:21]
  reg [63:0] reg_17; // @[RegFile.scala 15:21]
  reg [63:0] reg_18; // @[RegFile.scala 15:21]
  reg [63:0] reg_19; // @[RegFile.scala 15:21]
  reg [63:0] reg_20; // @[RegFile.scala 15:21]
  reg [63:0] reg_21; // @[RegFile.scala 15:21]
  reg [63:0] reg_22; // @[RegFile.scala 15:21]
  reg [63:0] reg_23; // @[RegFile.scala 15:21]
  reg [63:0] reg_24; // @[RegFile.scala 15:21]
  reg [63:0] reg_25; // @[RegFile.scala 15:21]
  reg [63:0] reg_26; // @[RegFile.scala 15:21]
  reg [63:0] reg_27; // @[RegFile.scala 15:21]
  reg [63:0] reg_28; // @[RegFile.scala 15:21]
  reg [63:0] reg_29; // @[RegFile.scala 15:21]
  reg [63:0] reg_30; // @[RegFile.scala 15:21]
  reg [63:0] reg_31; // @[RegFile.scala 15:21]
  wire [63:0] _GEN_1 = 5'h1 == io_rs1_addr ? reg_1 : 64'h0; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_2 = 5'h2 == io_rs1_addr ? reg_2 : _GEN_1; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_3 = 5'h3 == io_rs1_addr ? reg_3 : _GEN_2; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_4 = 5'h4 == io_rs1_addr ? reg_4 : _GEN_3; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_5 = 5'h5 == io_rs1_addr ? reg_5 : _GEN_4; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_6 = 5'h6 == io_rs1_addr ? reg_6 : _GEN_5; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_7 = 5'h7 == io_rs1_addr ? reg_7 : _GEN_6; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_8 = 5'h8 == io_rs1_addr ? reg_8 : _GEN_7; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_9 = 5'h9 == io_rs1_addr ? reg_9 : _GEN_8; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_10 = 5'ha == io_rs1_addr ? reg_10 : _GEN_9; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_11 = 5'hb == io_rs1_addr ? reg_11 : _GEN_10; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_12 = 5'hc == io_rs1_addr ? reg_12 : _GEN_11; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_13 = 5'hd == io_rs1_addr ? reg_13 : _GEN_12; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_14 = 5'he == io_rs1_addr ? reg_14 : _GEN_13; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_15 = 5'hf == io_rs1_addr ? reg_15 : _GEN_14; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_16 = 5'h10 == io_rs1_addr ? reg_16 : _GEN_15; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_17 = 5'h11 == io_rs1_addr ? reg_17 : _GEN_16; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_18 = 5'h12 == io_rs1_addr ? reg_18 : _GEN_17; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_19 = 5'h13 == io_rs1_addr ? reg_19 : _GEN_18; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_20 = 5'h14 == io_rs1_addr ? reg_20 : _GEN_19; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_21 = 5'h15 == io_rs1_addr ? reg_21 : _GEN_20; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_22 = 5'h16 == io_rs1_addr ? reg_22 : _GEN_21; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_23 = 5'h17 == io_rs1_addr ? reg_23 : _GEN_22; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_24 = 5'h18 == io_rs1_addr ? reg_24 : _GEN_23; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_25 = 5'h19 == io_rs1_addr ? reg_25 : _GEN_24; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_26 = 5'h1a == io_rs1_addr ? reg_26 : _GEN_25; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_27 = 5'h1b == io_rs1_addr ? reg_27 : _GEN_26; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_28 = 5'h1c == io_rs1_addr ? reg_28 : _GEN_27; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_29 = 5'h1d == io_rs1_addr ? reg_29 : _GEN_28; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  wire [63:0] _GEN_30 = 5'h1e == io_rs1_addr ? reg_30 : _GEN_29; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  assign io_rs1_data = 5'h1f == io_rs1_addr ? reg_31 : _GEN_30; // @[RegFile.scala 17:15 RegFile.scala 17:15]
  always @(posedge clock) begin
    if (reset) begin // @[RegFile.scala 15:21]
      reg_1 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h1 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_1 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_2 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h2 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_2 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_3 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h3 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_3 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_4 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h4 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_4 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_5 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h5 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_5 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_6 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h6 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_6 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_7 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h7 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_7 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_8 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h8 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_8 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_9 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h9 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_9 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_10 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'ha == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_10 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_11 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'hb == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_11 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_12 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'hc == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_12 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_13 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'hd == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_13 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_14 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'he == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_14 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_15 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'hf == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_15 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_16 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h10 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_16 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_17 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h11 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_17 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_18 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h12 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_18 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_19 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h13 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_19 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_20 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h14 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_20 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_21 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h15 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_21 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_22 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h16 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_22 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_23 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h17 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_23 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_24 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h18 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_24 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_25 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h19 == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_25 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_26 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h1a == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_26 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_27 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h1b == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_27 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_28 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h1c == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_28 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_29 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h1d == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_29 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_30 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h1e == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_30 <= io_rd_data; // @[RegFile.scala 20:21]
    end
    if (reset) begin // @[RegFile.scala 15:21]
      reg_31 <= 64'h0; // @[RegFile.scala 15:21]
    end else if (5'h1f == io_rd_addr) begin // @[RegFile.scala 20:21]
      reg_31 <= io_rd_data; // @[RegFile.scala 20:21]
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
module ImmGen(
  input  [31:0] io_inst,
  output [63:0] io_imm
);
  wire [19:0] io_imm_hi = io_inst[31] ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  wire [11:0] io_imm_lo = io_inst[31:20]; // @[ImmGen.scala 11:47]
  wire [31:0] _io_imm_T_2 = {io_imm_hi,io_imm_lo}; // @[Cat.scala 30:58]
  assign io_imm = {{32'd0}, _io_imm_T_2}; // @[Cat.scala 30:58]
endmodule
module IDU(
  input         clock,
  input         reset,
  input  [31:0] io_inst,
  input  [63:0] io_rd_data,
  output [63:0] io_rs1_data,
  output [63:0] io_rs2_data
);
  wire  reg__clock; // @[IDU.scala 16:19]
  wire  reg__reset; // @[IDU.scala 16:19]
  wire [4:0] reg__io_rs1_addr; // @[IDU.scala 16:19]
  wire [4:0] reg__io_rd_addr; // @[IDU.scala 16:19]
  wire [63:0] reg__io_rd_data; // @[IDU.scala 16:19]
  wire [63:0] reg__io_rs1_data; // @[IDU.scala 16:19]
  wire [31:0] immgen_io_inst; // @[IDU.scala 25:22]
  wire [63:0] immgen_io_imm; // @[IDU.scala 25:22]
  RegFile reg_ ( // @[IDU.scala 16:19]
    .clock(reg__clock),
    .reset(reg__reset),
    .io_rs1_addr(reg__io_rs1_addr),
    .io_rd_addr(reg__io_rd_addr),
    .io_rd_data(reg__io_rd_data),
    .io_rs1_data(reg__io_rs1_data)
  );
  ImmGen immgen ( // @[IDU.scala 25:22]
    .io_inst(immgen_io_inst),
    .io_imm(immgen_io_imm)
  );
  assign io_rs1_data = reg__io_rs1_data; // @[IDU.scala 23:15]
  assign io_rs2_data = immgen_io_imm; // @[IDU.scala 27:21]
  assign reg__clock = clock;
  assign reg__reset = reset;
  assign reg__io_rs1_addr = io_inst[19:15]; // @[IDU.scala 19:29]
  assign reg__io_rd_addr = io_inst[11:7]; // @[IDU.scala 21:28]
  assign reg__io_rd_data = io_rd_data; // @[IDU.scala 22:18]
  assign immgen_io_inst = io_inst; // @[IDU.scala 26:18]
endmodule
module ALU(
  input  [63:0] io_src1,
  input  [63:0] io_src2,
  output [63:0] io_dest
);
  assign io_dest = io_src1 + io_src2; // @[ALU.scala 13:21]
endmodule
module EXU(
  input  [63:0] io_rs1,
  input  [63:0] io_rs2,
  output [63:0] io_dest
);
  wire [63:0] ALU_io_src1; // @[EXU.scala 10:19]
  wire [63:0] ALU_io_src2; // @[EXU.scala 10:19]
  wire [63:0] ALU_io_dest; // @[EXU.scala 10:19]
  ALU ALU ( // @[EXU.scala 10:19]
    .io_src1(ALU_io_src1),
    .io_src2(ALU_io_src2),
    .io_dest(ALU_io_dest)
  );
  assign io_dest = ALU_io_dest; // @[EXU.scala 14:11]
  assign ALU_io_src1 = io_rs1; // @[EXU.scala 12:15]
  assign ALU_io_src2 = io_rs2; // @[EXU.scala 13:15]
endmodule
module CPU(
  input         clock,
  input         reset,
  input  [31:0] io_inst,
  output [63:0] io_out
);
  wire  IDU_clock; // @[CPU.scala 15:19]
  wire  IDU_reset; // @[CPU.scala 15:19]
  wire [31:0] IDU_io_inst; // @[CPU.scala 15:19]
  wire [63:0] IDU_io_rd_data; // @[CPU.scala 15:19]
  wire [63:0] IDU_io_rs1_data; // @[CPU.scala 15:19]
  wire [63:0] IDU_io_rs2_data; // @[CPU.scala 15:19]
  wire [63:0] EXU_io_rs1; // @[CPU.scala 19:19]
  wire [63:0] EXU_io_rs2; // @[CPU.scala 19:19]
  wire [63:0] EXU_io_dest; // @[CPU.scala 19:19]
  IDU IDU ( // @[CPU.scala 15:19]
    .clock(IDU_clock),
    .reset(IDU_reset),
    .io_inst(IDU_io_inst),
    .io_rd_data(IDU_io_rd_data),
    .io_rs1_data(IDU_io_rs1_data),
    .io_rs2_data(IDU_io_rs2_data)
  );
  EXU EXU ( // @[CPU.scala 19:19]
    .io_rs1(EXU_io_rs1),
    .io_rs2(EXU_io_rs2),
    .io_dest(EXU_io_dest)
  );
  assign io_out = EXU_io_dest; // @[CPU.scala 23:10]
  assign IDU_clock = clock;
  assign IDU_reset = reset;
  assign IDU_io_inst = io_inst; // @[CPU.scala 16:15]
  assign IDU_io_rd_data = EXU_io_dest; // @[CPU.scala 22:18]
  assign EXU_io_rs1 = IDU_io_rs1_data; // @[CPU.scala 20:14]
  assign EXU_io_rs2 = IDU_io_rs2_data; // @[CPU.scala 21:14]
endmodule
