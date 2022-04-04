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
  input  [31:0] io_inst,
  output [63:0] io_rs2_data
);
  wire [31:0] immgen_io_inst; // @[IDU.scala 26:22]
  wire [63:0] immgen_io_imm; // @[IDU.scala 26:22]
  ImmGen immgen ( // @[IDU.scala 26:22]
    .io_inst(immgen_io_inst),
    .io_imm(immgen_io_imm)
  );
  assign io_rs2_data = immgen_io_imm; // @[IDU.scala 28:21]
  assign immgen_io_inst = io_inst; // @[IDU.scala 27:18]
endmodule
module ALU(
  input  [63:0] io_src2,
  output [63:0] io_dest
);
  assign io_dest = 64'h0 - io_src2; // @[ALU.scala 14:21]
endmodule
module EXU(
  input  [63:0] io_rs2,
  output [63:0] io_dest
);
  wire [63:0] ALU_io_src2; // @[EXU.scala 10:19]
  wire [63:0] ALU_io_dest; // @[EXU.scala 10:19]
  ALU ALU ( // @[EXU.scala 10:19]
    .io_src2(ALU_io_src2),
    .io_dest(ALU_io_dest)
  );
  assign io_dest = ALU_io_dest; // @[EXU.scala 14:11]
  assign ALU_io_src2 = io_rs2; // @[EXU.scala 13:15]
endmodule
module CPU(
  input         clock,
  input         reset,
  input  [31:0] io_inst,
  output [63:0] io_out
);
  wire [31:0] IDU_io_inst; // @[CPU.scala 15:19]
  wire [63:0] IDU_io_rs2_data; // @[CPU.scala 15:19]
  wire [63:0] EXU_io_rs2; // @[CPU.scala 20:19]
  wire [63:0] EXU_io_dest; // @[CPU.scala 20:19]
  IDU IDU ( // @[CPU.scala 15:19]
    .io_inst(IDU_io_inst),
    .io_rs2_data(IDU_io_rs2_data)
  );
  EXU EXU ( // @[CPU.scala 20:19]
    .io_rs2(EXU_io_rs2),
    .io_dest(EXU_io_dest)
  );
  assign io_out = EXU_io_dest; // @[CPU.scala 23:10]
  assign IDU_io_inst = io_inst; // @[CPU.scala 16:15]
  assign EXU_io_rs2 = IDU_io_rs2_data; // @[CPU.scala 22:14]
endmodule
