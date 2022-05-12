module IFU(
  input  [63:0] io_in_addr,
  output [31:0] io_out_inst
);
  wire  fetchmem_ren; // @[IFU.scala 23:24]
  wire  fetchmem_wen; // @[IFU.scala 23:24]
  wire [63:0] fetchmem_raddr; // @[IFU.scala 23:24]
  wire [63:0] fetchmem_rdata; // @[IFU.scala 23:24]
  wire [63:0] fetchmem_waddr; // @[IFU.scala 23:24]
  wire [63:0] fetchmem_wdata; // @[IFU.scala 23:24]
  wire [7:0] fetchmem_mask; // @[IFU.scala 23:24]
  MEM fetchmem ( // @[IFU.scala 23:24]
    .ren(fetchmem_ren),
    .wen(fetchmem_wen),
    .raddr(fetchmem_raddr),
    .rdata(fetchmem_rdata),
    .waddr(fetchmem_waddr),
    .wdata(fetchmem_wdata),
    .mask(fetchmem_mask)
  );
  assign io_out_inst = fetchmem_rdata[31:0]; // @[IFU.scala 27:41]
  assign fetchmem_ren = 1'h1; // @[IFU.scala 24:21]
  assign fetchmem_wen = 1'h0; // @[IFU.scala 25:21]
  assign fetchmem_raddr = io_in_addr; // @[IFU.scala 26:21]
  assign fetchmem_waddr = 64'h0;
  assign fetchmem_wdata = 64'h0;
  assign fetchmem_mask = 8'h0;
endmodule
module Contr(
  input  [31:0] io_in_inst,
  output [4:0]  io_out_alu_op,
  output        io_out_alu_srca,
  output        io_out_alu_srcb,
  output        io_out_reg_write,
  output        io_out_mem_read,
  output        io_out_mem_write,
  output        io_out_mem_to_reg,
  output        io_out_pc_src,
  output        io_out_jalr,
  output [2:0]  io_out_branch,
  output [2:0]  io_out_wdth
);
  wire [31:0] _iducontr_T = io_in_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _iducontr_T_1 = 32'h33 == _iducontr_T; // @[Lookup.scala 31:38]
  wire [31:0] _iducontr_T_2 = io_in_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _iducontr_T_3 = 32'h13 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_5 = 32'h1b == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_7 = 32'h3b == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_9 = 32'h7033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_11 = 32'h7013 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire [31:0] _iducontr_T_12 = io_in_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _iducontr_T_13 = 32'h17 == _iducontr_T_12; // @[Lookup.scala 31:38]
  wire  _iducontr_T_15 = 32'h63 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_17 = 32'h5063 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_19 = 32'h7063 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_21 = 32'h4063 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_23 = 32'h6063 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_25 = 32'h1063 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_27 = 32'h2004033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_29 = 32'h2005033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_31 = 32'h200503b == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_33 = 32'h200403b == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_35 = 32'h6f == _iducontr_T_12; // @[Lookup.scala 31:38]
  wire  _iducontr_T_37 = 32'h67 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_39 = 32'h3 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_41 = 32'h4003 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_43 = 32'h3003 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_45 = 32'h1003 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_47 = 32'h5003 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_49 = 32'h2003 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_51 = 32'h6003 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_53 = 32'h37 == _iducontr_T_12; // @[Lookup.scala 31:38]
  wire  _iducontr_T_55 = 32'h2000033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_57 = 32'h200003b == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_59 = 32'h6033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_61 = 32'h2006033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_63 = 32'h2007033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_65 = 32'h200703b == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_67 = 32'h200603b == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_69 = 32'h23 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_71 = 32'h3023 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_73 = 32'h1023 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_75 = 32'h2023 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_77 = 32'h1033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire [31:0] _iducontr_T_78 = io_in_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _iducontr_T_79 = 32'h1013 == _iducontr_T_78; // @[Lookup.scala 31:38]
  wire  _iducontr_T_81 = 32'h101b == _iducontr_T_78; // @[Lookup.scala 31:38]
  wire  _iducontr_T_83 = 32'h103b == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_85 = 32'h2033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_87 = 32'h2013 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_89 = 32'h3013 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire  _iducontr_T_91 = 32'h3033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_93 = 32'h40005033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_95 = 32'h40005013 == _iducontr_T_78; // @[Lookup.scala 31:38]
  wire  _iducontr_T_97 = 32'h4000501b == _iducontr_T_78; // @[Lookup.scala 31:38]
  wire  _iducontr_T_99 = 32'h4000503b == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_101 = 32'h5033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_103 = 32'h5013 == _iducontr_T_78; // @[Lookup.scala 31:38]
  wire  _iducontr_T_105 = 32'h501b == _iducontr_T_78; // @[Lookup.scala 31:38]
  wire  _iducontr_T_107 = 32'h503b == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_109 = 32'h40000033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_111 = 32'h4000003b == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_113 = 32'h4033 == _iducontr_T; // @[Lookup.scala 31:38]
  wire  _iducontr_T_115 = 32'h4013 == _iducontr_T_2; // @[Lookup.scala 31:38]
  wire [1:0] _iducontr_T_116 = _iducontr_T_115 ? 2'h3 : 2'h0; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_117 = _iducontr_T_113 ? 2'h3 : _iducontr_T_116; // @[Lookup.scala 33:37]
  wire [3:0] _iducontr_T_118 = _iducontr_T_111 ? 4'ha : {{2'd0}, _iducontr_T_117}; // @[Lookup.scala 33:37]
  wire [3:0] _iducontr_T_119 = _iducontr_T_109 ? 4'hb : _iducontr_T_118; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_120 = _iducontr_T_107 ? 5'h1e : {{1'd0}, _iducontr_T_119}; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_121 = _iducontr_T_105 ? 5'h1e : _iducontr_T_120; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_122 = _iducontr_T_103 ? 5'h1f : _iducontr_T_121; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_123 = _iducontr_T_101 ? 5'h1f : _iducontr_T_122; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_124 = _iducontr_T_99 ? 5'h1c : _iducontr_T_123; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_125 = _iducontr_T_97 ? 5'h1c : _iducontr_T_124; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_126 = _iducontr_T_95 ? 5'h1d : _iducontr_T_125; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_127 = _iducontr_T_93 ? 5'h1d : _iducontr_T_126; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_128 = _iducontr_T_91 ? 5'h0 : _iducontr_T_127; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_129 = _iducontr_T_89 ? 5'h0 : _iducontr_T_128; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_130 = _iducontr_T_87 ? 5'h0 : _iducontr_T_129; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_131 = _iducontr_T_85 ? 5'h0 : _iducontr_T_130; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_132 = _iducontr_T_83 ? 5'hc : _iducontr_T_131; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_133 = _iducontr_T_81 ? 5'hc : _iducontr_T_132; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_134 = _iducontr_T_79 ? 5'hd : _iducontr_T_133; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_135 = _iducontr_T_77 ? 5'hd : _iducontr_T_134; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_136 = _iducontr_T_75 ? 5'h5 : _iducontr_T_135; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_137 = _iducontr_T_73 ? 5'h5 : _iducontr_T_136; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_138 = _iducontr_T_71 ? 5'h5 : _iducontr_T_137; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_139 = _iducontr_T_69 ? 5'h5 : _iducontr_T_138; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_140 = _iducontr_T_67 ? 5'h18 : _iducontr_T_139; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_141 = _iducontr_T_65 ? 5'h1a : _iducontr_T_140; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_142 = _iducontr_T_63 ? 5'h1b : _iducontr_T_141; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_143 = _iducontr_T_61 ? 5'h19 : _iducontr_T_142; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_144 = _iducontr_T_59 ? 5'h2 : _iducontr_T_143; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_145 = _iducontr_T_57 ? 5'h11 : _iducontr_T_144; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_146 = _iducontr_T_55 ? 5'h11 : _iducontr_T_145; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_147 = _iducontr_T_53 ? 5'h6 : _iducontr_T_146; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_148 = _iducontr_T_51 ? 5'h5 : _iducontr_T_147; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_149 = _iducontr_T_49 ? 5'h5 : _iducontr_T_148; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_150 = _iducontr_T_47 ? 5'h5 : _iducontr_T_149; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_151 = _iducontr_T_45 ? 5'h5 : _iducontr_T_150; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_152 = _iducontr_T_43 ? 5'h5 : _iducontr_T_151; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_153 = _iducontr_T_41 ? 5'h5 : _iducontr_T_152; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_154 = _iducontr_T_39 ? 5'h5 : _iducontr_T_153; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_155 = _iducontr_T_37 ? 5'h5 : _iducontr_T_154; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_156 = _iducontr_T_35 ? 5'h5 : _iducontr_T_155; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_157 = _iducontr_T_33 ? 5'h14 : _iducontr_T_156; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_158 = _iducontr_T_31 ? 5'h16 : _iducontr_T_157; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_159 = _iducontr_T_29 ? 5'h17 : _iducontr_T_158; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_160 = _iducontr_T_27 ? 5'h15 : _iducontr_T_159; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_161 = _iducontr_T_25 ? 5'h0 : _iducontr_T_160; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_162 = _iducontr_T_23 ? 5'h0 : _iducontr_T_161; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_163 = _iducontr_T_21 ? 5'h0 : _iducontr_T_162; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_164 = _iducontr_T_19 ? 5'h0 : _iducontr_T_163; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_165 = _iducontr_T_17 ? 5'h0 : _iducontr_T_164; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_166 = _iducontr_T_15 ? 5'h0 : _iducontr_T_165; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_167 = _iducontr_T_13 ? 5'h5 : _iducontr_T_166; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_168 = _iducontr_T_11 ? 5'h1 : _iducontr_T_167; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_169 = _iducontr_T_9 ? 5'h1 : _iducontr_T_168; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_170 = _iducontr_T_7 ? 5'h4 : _iducontr_T_169; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_171 = _iducontr_T_5 ? 5'h4 : _iducontr_T_170; // @[Lookup.scala 33:37]
  wire [4:0] _iducontr_T_172 = _iducontr_T_3 ? 5'h5 : _iducontr_T_171; // @[Lookup.scala 33:37]
  wire  _iducontr_T_214 = _iducontr_T_33 ? 1'h0 : _iducontr_T_35; // @[Lookup.scala 33:37]
  wire  _iducontr_T_215 = _iducontr_T_31 ? 1'h0 : _iducontr_T_214; // @[Lookup.scala 33:37]
  wire  _iducontr_T_216 = _iducontr_T_29 ? 1'h0 : _iducontr_T_215; // @[Lookup.scala 33:37]
  wire  _iducontr_T_217 = _iducontr_T_27 ? 1'h0 : _iducontr_T_216; // @[Lookup.scala 33:37]
  wire  _iducontr_T_218 = _iducontr_T_25 ? 1'h0 : _iducontr_T_217; // @[Lookup.scala 33:37]
  wire  _iducontr_T_219 = _iducontr_T_23 ? 1'h0 : _iducontr_T_218; // @[Lookup.scala 33:37]
  wire  _iducontr_T_220 = _iducontr_T_21 ? 1'h0 : _iducontr_T_219; // @[Lookup.scala 33:37]
  wire  _iducontr_T_221 = _iducontr_T_19 ? 1'h0 : _iducontr_T_220; // @[Lookup.scala 33:37]
  wire  _iducontr_T_222 = _iducontr_T_17 ? 1'h0 : _iducontr_T_221; // @[Lookup.scala 33:37]
  wire  _iducontr_T_223 = _iducontr_T_15 ? 1'h0 : _iducontr_T_222; // @[Lookup.scala 33:37]
  wire  _iducontr_T_225 = _iducontr_T_11 ? 1'h0 : _iducontr_T_13 | _iducontr_T_223; // @[Lookup.scala 33:37]
  wire  _iducontr_T_226 = _iducontr_T_9 ? 1'h0 : _iducontr_T_225; // @[Lookup.scala 33:37]
  wire  _iducontr_T_227 = _iducontr_T_7 ? 1'h0 : _iducontr_T_226; // @[Lookup.scala 33:37]
  wire  _iducontr_T_228 = _iducontr_T_5 ? 1'h0 : _iducontr_T_227; // @[Lookup.scala 33:37]
  wire  _iducontr_T_229 = _iducontr_T_3 ? 1'h0 : _iducontr_T_228; // @[Lookup.scala 33:37]
  wire  _iducontr_T_231 = _iducontr_T_113 ? 1'h0 : _iducontr_T_115; // @[Lookup.scala 33:37]
  wire  _iducontr_T_232 = _iducontr_T_111 ? 1'h0 : _iducontr_T_231; // @[Lookup.scala 33:37]
  wire  _iducontr_T_233 = _iducontr_T_109 ? 1'h0 : _iducontr_T_232; // @[Lookup.scala 33:37]
  wire  _iducontr_T_234 = _iducontr_T_107 ? 1'h0 : _iducontr_T_233; // @[Lookup.scala 33:37]
  wire  _iducontr_T_237 = _iducontr_T_101 ? 1'h0 : _iducontr_T_103 | (_iducontr_T_105 | _iducontr_T_234); // @[Lookup.scala 33:37]
  wire  _iducontr_T_238 = _iducontr_T_99 ? 1'h0 : _iducontr_T_237; // @[Lookup.scala 33:37]
  wire  _iducontr_T_241 = _iducontr_T_93 ? 1'h0 : _iducontr_T_95 | (_iducontr_T_97 | _iducontr_T_238); // @[Lookup.scala 33:37]
  wire  _iducontr_T_242 = _iducontr_T_91 ? 1'h0 : _iducontr_T_241; // @[Lookup.scala 33:37]
  wire  _iducontr_T_245 = _iducontr_T_85 ? 1'h0 : _iducontr_T_87 | (_iducontr_T_89 | _iducontr_T_242); // @[Lookup.scala 33:37]
  wire  _iducontr_T_246 = _iducontr_T_83 ? 1'h0 : _iducontr_T_245; // @[Lookup.scala 33:37]
  wire  _iducontr_T_249 = _iducontr_T_77 ? 1'h0 : _iducontr_T_79 | (_iducontr_T_81 | _iducontr_T_246); // @[Lookup.scala 33:37]
  wire  _iducontr_T_254 = _iducontr_T_67 ? 1'h0 : _iducontr_T_69 | (_iducontr_T_71 | (_iducontr_T_73 | (_iducontr_T_75
     | _iducontr_T_249))); // @[Lookup.scala 33:37]
  wire  _iducontr_T_255 = _iducontr_T_65 ? 1'h0 : _iducontr_T_254; // @[Lookup.scala 33:37]
  wire  _iducontr_T_256 = _iducontr_T_63 ? 1'h0 : _iducontr_T_255; // @[Lookup.scala 33:37]
  wire  _iducontr_T_257 = _iducontr_T_61 ? 1'h0 : _iducontr_T_256; // @[Lookup.scala 33:37]
  wire  _iducontr_T_258 = _iducontr_T_59 ? 1'h0 : _iducontr_T_257; // @[Lookup.scala 33:37]
  wire  _iducontr_T_259 = _iducontr_T_57 ? 1'h0 : _iducontr_T_258; // @[Lookup.scala 33:37]
  wire  _iducontr_T_260 = _iducontr_T_55 ? 1'h0 : _iducontr_T_259; // @[Lookup.scala 33:37]
  wire  _iducontr_T_270 = _iducontr_T_35 ? 1'h0 : _iducontr_T_37 | (_iducontr_T_39 | (_iducontr_T_41 | (_iducontr_T_43
     | (_iducontr_T_45 | (_iducontr_T_47 | (_iducontr_T_49 | (_iducontr_T_51 | (_iducontr_T_53 | _iducontr_T_260))))))))
    ; // @[Lookup.scala 33:37]
  wire  _iducontr_T_271 = _iducontr_T_33 ? 1'h0 : _iducontr_T_270; // @[Lookup.scala 33:37]
  wire  _iducontr_T_272 = _iducontr_T_31 ? 1'h0 : _iducontr_T_271; // @[Lookup.scala 33:37]
  wire  _iducontr_T_273 = _iducontr_T_29 ? 1'h0 : _iducontr_T_272; // @[Lookup.scala 33:37]
  wire  _iducontr_T_274 = _iducontr_T_27 ? 1'h0 : _iducontr_T_273; // @[Lookup.scala 33:37]
  wire  _iducontr_T_275 = _iducontr_T_25 ? 1'h0 : _iducontr_T_274; // @[Lookup.scala 33:37]
  wire  _iducontr_T_276 = _iducontr_T_23 ? 1'h0 : _iducontr_T_275; // @[Lookup.scala 33:37]
  wire  _iducontr_T_277 = _iducontr_T_21 ? 1'h0 : _iducontr_T_276; // @[Lookup.scala 33:37]
  wire  _iducontr_T_278 = _iducontr_T_19 ? 1'h0 : _iducontr_T_277; // @[Lookup.scala 33:37]
  wire  _iducontr_T_279 = _iducontr_T_17 ? 1'h0 : _iducontr_T_278; // @[Lookup.scala 33:37]
  wire  _iducontr_T_280 = _iducontr_T_15 ? 1'h0 : _iducontr_T_279; // @[Lookup.scala 33:37]
  wire  _iducontr_T_283 = _iducontr_T_9 ? 1'h0 : _iducontr_T_11 | (_iducontr_T_13 | _iducontr_T_280); // @[Lookup.scala 33:37]
  wire  _iducontr_T_284 = _iducontr_T_7 ? 1'h0 : _iducontr_T_283; // @[Lookup.scala 33:37]
  wire  _iducontr_T_307 = _iducontr_T_75 ? 1'h0 : _iducontr_T_77 | (_iducontr_T_79 | (_iducontr_T_81 | (_iducontr_T_83
     | (_iducontr_T_85 | (_iducontr_T_87 | (_iducontr_T_89 | (_iducontr_T_91 | (_iducontr_T_93 | (_iducontr_T_95 | (
    _iducontr_T_97 | (_iducontr_T_99 | (_iducontr_T_101 | (_iducontr_T_103 | (_iducontr_T_105 | (_iducontr_T_107 | (
    _iducontr_T_109 | (_iducontr_T_111 | (_iducontr_T_113 | _iducontr_T_115)))))))))))))))))); // @[Lookup.scala 33:37]
  wire  _iducontr_T_308 = _iducontr_T_73 ? 1'h0 : _iducontr_T_307; // @[Lookup.scala 33:37]
  wire  _iducontr_T_309 = _iducontr_T_71 ? 1'h0 : _iducontr_T_308; // @[Lookup.scala 33:37]
  wire  _iducontr_T_310 = _iducontr_T_69 ? 1'h0 : _iducontr_T_309; // @[Lookup.scala 33:37]
  wire  _iducontr_T_332 = _iducontr_T_25 ? 1'h0 : _iducontr_T_27 | (_iducontr_T_29 | (_iducontr_T_31 | (_iducontr_T_33
     | (_iducontr_T_35 | (_iducontr_T_37 | (_iducontr_T_39 | (_iducontr_T_41 | (_iducontr_T_43 | (_iducontr_T_45 | (
    _iducontr_T_47 | (_iducontr_T_49 | (_iducontr_T_51 | (_iducontr_T_53 | (_iducontr_T_55 | (_iducontr_T_57 | (
    _iducontr_T_59 | (_iducontr_T_61 | (_iducontr_T_63 | (_iducontr_T_65 | (_iducontr_T_67 | _iducontr_T_310))))))))))))
    )))))))); // @[Lookup.scala 33:37]
  wire  _iducontr_T_333 = _iducontr_T_23 ? 1'h0 : _iducontr_T_332; // @[Lookup.scala 33:37]
  wire  _iducontr_T_334 = _iducontr_T_21 ? 1'h0 : _iducontr_T_333; // @[Lookup.scala 33:37]
  wire  _iducontr_T_335 = _iducontr_T_19 ? 1'h0 : _iducontr_T_334; // @[Lookup.scala 33:37]
  wire  _iducontr_T_336 = _iducontr_T_17 ? 1'h0 : _iducontr_T_335; // @[Lookup.scala 33:37]
  wire  _iducontr_T_337 = _iducontr_T_15 ? 1'h0 : _iducontr_T_336; // @[Lookup.scala 33:37]
  wire  _iducontr_T_383 = _iducontr_T_37 ? 1'h0 : _iducontr_T_39 | (_iducontr_T_41 | (_iducontr_T_43 | (_iducontr_T_45
     | (_iducontr_T_47 | (_iducontr_T_49 | _iducontr_T_51))))); // @[Lookup.scala 33:37]
  wire  _iducontr_T_384 = _iducontr_T_35 ? 1'h0 : _iducontr_T_383; // @[Lookup.scala 33:37]
  wire  _iducontr_T_385 = _iducontr_T_33 ? 1'h0 : _iducontr_T_384; // @[Lookup.scala 33:37]
  wire  _iducontr_T_386 = _iducontr_T_31 ? 1'h0 : _iducontr_T_385; // @[Lookup.scala 33:37]
  wire  _iducontr_T_387 = _iducontr_T_29 ? 1'h0 : _iducontr_T_386; // @[Lookup.scala 33:37]
  wire  _iducontr_T_388 = _iducontr_T_27 ? 1'h0 : _iducontr_T_387; // @[Lookup.scala 33:37]
  wire  _iducontr_T_389 = _iducontr_T_25 ? 1'h0 : _iducontr_T_388; // @[Lookup.scala 33:37]
  wire  _iducontr_T_390 = _iducontr_T_23 ? 1'h0 : _iducontr_T_389; // @[Lookup.scala 33:37]
  wire  _iducontr_T_391 = _iducontr_T_21 ? 1'h0 : _iducontr_T_390; // @[Lookup.scala 33:37]
  wire  _iducontr_T_392 = _iducontr_T_19 ? 1'h0 : _iducontr_T_391; // @[Lookup.scala 33:37]
  wire  _iducontr_T_393 = _iducontr_T_17 ? 1'h0 : _iducontr_T_392; // @[Lookup.scala 33:37]
  wire  _iducontr_T_394 = _iducontr_T_15 ? 1'h0 : _iducontr_T_393; // @[Lookup.scala 33:37]
  wire  _iducontr_T_395 = _iducontr_T_13 ? 1'h0 : _iducontr_T_394; // @[Lookup.scala 33:37]
  wire  _iducontr_T_396 = _iducontr_T_11 ? 1'h0 : _iducontr_T_395; // @[Lookup.scala 33:37]
  wire  _iducontr_T_397 = _iducontr_T_9 ? 1'h0 : _iducontr_T_396; // @[Lookup.scala 33:37]
  wire  _iducontr_T_398 = _iducontr_T_7 ? 1'h0 : _iducontr_T_397; // @[Lookup.scala 33:37]
  wire  _iducontr_T_399 = _iducontr_T_5 ? 1'h0 : _iducontr_T_398; // @[Lookup.scala 33:37]
  wire  _iducontr_T_400 = _iducontr_T_3 ? 1'h0 : _iducontr_T_399; // @[Lookup.scala 33:37]
  wire  _iducontr_T_425 = _iducontr_T_67 ? 1'h0 : _iducontr_T_69 | (_iducontr_T_71 | (_iducontr_T_73 | _iducontr_T_75)); // @[Lookup.scala 33:37]
  wire  _iducontr_T_426 = _iducontr_T_65 ? 1'h0 : _iducontr_T_425; // @[Lookup.scala 33:37]
  wire  _iducontr_T_427 = _iducontr_T_63 ? 1'h0 : _iducontr_T_426; // @[Lookup.scala 33:37]
  wire  _iducontr_T_428 = _iducontr_T_61 ? 1'h0 : _iducontr_T_427; // @[Lookup.scala 33:37]
  wire  _iducontr_T_429 = _iducontr_T_59 ? 1'h0 : _iducontr_T_428; // @[Lookup.scala 33:37]
  wire  _iducontr_T_430 = _iducontr_T_57 ? 1'h0 : _iducontr_T_429; // @[Lookup.scala 33:37]
  wire  _iducontr_T_431 = _iducontr_T_55 ? 1'h0 : _iducontr_T_430; // @[Lookup.scala 33:37]
  wire  _iducontr_T_432 = _iducontr_T_53 ? 1'h0 : _iducontr_T_431; // @[Lookup.scala 33:37]
  wire  _iducontr_T_433 = _iducontr_T_51 ? 1'h0 : _iducontr_T_432; // @[Lookup.scala 33:37]
  wire  _iducontr_T_434 = _iducontr_T_49 ? 1'h0 : _iducontr_T_433; // @[Lookup.scala 33:37]
  wire  _iducontr_T_435 = _iducontr_T_47 ? 1'h0 : _iducontr_T_434; // @[Lookup.scala 33:37]
  wire  _iducontr_T_436 = _iducontr_T_45 ? 1'h0 : _iducontr_T_435; // @[Lookup.scala 33:37]
  wire  _iducontr_T_437 = _iducontr_T_43 ? 1'h0 : _iducontr_T_436; // @[Lookup.scala 33:37]
  wire  _iducontr_T_438 = _iducontr_T_41 ? 1'h0 : _iducontr_T_437; // @[Lookup.scala 33:37]
  wire  _iducontr_T_439 = _iducontr_T_39 ? 1'h0 : _iducontr_T_438; // @[Lookup.scala 33:37]
  wire  _iducontr_T_440 = _iducontr_T_37 ? 1'h0 : _iducontr_T_439; // @[Lookup.scala 33:37]
  wire  _iducontr_T_441 = _iducontr_T_35 ? 1'h0 : _iducontr_T_440; // @[Lookup.scala 33:37]
  wire  _iducontr_T_442 = _iducontr_T_33 ? 1'h0 : _iducontr_T_441; // @[Lookup.scala 33:37]
  wire  _iducontr_T_443 = _iducontr_T_31 ? 1'h0 : _iducontr_T_442; // @[Lookup.scala 33:37]
  wire  _iducontr_T_444 = _iducontr_T_29 ? 1'h0 : _iducontr_T_443; // @[Lookup.scala 33:37]
  wire  _iducontr_T_445 = _iducontr_T_27 ? 1'h0 : _iducontr_T_444; // @[Lookup.scala 33:37]
  wire  _iducontr_T_446 = _iducontr_T_25 ? 1'h0 : _iducontr_T_445; // @[Lookup.scala 33:37]
  wire  _iducontr_T_447 = _iducontr_T_23 ? 1'h0 : _iducontr_T_446; // @[Lookup.scala 33:37]
  wire  _iducontr_T_448 = _iducontr_T_21 ? 1'h0 : _iducontr_T_447; // @[Lookup.scala 33:37]
  wire  _iducontr_T_449 = _iducontr_T_19 ? 1'h0 : _iducontr_T_448; // @[Lookup.scala 33:37]
  wire  _iducontr_T_450 = _iducontr_T_17 ? 1'h0 : _iducontr_T_449; // @[Lookup.scala 33:37]
  wire  _iducontr_T_451 = _iducontr_T_15 ? 1'h0 : _iducontr_T_450; // @[Lookup.scala 33:37]
  wire  _iducontr_T_452 = _iducontr_T_13 ? 1'h0 : _iducontr_T_451; // @[Lookup.scala 33:37]
  wire  _iducontr_T_453 = _iducontr_T_11 ? 1'h0 : _iducontr_T_452; // @[Lookup.scala 33:37]
  wire  _iducontr_T_454 = _iducontr_T_9 ? 1'h0 : _iducontr_T_453; // @[Lookup.scala 33:37]
  wire  _iducontr_T_455 = _iducontr_T_7 ? 1'h0 : _iducontr_T_454; // @[Lookup.scala 33:37]
  wire  _iducontr_T_456 = _iducontr_T_5 ? 1'h0 : _iducontr_T_455; // @[Lookup.scala 33:37]
  wire  _iducontr_T_457 = _iducontr_T_3 ? 1'h0 : _iducontr_T_456; // @[Lookup.scala 33:37]
  wire  _iducontr_T_566 = _iducontr_T_13 ? 1'h0 : _iducontr_T_15 | (_iducontr_T_17 | (_iducontr_T_19 | (_iducontr_T_21
     | (_iducontr_T_23 | (_iducontr_T_25 | _iducontr_T_217))))); // @[Lookup.scala 33:37]
  wire  _iducontr_T_567 = _iducontr_T_11 ? 1'h0 : _iducontr_T_566; // @[Lookup.scala 33:37]
  wire  _iducontr_T_568 = _iducontr_T_9 ? 1'h0 : _iducontr_T_567; // @[Lookup.scala 33:37]
  wire  _iducontr_T_569 = _iducontr_T_7 ? 1'h0 : _iducontr_T_568; // @[Lookup.scala 33:37]
  wire  _iducontr_T_570 = _iducontr_T_5 ? 1'h0 : _iducontr_T_569; // @[Lookup.scala 33:37]
  wire  _iducontr_T_571 = _iducontr_T_3 ? 1'h0 : _iducontr_T_570; // @[Lookup.scala 33:37]
  wire  _iducontr_T_613 = _iducontr_T_33 ? 1'h0 : _iducontr_T_35 | _iducontr_T_37; // @[Lookup.scala 33:37]
  wire  _iducontr_T_614 = _iducontr_T_31 ? 1'h0 : _iducontr_T_613; // @[Lookup.scala 33:37]
  wire  _iducontr_T_615 = _iducontr_T_29 ? 1'h0 : _iducontr_T_614; // @[Lookup.scala 33:37]
  wire  _iducontr_T_616 = _iducontr_T_27 ? 1'h0 : _iducontr_T_615; // @[Lookup.scala 33:37]
  wire  _iducontr_T_617 = _iducontr_T_25 ? 1'h0 : _iducontr_T_616; // @[Lookup.scala 33:37]
  wire  _iducontr_T_618 = _iducontr_T_23 ? 1'h0 : _iducontr_T_617; // @[Lookup.scala 33:37]
  wire  _iducontr_T_619 = _iducontr_T_21 ? 1'h0 : _iducontr_T_618; // @[Lookup.scala 33:37]
  wire  _iducontr_T_620 = _iducontr_T_19 ? 1'h0 : _iducontr_T_619; // @[Lookup.scala 33:37]
  wire  _iducontr_T_621 = _iducontr_T_17 ? 1'h0 : _iducontr_T_620; // @[Lookup.scala 33:37]
  wire  _iducontr_T_622 = _iducontr_T_15 ? 1'h0 : _iducontr_T_621; // @[Lookup.scala 33:37]
  wire  _iducontr_T_623 = _iducontr_T_13 ? 1'h0 : _iducontr_T_622; // @[Lookup.scala 33:37]
  wire  _iducontr_T_624 = _iducontr_T_11 ? 1'h0 : _iducontr_T_623; // @[Lookup.scala 33:37]
  wire  _iducontr_T_625 = _iducontr_T_9 ? 1'h0 : _iducontr_T_624; // @[Lookup.scala 33:37]
  wire  _iducontr_T_626 = _iducontr_T_7 ? 1'h0 : _iducontr_T_625; // @[Lookup.scala 33:37]
  wire  _iducontr_T_627 = _iducontr_T_5 ? 1'h0 : _iducontr_T_626; // @[Lookup.scala 33:37]
  wire  _iducontr_T_628 = _iducontr_T_3 ? 1'h0 : _iducontr_T_627; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_641 = _iducontr_T_91 ? 3'h6 : 3'h4; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_642 = _iducontr_T_89 ? 3'h6 : _iducontr_T_641; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_643 = _iducontr_T_87 ? 3'h5 : _iducontr_T_642; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_644 = _iducontr_T_85 ? 3'h5 : _iducontr_T_643; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_645 = _iducontr_T_83 ? 3'h4 : _iducontr_T_644; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_646 = _iducontr_T_81 ? 3'h4 : _iducontr_T_645; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_647 = _iducontr_T_79 ? 3'h4 : _iducontr_T_646; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_648 = _iducontr_T_77 ? 3'h4 : _iducontr_T_647; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_649 = _iducontr_T_75 ? 3'h4 : _iducontr_T_648; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_650 = _iducontr_T_73 ? 3'h4 : _iducontr_T_649; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_651 = _iducontr_T_71 ? 3'h4 : _iducontr_T_650; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_652 = _iducontr_T_69 ? 3'h4 : _iducontr_T_651; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_653 = _iducontr_T_67 ? 3'h4 : _iducontr_T_652; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_654 = _iducontr_T_65 ? 3'h4 : _iducontr_T_653; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_655 = _iducontr_T_63 ? 3'h4 : _iducontr_T_654; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_656 = _iducontr_T_61 ? 3'h4 : _iducontr_T_655; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_657 = _iducontr_T_59 ? 3'h4 : _iducontr_T_656; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_658 = _iducontr_T_57 ? 3'h4 : _iducontr_T_657; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_659 = _iducontr_T_55 ? 3'h4 : _iducontr_T_658; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_660 = _iducontr_T_53 ? 3'h4 : _iducontr_T_659; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_661 = _iducontr_T_51 ? 3'h4 : _iducontr_T_660; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_662 = _iducontr_T_49 ? 3'h4 : _iducontr_T_661; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_663 = _iducontr_T_47 ? 3'h4 : _iducontr_T_662; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_664 = _iducontr_T_45 ? 3'h4 : _iducontr_T_663; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_665 = _iducontr_T_43 ? 3'h4 : _iducontr_T_664; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_666 = _iducontr_T_41 ? 3'h4 : _iducontr_T_665; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_667 = _iducontr_T_39 ? 3'h4 : _iducontr_T_666; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_668 = _iducontr_T_37 ? 3'h4 : _iducontr_T_667; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_669 = _iducontr_T_35 ? 3'h4 : _iducontr_T_668; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_670 = _iducontr_T_33 ? 3'h4 : _iducontr_T_669; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_671 = _iducontr_T_31 ? 3'h4 : _iducontr_T_670; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_672 = _iducontr_T_29 ? 3'h4 : _iducontr_T_671; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_673 = _iducontr_T_27 ? 3'h4 : _iducontr_T_672; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_674 = _iducontr_T_25 ? 3'h7 : _iducontr_T_673; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_675 = _iducontr_T_23 ? 3'h6 : _iducontr_T_674; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_676 = _iducontr_T_21 ? 3'h5 : _iducontr_T_675; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_677 = _iducontr_T_19 ? 3'h2 : _iducontr_T_676; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_678 = _iducontr_T_17 ? 3'h1 : _iducontr_T_677; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_679 = _iducontr_T_15 ? 3'h0 : _iducontr_T_678; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_680 = _iducontr_T_13 ? 3'h4 : _iducontr_T_679; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_681 = _iducontr_T_11 ? 3'h4 : _iducontr_T_680; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_682 = _iducontr_T_9 ? 3'h4 : _iducontr_T_681; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_683 = _iducontr_T_7 ? 3'h4 : _iducontr_T_682; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_684 = _iducontr_T_5 ? 3'h4 : _iducontr_T_683; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_685 = _iducontr_T_3 ? 3'h4 : _iducontr_T_684; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_706 = _iducontr_T_75 ? 2'h2 : 2'h3; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_707 = _iducontr_T_73 ? 2'h1 : _iducontr_T_706; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_708 = _iducontr_T_71 ? 2'h3 : _iducontr_T_707; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_709 = _iducontr_T_69 ? 2'h0 : _iducontr_T_708; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_710 = _iducontr_T_67 ? 2'h3 : _iducontr_T_709; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_711 = _iducontr_T_65 ? 2'h3 : _iducontr_T_710; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_712 = _iducontr_T_63 ? 2'h3 : _iducontr_T_711; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_713 = _iducontr_T_61 ? 2'h3 : _iducontr_T_712; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_714 = _iducontr_T_59 ? 2'h3 : _iducontr_T_713; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_715 = _iducontr_T_57 ? 2'h3 : _iducontr_T_714; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_716 = _iducontr_T_55 ? 2'h3 : _iducontr_T_715; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_717 = _iducontr_T_53 ? 2'h3 : _iducontr_T_716; // @[Lookup.scala 33:37]
  wire [1:0] _iducontr_T_718 = _iducontr_T_51 ? 2'h2 : _iducontr_T_717; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_719 = _iducontr_T_49 ? 3'h6 : {{1'd0}, _iducontr_T_718}; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_720 = _iducontr_T_47 ? 3'h1 : _iducontr_T_719; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_721 = _iducontr_T_45 ? 3'h5 : _iducontr_T_720; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_722 = _iducontr_T_43 ? 3'h3 : _iducontr_T_721; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_723 = _iducontr_T_41 ? 3'h0 : _iducontr_T_722; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_724 = _iducontr_T_39 ? 3'h4 : _iducontr_T_723; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_725 = _iducontr_T_37 ? 3'h3 : _iducontr_T_724; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_726 = _iducontr_T_35 ? 3'h3 : _iducontr_T_725; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_727 = _iducontr_T_33 ? 3'h3 : _iducontr_T_726; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_728 = _iducontr_T_31 ? 3'h3 : _iducontr_T_727; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_729 = _iducontr_T_29 ? 3'h3 : _iducontr_T_728; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_730 = _iducontr_T_27 ? 3'h3 : _iducontr_T_729; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_731 = _iducontr_T_25 ? 3'h3 : _iducontr_T_730; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_732 = _iducontr_T_23 ? 3'h3 : _iducontr_T_731; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_733 = _iducontr_T_21 ? 3'h3 : _iducontr_T_732; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_734 = _iducontr_T_19 ? 3'h3 : _iducontr_T_733; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_735 = _iducontr_T_17 ? 3'h3 : _iducontr_T_734; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_736 = _iducontr_T_15 ? 3'h3 : _iducontr_T_735; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_737 = _iducontr_T_13 ? 3'h3 : _iducontr_T_736; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_738 = _iducontr_T_11 ? 3'h3 : _iducontr_T_737; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_739 = _iducontr_T_9 ? 3'h3 : _iducontr_T_738; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_740 = _iducontr_T_7 ? 3'h3 : _iducontr_T_739; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_741 = _iducontr_T_5 ? 3'h3 : _iducontr_T_740; // @[Lookup.scala 33:37]
  wire [2:0] _iducontr_T_742 = _iducontr_T_3 ? 3'h3 : _iducontr_T_741; // @[Lookup.scala 33:37]
  assign io_out_alu_op = _iducontr_T_1 ? 5'h5 : _iducontr_T_172; // @[Lookup.scala 33:37]
  assign io_out_alu_srca = _iducontr_T_1 ? 1'h0 : _iducontr_T_229; // @[Lookup.scala 33:37]
  assign io_out_alu_srcb = _iducontr_T_1 ? 1'h0 : _iducontr_T_3 | (_iducontr_T_5 | _iducontr_T_284); // @[Lookup.scala 33:37]
  assign io_out_reg_write = _iducontr_T_1 | (_iducontr_T_3 | (_iducontr_T_5 | (_iducontr_T_7 | (_iducontr_T_9 | (
    _iducontr_T_11 | (_iducontr_T_13 | _iducontr_T_337)))))); // @[Lookup.scala 33:37]
  assign io_out_mem_read = _iducontr_T_1 ? 1'h0 : _iducontr_T_400; // @[Lookup.scala 33:37]
  assign io_out_mem_write = _iducontr_T_1 ? 1'h0 : _iducontr_T_457; // @[Lookup.scala 33:37]
  assign io_out_mem_to_reg = _iducontr_T_1 ? 1'h0 : _iducontr_T_400; // @[Lookup.scala 33:37]
  assign io_out_pc_src = _iducontr_T_1 ? 1'h0 : _iducontr_T_571; // @[Lookup.scala 33:37]
  assign io_out_jalr = _iducontr_T_1 ? 1'h0 : _iducontr_T_628; // @[Lookup.scala 33:37]
  assign io_out_branch = _iducontr_T_1 ? 3'h4 : _iducontr_T_685; // @[Lookup.scala 33:37]
  assign io_out_wdth = _iducontr_T_1 ? 3'h3 : _iducontr_T_742; // @[Lookup.scala 33:37]
endmodule
module ImmGen(
  input  [31:0] io_in_inst,
  output [63:0] io_out_imm
);
  wire [51:0] imm_hi = io_in_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [11:0] imm_lo = io_in_inst[31:20]; // @[ImmGen.scala 25:53]
  wire [63:0] _imm_T_2 = {imm_hi,imm_lo}; // @[Cat.scala 30:58]
  wire [31:0] imm_hi_hi = io_in_inst[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [19:0] imm_hi_lo = io_in_inst[31:12]; // @[ImmGen.scala 31:53]
  wire [63:0] _imm_T_11 = {imm_hi_hi,imm_hi_lo,12'h0}; // @[Cat.scala 30:58]
  wire  imm_hi_hi_lo = io_in_inst[7]; // @[ImmGen.scala 29:53]
  wire [5:0] imm_hi_lo_1 = io_in_inst[30:25]; // @[ImmGen.scala 29:68]
  wire [3:0] imm_lo_hi = io_in_inst[11:8]; // @[ImmGen.scala 29:88]
  wire [63:0] _imm_T_14 = {imm_hi,imm_hi_hi_lo,imm_hi_lo_1,imm_lo_hi,1'h0}; // @[Cat.scala 30:58]
  wire [43:0] imm_hi_hi_hi_6 = io_in_inst[31] ? 44'hfffffffffff : 44'h0; // @[Bitwise.scala 72:12]
  wire [7:0] imm_hi_hi_lo_6 = io_in_inst[19:12]; // @[ImmGen.scala 33:53]
  wire  imm_hi_lo_7 = io_in_inst[20]; // @[ImmGen.scala 33:73]
  wire [9:0] imm_lo_hi_6 = io_in_inst[30:21]; // @[ImmGen.scala 33:89]
  wire [63:0] _imm_T_32 = {imm_hi_hi_hi_6,imm_hi_hi_lo_6,imm_hi_lo_7,imm_lo_hi_6,1'h0}; // @[Cat.scala 30:58]
  wire [6:0] imm_hi_lo_9 = io_in_inst[31:25]; // @[ImmGen.scala 27:53]
  wire [4:0] imm_lo_18 = io_in_inst[11:7]; // @[ImmGen.scala 27:73]
  wire [63:0] _imm_T_62 = {imm_hi,imm_hi_lo_9,imm_lo_18}; // @[Cat.scala 30:58]
  wire [31:0] _imm_T_99 = io_in_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _imm_T_100 = 32'h33 == _imm_T_99; // @[Lookup.scala 31:38]
  wire [31:0] _imm_T_101 = io_in_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _imm_T_102 = 32'h13 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_104 = 32'h1b == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_106 = 32'h3b == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_108 = 32'h7033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_110 = 32'h7013 == _imm_T_101; // @[Lookup.scala 31:38]
  wire [31:0] _imm_T_111 = io_in_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _imm_T_112 = 32'h17 == _imm_T_111; // @[Lookup.scala 31:38]
  wire  _imm_T_114 = 32'h63 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_116 = 32'h5063 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_118 = 32'h7063 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_120 = 32'h4063 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_122 = 32'h6063 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_124 = 32'h1063 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_126 = 32'h2004033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_128 = 32'h2005033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_130 = 32'h200503b == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_132 = 32'h200403b == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_134 = 32'h6f == _imm_T_111; // @[Lookup.scala 31:38]
  wire  _imm_T_136 = 32'h67 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_138 = 32'h3 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_140 = 32'h4003 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_142 = 32'h3003 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_144 = 32'h1003 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_146 = 32'h5003 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_148 = 32'h2003 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_150 = 32'h6003 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_152 = 32'h37 == _imm_T_111; // @[Lookup.scala 31:38]
  wire  _imm_T_154 = 32'h2000033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_156 = 32'h200003b == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_158 = 32'h6033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_160 = 32'h2006033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_162 = 32'h2007033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_164 = 32'h200703b == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_166 = 32'h200603b == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_168 = 32'h23 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_170 = 32'h3023 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_172 = 32'h1023 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_174 = 32'h2023 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_176 = 32'h1033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire [31:0] _imm_T_177 = io_in_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _imm_T_178 = 32'h1013 == _imm_T_177; // @[Lookup.scala 31:38]
  wire  _imm_T_180 = 32'h101b == _imm_T_177; // @[Lookup.scala 31:38]
  wire  _imm_T_182 = 32'h103b == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_184 = 32'h2033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_186 = 32'h2013 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_188 = 32'h3013 == _imm_T_101; // @[Lookup.scala 31:38]
  wire  _imm_T_190 = 32'h3033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_192 = 32'h40005033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_194 = 32'h40005013 == _imm_T_177; // @[Lookup.scala 31:38]
  wire  _imm_T_196 = 32'h4000501b == _imm_T_177; // @[Lookup.scala 31:38]
  wire  _imm_T_198 = 32'h4000503b == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_200 = 32'h5033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_202 = 32'h5013 == _imm_T_177; // @[Lookup.scala 31:38]
  wire  _imm_T_204 = 32'h501b == _imm_T_177; // @[Lookup.scala 31:38]
  wire  _imm_T_206 = 32'h503b == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_208 = 32'h40000033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_210 = 32'h4000003b == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_212 = 32'h4033 == _imm_T_99; // @[Lookup.scala 31:38]
  wire  _imm_T_214 = 32'h4013 == _imm_T_101; // @[Lookup.scala 31:38]
  wire [63:0] _imm_T_215 = _imm_T_214 ? _imm_T_2 : 64'h0; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_216 = _imm_T_212 ? 64'h0 : _imm_T_215; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_217 = _imm_T_210 ? 64'h0 : _imm_T_216; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_218 = _imm_T_208 ? 64'h0 : _imm_T_217; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_219 = _imm_T_206 ? 64'h0 : _imm_T_218; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_220 = _imm_T_204 ? _imm_T_2 : _imm_T_219; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_221 = _imm_T_202 ? _imm_T_2 : _imm_T_220; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_222 = _imm_T_200 ? 64'h0 : _imm_T_221; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_223 = _imm_T_198 ? 64'h0 : _imm_T_222; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_224 = _imm_T_196 ? _imm_T_2 : _imm_T_223; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_225 = _imm_T_194 ? _imm_T_2 : _imm_T_224; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_226 = _imm_T_192 ? 64'h0 : _imm_T_225; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_227 = _imm_T_190 ? 64'h0 : _imm_T_226; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_228 = _imm_T_188 ? _imm_T_2 : _imm_T_227; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_229 = _imm_T_186 ? _imm_T_2 : _imm_T_228; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_230 = _imm_T_184 ? 64'h0 : _imm_T_229; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_231 = _imm_T_182 ? 64'h0 : _imm_T_230; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_232 = _imm_T_180 ? _imm_T_2 : _imm_T_231; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_233 = _imm_T_178 ? _imm_T_2 : _imm_T_232; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_234 = _imm_T_176 ? 64'h0 : _imm_T_233; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_235 = _imm_T_174 ? _imm_T_62 : _imm_T_234; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_236 = _imm_T_172 ? _imm_T_62 : _imm_T_235; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_237 = _imm_T_170 ? _imm_T_62 : _imm_T_236; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_238 = _imm_T_168 ? _imm_T_62 : _imm_T_237; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_239 = _imm_T_166 ? 64'h0 : _imm_T_238; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_240 = _imm_T_164 ? 64'h0 : _imm_T_239; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_241 = _imm_T_162 ? 64'h0 : _imm_T_240; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_242 = _imm_T_160 ? 64'h0 : _imm_T_241; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_243 = _imm_T_158 ? 64'h0 : _imm_T_242; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_244 = _imm_T_156 ? 64'h0 : _imm_T_243; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_245 = _imm_T_154 ? 64'h0 : _imm_T_244; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_246 = _imm_T_152 ? _imm_T_11 : _imm_T_245; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_247 = _imm_T_150 ? _imm_T_2 : _imm_T_246; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_248 = _imm_T_148 ? _imm_T_2 : _imm_T_247; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_249 = _imm_T_146 ? _imm_T_2 : _imm_T_248; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_250 = _imm_T_144 ? _imm_T_2 : _imm_T_249; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_251 = _imm_T_142 ? _imm_T_2 : _imm_T_250; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_252 = _imm_T_140 ? _imm_T_2 : _imm_T_251; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_253 = _imm_T_138 ? _imm_T_2 : _imm_T_252; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_254 = _imm_T_136 ? _imm_T_2 : _imm_T_253; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_255 = _imm_T_134 ? _imm_T_32 : _imm_T_254; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_256 = _imm_T_132 ? 64'h0 : _imm_T_255; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_257 = _imm_T_130 ? 64'h0 : _imm_T_256; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_258 = _imm_T_128 ? 64'h0 : _imm_T_257; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_259 = _imm_T_126 ? 64'h0 : _imm_T_258; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_260 = _imm_T_124 ? _imm_T_14 : _imm_T_259; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_261 = _imm_T_122 ? _imm_T_14 : _imm_T_260; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_262 = _imm_T_120 ? _imm_T_14 : _imm_T_261; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_263 = _imm_T_118 ? _imm_T_14 : _imm_T_262; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_264 = _imm_T_116 ? _imm_T_14 : _imm_T_263; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_265 = _imm_T_114 ? _imm_T_14 : _imm_T_264; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_266 = _imm_T_112 ? _imm_T_11 : _imm_T_265; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_267 = _imm_T_110 ? _imm_T_2 : _imm_T_266; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_268 = _imm_T_108 ? 64'h0 : _imm_T_267; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_269 = _imm_T_106 ? 64'h0 : _imm_T_268; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_270 = _imm_T_104 ? _imm_T_2 : _imm_T_269; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_271 = _imm_T_102 ? _imm_T_2 : _imm_T_270; // @[Lookup.scala 33:37]
  assign io_out_imm = _imm_T_100 ? 64'h0 : _imm_T_271; // @[Lookup.scala 33:37]
endmodule
module IDU(
  input  [31:0] io_in_inst,
  output [4:0]  io_out_rs1,
  output [4:0]  io_out_rs2,
  output [4:0]  io_out_rd,
  output [63:0] io_out_imm,
  output [4:0]  io_contr_alu_op,
  output        io_contr_alu_srca,
  output        io_contr_alu_srcb,
  output        io_contr_reg_write,
  output        io_contr_mem_read,
  output        io_contr_mem_write,
  output        io_contr_mem_to_reg,
  output        io_contr_pc_src,
  output        io_contr_jalr,
  output [2:0]  io_contr_branch,
  output [2:0]  io_contr_wdth
);
  wire [31:0] ebreak_inst; // @[IDU.scala 40:22]
  wire [31:0] contr_io_in_inst; // @[IDU.scala 43:21]
  wire [4:0] contr_io_out_alu_op; // @[IDU.scala 43:21]
  wire  contr_io_out_alu_srca; // @[IDU.scala 43:21]
  wire  contr_io_out_alu_srcb; // @[IDU.scala 43:21]
  wire  contr_io_out_reg_write; // @[IDU.scala 43:21]
  wire  contr_io_out_mem_read; // @[IDU.scala 43:21]
  wire  contr_io_out_mem_write; // @[IDU.scala 43:21]
  wire  contr_io_out_mem_to_reg; // @[IDU.scala 43:21]
  wire  contr_io_out_pc_src; // @[IDU.scala 43:21]
  wire  contr_io_out_jalr; // @[IDU.scala 43:21]
  wire [2:0] contr_io_out_branch; // @[IDU.scala 43:21]
  wire [2:0] contr_io_out_wdth; // @[IDU.scala 43:21]
  wire [31:0] immgen_io_in_inst; // @[IDU.scala 57:22]
  wire [63:0] immgen_io_out_imm; // @[IDU.scala 57:22]
  Ebreak ebreak ( // @[IDU.scala 40:22]
    .inst(ebreak_inst)
  );
  Contr contr ( // @[IDU.scala 43:21]
    .io_in_inst(contr_io_in_inst),
    .io_out_alu_op(contr_io_out_alu_op),
    .io_out_alu_srca(contr_io_out_alu_srca),
    .io_out_alu_srcb(contr_io_out_alu_srcb),
    .io_out_reg_write(contr_io_out_reg_write),
    .io_out_mem_read(contr_io_out_mem_read),
    .io_out_mem_write(contr_io_out_mem_write),
    .io_out_mem_to_reg(contr_io_out_mem_to_reg),
    .io_out_pc_src(contr_io_out_pc_src),
    .io_out_jalr(contr_io_out_jalr),
    .io_out_branch(contr_io_out_branch),
    .io_out_wdth(contr_io_out_wdth)
  );
  ImmGen immgen ( // @[IDU.scala 57:22]
    .io_in_inst(immgen_io_in_inst),
    .io_out_imm(immgen_io_out_imm)
  );
  assign io_out_rs1 = io_in_inst[19:15]; // @[IDU.scala 61:27]
  assign io_out_rs2 = io_in_inst[24:20]; // @[IDU.scala 62:27]
  assign io_out_rd = io_in_inst[11:7]; // @[IDU.scala 63:27]
  assign io_out_imm = immgen_io_out_imm; // @[IDU.scala 59:21]
  assign io_contr_alu_op = contr_io_out_alu_op; // @[IDU.scala 45:23]
  assign io_contr_alu_srca = contr_io_out_alu_srca; // @[IDU.scala 46:23]
  assign io_contr_alu_srcb = contr_io_out_alu_srcb; // @[IDU.scala 47:23]
  assign io_contr_reg_write = contr_io_out_reg_write; // @[IDU.scala 48:23]
  assign io_contr_mem_read = contr_io_out_mem_read; // @[IDU.scala 49:23]
  assign io_contr_mem_write = contr_io_out_mem_write; // @[IDU.scala 50:23]
  assign io_contr_mem_to_reg = contr_io_out_mem_to_reg; // @[IDU.scala 51:23]
  assign io_contr_pc_src = contr_io_out_pc_src; // @[IDU.scala 52:23]
  assign io_contr_jalr = contr_io_out_jalr; // @[IDU.scala 53:23]
  assign io_contr_branch = contr_io_out_branch; // @[IDU.scala 54:23]
  assign io_contr_wdth = contr_io_out_wdth; // @[IDU.scala 55:23]
  assign ebreak_inst = io_in_inst; // @[IDU.scala 41:23]
  assign contr_io_in_inst = io_in_inst; // @[IDU.scala 44:23]
  assign immgen_io_in_inst = io_in_inst; // @[IDU.scala 58:21]
endmodule
module RegFile(
  input         clock,
  input         reset,
  input  [63:0] io_in_pc,
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
  wire [63:0] trace_regs_pc; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_0; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_1; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_2; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_3; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_4; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_5; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_6; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_7; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_8; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_9; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_10; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_11; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_12; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_13; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_14; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_15; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_16; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_17; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_18; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_19; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_20; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_21; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_22; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_23; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_24; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_25; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_26; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_27; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_28; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_29; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_30; // @[RegFile.scala 30:26]
  wire [63:0] trace_regs_rf_31; // @[RegFile.scala 30:26]
  reg [63:0] reg_1; // @[RegFile.scala 28:20]
  reg [63:0] reg_2; // @[RegFile.scala 28:20]
  reg [63:0] reg_3; // @[RegFile.scala 28:20]
  reg [63:0] reg_4; // @[RegFile.scala 28:20]
  reg [63:0] reg_5; // @[RegFile.scala 28:20]
  reg [63:0] reg_6; // @[RegFile.scala 28:20]
  reg [63:0] reg_7; // @[RegFile.scala 28:20]
  reg [63:0] reg_8; // @[RegFile.scala 28:20]
  reg [63:0] reg_9; // @[RegFile.scala 28:20]
  reg [63:0] reg_10; // @[RegFile.scala 28:20]
  reg [63:0] reg_11; // @[RegFile.scala 28:20]
  reg [63:0] reg_12; // @[RegFile.scala 28:20]
  reg [63:0] reg_13; // @[RegFile.scala 28:20]
  reg [63:0] reg_14; // @[RegFile.scala 28:20]
  reg [63:0] reg_15; // @[RegFile.scala 28:20]
  reg [63:0] reg_16; // @[RegFile.scala 28:20]
  reg [63:0] reg_17; // @[RegFile.scala 28:20]
  reg [63:0] reg_18; // @[RegFile.scala 28:20]
  reg [63:0] reg_19; // @[RegFile.scala 28:20]
  reg [63:0] reg_20; // @[RegFile.scala 28:20]
  reg [63:0] reg_21; // @[RegFile.scala 28:20]
  reg [63:0] reg_22; // @[RegFile.scala 28:20]
  reg [63:0] reg_23; // @[RegFile.scala 28:20]
  reg [63:0] reg_24; // @[RegFile.scala 28:20]
  reg [63:0] reg_25; // @[RegFile.scala 28:20]
  reg [63:0] reg_26; // @[RegFile.scala 28:20]
  reg [63:0] reg_27; // @[RegFile.scala 28:20]
  reg [63:0] reg_28; // @[RegFile.scala 28:20]
  reg [63:0] reg_29; // @[RegFile.scala 28:20]
  reg [63:0] reg_30; // @[RegFile.scala 28:20]
  reg [63:0] reg_31; // @[RegFile.scala 28:20]
  wire [63:0] _GEN_1 = 5'h1 == io_in_rs1_addr ? reg_1 : 64'h0; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_2 = 5'h2 == io_in_rs1_addr ? reg_2 : _GEN_1; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_3 = 5'h3 == io_in_rs1_addr ? reg_3 : _GEN_2; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_4 = 5'h4 == io_in_rs1_addr ? reg_4 : _GEN_3; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_5 = 5'h5 == io_in_rs1_addr ? reg_5 : _GEN_4; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_6 = 5'h6 == io_in_rs1_addr ? reg_6 : _GEN_5; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_7 = 5'h7 == io_in_rs1_addr ? reg_7 : _GEN_6; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_8 = 5'h8 == io_in_rs1_addr ? reg_8 : _GEN_7; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_9 = 5'h9 == io_in_rs1_addr ? reg_9 : _GEN_8; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_10 = 5'ha == io_in_rs1_addr ? reg_10 : _GEN_9; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_11 = 5'hb == io_in_rs1_addr ? reg_11 : _GEN_10; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_12 = 5'hc == io_in_rs1_addr ? reg_12 : _GEN_11; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_13 = 5'hd == io_in_rs1_addr ? reg_13 : _GEN_12; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_14 = 5'he == io_in_rs1_addr ? reg_14 : _GEN_13; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_15 = 5'hf == io_in_rs1_addr ? reg_15 : _GEN_14; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_16 = 5'h10 == io_in_rs1_addr ? reg_16 : _GEN_15; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_17 = 5'h11 == io_in_rs1_addr ? reg_17 : _GEN_16; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_18 = 5'h12 == io_in_rs1_addr ? reg_18 : _GEN_17; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_19 = 5'h13 == io_in_rs1_addr ? reg_19 : _GEN_18; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_20 = 5'h14 == io_in_rs1_addr ? reg_20 : _GEN_19; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_21 = 5'h15 == io_in_rs1_addr ? reg_21 : _GEN_20; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_22 = 5'h16 == io_in_rs1_addr ? reg_22 : _GEN_21; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_23 = 5'h17 == io_in_rs1_addr ? reg_23 : _GEN_22; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_24 = 5'h18 == io_in_rs1_addr ? reg_24 : _GEN_23; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_25 = 5'h19 == io_in_rs1_addr ? reg_25 : _GEN_24; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_26 = 5'h1a == io_in_rs1_addr ? reg_26 : _GEN_25; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_27 = 5'h1b == io_in_rs1_addr ? reg_27 : _GEN_26; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_28 = 5'h1c == io_in_rs1_addr ? reg_28 : _GEN_27; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_29 = 5'h1d == io_in_rs1_addr ? reg_29 : _GEN_28; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_30 = 5'h1e == io_in_rs1_addr ? reg_30 : _GEN_29; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  wire [63:0] _GEN_33 = 5'h1 == io_in_rs2_addr ? reg_1 : 64'h0; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_34 = 5'h2 == io_in_rs2_addr ? reg_2 : _GEN_33; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_35 = 5'h3 == io_in_rs2_addr ? reg_3 : _GEN_34; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_36 = 5'h4 == io_in_rs2_addr ? reg_4 : _GEN_35; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_37 = 5'h5 == io_in_rs2_addr ? reg_5 : _GEN_36; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_38 = 5'h6 == io_in_rs2_addr ? reg_6 : _GEN_37; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_39 = 5'h7 == io_in_rs2_addr ? reg_7 : _GEN_38; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_40 = 5'h8 == io_in_rs2_addr ? reg_8 : _GEN_39; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_41 = 5'h9 == io_in_rs2_addr ? reg_9 : _GEN_40; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_42 = 5'ha == io_in_rs2_addr ? reg_10 : _GEN_41; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_43 = 5'hb == io_in_rs2_addr ? reg_11 : _GEN_42; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_44 = 5'hc == io_in_rs2_addr ? reg_12 : _GEN_43; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_45 = 5'hd == io_in_rs2_addr ? reg_13 : _GEN_44; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_46 = 5'he == io_in_rs2_addr ? reg_14 : _GEN_45; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_47 = 5'hf == io_in_rs2_addr ? reg_15 : _GEN_46; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_48 = 5'h10 == io_in_rs2_addr ? reg_16 : _GEN_47; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_49 = 5'h11 == io_in_rs2_addr ? reg_17 : _GEN_48; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_50 = 5'h12 == io_in_rs2_addr ? reg_18 : _GEN_49; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_51 = 5'h13 == io_in_rs2_addr ? reg_19 : _GEN_50; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_52 = 5'h14 == io_in_rs2_addr ? reg_20 : _GEN_51; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_53 = 5'h15 == io_in_rs2_addr ? reg_21 : _GEN_52; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_54 = 5'h16 == io_in_rs2_addr ? reg_22 : _GEN_53; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_55 = 5'h17 == io_in_rs2_addr ? reg_23 : _GEN_54; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_56 = 5'h18 == io_in_rs2_addr ? reg_24 : _GEN_55; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_57 = 5'h19 == io_in_rs2_addr ? reg_25 : _GEN_56; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_58 = 5'h1a == io_in_rs2_addr ? reg_26 : _GEN_57; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_59 = 5'h1b == io_in_rs2_addr ? reg_27 : _GEN_58; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_60 = 5'h1c == io_in_rs2_addr ? reg_28 : _GEN_59; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_61 = 5'h1d == io_in_rs2_addr ? reg_29 : _GEN_60; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  wire [63:0] _GEN_62 = 5'h1e == io_in_rs2_addr ? reg_30 : _GEN_61; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  TraceRegs trace_regs ( // @[RegFile.scala 30:26]
    .pc(trace_regs_pc),
    .rf_0(trace_regs_rf_0),
    .rf_1(trace_regs_rf_1),
    .rf_2(trace_regs_rf_2),
    .rf_3(trace_regs_rf_3),
    .rf_4(trace_regs_rf_4),
    .rf_5(trace_regs_rf_5),
    .rf_6(trace_regs_rf_6),
    .rf_7(trace_regs_rf_7),
    .rf_8(trace_regs_rf_8),
    .rf_9(trace_regs_rf_9),
    .rf_10(trace_regs_rf_10),
    .rf_11(trace_regs_rf_11),
    .rf_12(trace_regs_rf_12),
    .rf_13(trace_regs_rf_13),
    .rf_14(trace_regs_rf_14),
    .rf_15(trace_regs_rf_15),
    .rf_16(trace_regs_rf_16),
    .rf_17(trace_regs_rf_17),
    .rf_18(trace_regs_rf_18),
    .rf_19(trace_regs_rf_19),
    .rf_20(trace_regs_rf_20),
    .rf_21(trace_regs_rf_21),
    .rf_22(trace_regs_rf_22),
    .rf_23(trace_regs_rf_23),
    .rf_24(trace_regs_rf_24),
    .rf_25(trace_regs_rf_25),
    .rf_26(trace_regs_rf_26),
    .rf_27(trace_regs_rf_27),
    .rf_28(trace_regs_rf_28),
    .rf_29(trace_regs_rf_29),
    .rf_30(trace_regs_rf_30),
    .rf_31(trace_regs_rf_31)
  );
  assign io_out_rs1_data = 5'h1f == io_in_rs1_addr ? reg_31 : _GEN_30; // @[RegFile.scala 34:19 RegFile.scala 34:19]
  assign io_out_rs2_data = 5'h1f == io_in_rs2_addr ? reg_31 : _GEN_62; // @[RegFile.scala 35:19 RegFile.scala 35:19]
  assign trace_regs_pc = io_in_pc; // @[RegFile.scala 31:20]
  assign trace_regs_rf_0 = 64'h0; // @[RegFile.scala 32:20]
  assign trace_regs_rf_1 = reg_1; // @[RegFile.scala 32:20]
  assign trace_regs_rf_2 = reg_2; // @[RegFile.scala 32:20]
  assign trace_regs_rf_3 = reg_3; // @[RegFile.scala 32:20]
  assign trace_regs_rf_4 = reg_4; // @[RegFile.scala 32:20]
  assign trace_regs_rf_5 = reg_5; // @[RegFile.scala 32:20]
  assign trace_regs_rf_6 = reg_6; // @[RegFile.scala 32:20]
  assign trace_regs_rf_7 = reg_7; // @[RegFile.scala 32:20]
  assign trace_regs_rf_8 = reg_8; // @[RegFile.scala 32:20]
  assign trace_regs_rf_9 = reg_9; // @[RegFile.scala 32:20]
  assign trace_regs_rf_10 = reg_10; // @[RegFile.scala 32:20]
  assign trace_regs_rf_11 = reg_11; // @[RegFile.scala 32:20]
  assign trace_regs_rf_12 = reg_12; // @[RegFile.scala 32:20]
  assign trace_regs_rf_13 = reg_13; // @[RegFile.scala 32:20]
  assign trace_regs_rf_14 = reg_14; // @[RegFile.scala 32:20]
  assign trace_regs_rf_15 = reg_15; // @[RegFile.scala 32:20]
  assign trace_regs_rf_16 = reg_16; // @[RegFile.scala 32:20]
  assign trace_regs_rf_17 = reg_17; // @[RegFile.scala 32:20]
  assign trace_regs_rf_18 = reg_18; // @[RegFile.scala 32:20]
  assign trace_regs_rf_19 = reg_19; // @[RegFile.scala 32:20]
  assign trace_regs_rf_20 = reg_20; // @[RegFile.scala 32:20]
  assign trace_regs_rf_21 = reg_21; // @[RegFile.scala 32:20]
  assign trace_regs_rf_22 = reg_22; // @[RegFile.scala 32:20]
  assign trace_regs_rf_23 = reg_23; // @[RegFile.scala 32:20]
  assign trace_regs_rf_24 = reg_24; // @[RegFile.scala 32:20]
  assign trace_regs_rf_25 = reg_25; // @[RegFile.scala 32:20]
  assign trace_regs_rf_26 = reg_26; // @[RegFile.scala 32:20]
  assign trace_regs_rf_27 = reg_27; // @[RegFile.scala 32:20]
  assign trace_regs_rf_28 = reg_28; // @[RegFile.scala 32:20]
  assign trace_regs_rf_29 = reg_29; // @[RegFile.scala 32:20]
  assign trace_regs_rf_30 = reg_30; // @[RegFile.scala 32:20]
  assign trace_regs_rf_31 = reg_31; // @[RegFile.scala 32:20]
  always @(posedge clock) begin
    if (reset) begin // @[RegFile.scala 28:20]
      reg_1 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h1 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_1 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_2 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h2 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_2 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_3 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h3 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_3 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_4 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h4 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_4 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_5 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h5 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_5 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_6 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h6 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_6 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_7 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h7 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_7 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_8 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h8 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_8 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_9 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h9 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_9 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_10 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'ha == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_10 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_11 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'hb == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_11 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_12 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'hc == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_12 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_13 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'hd == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_13 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_14 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'he == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_14 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_15 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'hf == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_15 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_16 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h10 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_16 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_17 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h11 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_17 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_18 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h12 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_18 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_19 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h13 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_19 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_20 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h14 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_20 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_21 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h15 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_21 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_22 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h16 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_22 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_23 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h17 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_23 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_24 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h18 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_24 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_25 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h19 == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_25 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_26 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h1a == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_26 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_27 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h1b == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_27 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_28 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h1c == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_28 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_29 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h1d == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_29 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_30 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h1e == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_30 <= io_in_rd_data; // @[RegFile.scala 37:24]
      end
    end
    if (reset) begin // @[RegFile.scala 28:20]
      reg_31 <= 64'h0; // @[RegFile.scala 28:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 36:26]
      if (5'h1f == io_in_rd_addr) begin // @[RegFile.scala 37:24]
        reg_31 <= io_in_rd_data; // @[RegFile.scala 37:24]
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
  input  [4:0]  io_in_alu_op,
  input  [63:0] io_in_src1,
  input  [63:0] io_in_src2,
  input  [2:0]  io_in_branch,
  output [63:0] io_out_dest,
  output        io_out_cmp
);
  /* verilator lint_off WIDTH */
  wire [63:0] _io_out_dest_T = io_in_src1 & io_in_src2; // @[ALU.scala 36:22]
  wire [63:0] _io_out_dest_T_1 = io_in_src1 | io_in_src2; // @[ALU.scala 37:22]
  wire [63:0] _io_out_dest_T_2 = io_in_src1 ^ io_in_src2; // @[ALU.scala 38:22]
  wire [63:0] _io_out_dest_T_4 = io_in_src1 + io_in_src2; // @[ALU.scala 39:37]
  wire [31:0] io_out_dest_lo = _io_out_dest_T_4[31:0]; // @[ALU.scala 39:52]
  wire [31:0] io_out_dest_hi = io_out_dest_lo[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_out_dest_T_7 = {io_out_dest_hi,io_out_dest_lo}; // @[Cat.scala 30:58]
  wire [63:0] _io_out_dest_T_14 = $signed(io_in_src1) - $signed(io_in_src2); // @[ALU.scala 41:37]
  wire [31:0] io_out_dest_lo_1 = _io_out_dest_T_14[31:0]; // @[ALU.scala 41:52]
  wire [31:0] io_out_dest_hi_1 = io_out_dest_lo_1[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_out_dest_T_17 = {io_out_dest_hi_1,io_out_dest_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _io_out_dest_T_23 = $signed(io_in_src1) - $signed(io_in_src2); // @[ALU.scala 42:53]
  wire [63:0] _io_out_dest_T_25 = io_in_src1 - io_in_src2; // @[ALU.scala 43:37]
  wire [31:0] io_out_dest_lo_2 = _io_out_dest_T_25[31:0]; // @[ALU.scala 43:52]
  wire [31:0] io_out_dest_hi_2 = io_out_dest_lo_2[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_out_dest_T_28 = {io_out_dest_hi_2,io_out_dest_lo_2}; // @[Cat.scala 30:58]
  wire [127:0] _io_out_dest_T_31 = io_in_src1 * io_in_src2; // @[ALU.scala 45:37]
  wire [31:0] io_out_dest_lo_3 = _io_out_dest_T_31[31:0]; // @[ALU.scala 45:52]
  wire [31:0] io_out_dest_hi_3 = io_out_dest_lo_3[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_out_dest_T_34 = {io_out_dest_hi_3,io_out_dest_lo_3}; // @[Cat.scala 30:58]
  wire [31:0] _io_out_dest_T_37 = io_in_src1[31:0]; // @[ALU.scala 47:41]
  wire [31:0] _io_out_dest_T_39 = io_in_src2[31:0]; // @[ALU.scala 47:63]
  wire [32:0] _io_out_dest_T_40 = $signed(_io_out_dest_T_37) / $signed(_io_out_dest_T_39); // @[ALU.scala 47:44]
  wire [31:0] io_out_dest_lo_4 = _io_out_dest_T_40[31:0]; // @[ALU.scala 47:66]
  wire [31:0] io_out_dest_hi_4 = io_out_dest_lo_4[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_out_dest_T_43 = {io_out_dest_hi_4,io_out_dest_lo_4}; // @[Cat.scala 30:58]
  wire [64:0] _io_out_dest_T_47 = $signed(io_in_src1) / $signed(io_in_src2); // @[ALU.scala 48:53]
  wire [31:0] io_out_dest_lo_5 = io_in_src1[31:0] / io_in_src2[31:0]; // @[ALU.scala 49:44]
  wire [31:0] io_out_dest_hi_5 = io_out_dest_lo_5[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_out_dest_T_53 = {io_out_dest_hi_5,io_out_dest_lo_5}; // @[Cat.scala 30:58]
  wire [63:0] _io_out_dest_T_54 = io_in_src1 / io_in_src2; // @[ALU.scala 50:31]
  wire [31:0] io_out_dest_lo_6 = $signed(_io_out_dest_T_37) % $signed(_io_out_dest_T_39); // @[ALU.scala 51:66]
  wire [31:0] io_out_dest_hi_6 = io_out_dest_lo_6[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_out_dest_T_62 = {io_out_dest_hi_6,io_out_dest_lo_6}; // @[Cat.scala 30:58]
  wire [63:0] _io_out_dest_T_66 = $signed(io_in_src1) % $signed(io_in_src2); // @[ALU.scala 52:53]
  wire [31:0] _GEN_1 = io_in_src1[31:0] % io_in_src2[31:0]; // @[ALU.scala 53:44]
  wire [31:0] io_out_dest_lo_7 = _GEN_1[31:0]; // @[ALU.scala 53:44]
  wire [31:0] io_out_dest_hi_7 = io_out_dest_lo_7[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_out_dest_T_72 = {io_out_dest_hi_7,io_out_dest_lo_7}; // @[Cat.scala 30:58]
  wire [63:0] _GEN_2 = io_in_src1 % io_in_src2; // @[ALU.scala 54:31]
  wire [63:0] _io_out_dest_T_73 = _GEN_2[63:0]; // @[ALU.scala 54:31]
  wire [126:0] _GEN_0 = {{63'd0}, io_in_src1}; // @[ALU.scala 55:28]
  wire [126:0] _io_out_dest_T_75 = _GEN_0 << io_in_src2[5:0]; // @[ALU.scala 55:28]
  wire [31:0] io_out_dest_lo_8 = _io_out_dest_T_75[31:0]; // @[ALU.scala 55:41]
  wire [31:0] io_out_dest_hi_8 = io_out_dest_lo_8[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_out_dest_T_78 = {io_out_dest_hi_8,io_out_dest_lo_8}; // @[Cat.scala 30:58]
  wire [31:0] io_out_dest_lo_9 = $signed(_io_out_dest_T_37) >>> io_in_src2[5:0]; // @[ALU.scala 57:57]
  wire [31:0] io_out_dest_hi_9 = io_out_dest_lo_9[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_out_dest_T_87 = {io_out_dest_hi_9,io_out_dest_lo_9}; // @[Cat.scala 30:58]
  wire [63:0] _io_out_dest_T_91 = $signed(io_in_src1) >>> io_in_src2[5:0]; // @[ALU.scala 58:51]
  wire [31:0] io_out_dest_lo_10 = io_in_src1[31:0] >> io_in_src2[5:0]; // @[ALU.scala 59:44]
  wire [31:0] io_out_dest_hi_10 = io_out_dest_lo_10[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _io_out_dest_T_97 = {io_out_dest_hi_10,io_out_dest_lo_10}; // @[Cat.scala 30:58]
  wire [63:0] _io_out_dest_T_99 = io_in_src1 >> io_in_src2[5:0]; // @[ALU.scala 60:31]
  wire [63:0] _io_out_dest_T_103 = 5'h6 == io_in_alu_op ? io_in_src2 : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_105 = 5'h1 == io_in_alu_op ? _io_out_dest_T : _io_out_dest_T_103; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_107 = 5'h2 == io_in_alu_op ? _io_out_dest_T_1 : _io_out_dest_T_105; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_109 = 5'h3 == io_in_alu_op ? _io_out_dest_T_2 : _io_out_dest_T_107; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_111 = 5'h4 == io_in_alu_op ? _io_out_dest_T_7 : _io_out_dest_T_109; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_113 = 5'h5 == io_in_alu_op ? _io_out_dest_T_4 : _io_out_dest_T_111; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_115 = 5'h8 == io_in_alu_op ? _io_out_dest_T_17 : _io_out_dest_T_113; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_117 = 5'h9 == io_in_alu_op ? _io_out_dest_T_23 : _io_out_dest_T_115; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_119 = 5'ha == io_in_alu_op ? _io_out_dest_T_28 : _io_out_dest_T_117; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_121 = 5'hb == io_in_alu_op ? _io_out_dest_T_25 : _io_out_dest_T_119; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_123 = 5'h10 == io_in_alu_op ? _io_out_dest_T_34 : _io_out_dest_T_121; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_125 = 5'h11 == io_in_alu_op ? _io_out_dest_T_31 : {{64'd0}, _io_out_dest_T_123}; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_127 = 5'h14 == io_in_alu_op ? {{64'd0}, _io_out_dest_T_43} : _io_out_dest_T_125; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_129 = 5'h15 == io_in_alu_op ? {{63'd0}, _io_out_dest_T_47} : _io_out_dest_T_127; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_131 = 5'h16 == io_in_alu_op ? {{64'd0}, _io_out_dest_T_53} : _io_out_dest_T_129; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_133 = 5'h17 == io_in_alu_op ? {{64'd0}, _io_out_dest_T_54} : _io_out_dest_T_131; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_135 = 5'h18 == io_in_alu_op ? {{64'd0}, _io_out_dest_T_62} : _io_out_dest_T_133; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_137 = 5'h19 == io_in_alu_op ? {{64'd0}, _io_out_dest_T_66} : _io_out_dest_T_135; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_139 = 5'h1a == io_in_alu_op ? {{64'd0}, _io_out_dest_T_72} : _io_out_dest_T_137; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_141 = 5'h1b == io_in_alu_op ? {{64'd0}, _io_out_dest_T_73} : _io_out_dest_T_139; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_143 = 5'hc == io_in_alu_op ? {{64'd0}, _io_out_dest_T_78} : _io_out_dest_T_141; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_145 = 5'hd == io_in_alu_op ? {{1'd0}, _io_out_dest_T_75} : _io_out_dest_T_143; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_147 = 5'h1c == io_in_alu_op ? {{64'd0}, _io_out_dest_T_87} : _io_out_dest_T_145; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_149 = 5'h1d == io_in_alu_op ? {{64'd0}, _io_out_dest_T_91} : _io_out_dest_T_147; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_151 = 5'h1e == io_in_alu_op ? {{64'd0}, _io_out_dest_T_97} : _io_out_dest_T_149; // @[Mux.scala 80:57]
  wire [127:0] _io_out_dest_T_153 = 5'h1f == io_in_alu_op ? {{64'd0}, _io_out_dest_T_99} : _io_out_dest_T_151; // @[Mux.scala 80:57]
  wire  _io_out_cmp_T = |_io_out_dest_T_25; // @[ALU.scala 66:19]
  wire  _io_out_cmp_T_1 = ~(|_io_out_dest_T_25); // @[ALU.scala 66:13]
  wire  _io_out_cmp_T_4 = io_in_src1[63] == io_in_src2[63]; // @[ALU.scala 67:26]
  wire  _io_out_cmp_T_7 = io_in_src1[63] == io_in_src2[63] ? _io_out_dest_T_25[63] : io_in_src1[63]; // @[ALU.scala 67:17]
  wire  _io_out_cmp_T_8 = ~_io_out_cmp_T_7; // @[ALU.scala 67:13]
  wire  _io_out_cmp_T_14 = _io_out_cmp_T_4 ? _io_out_dest_T_25[63] : io_in_src2[63]; // @[ALU.scala 68:17]
  wire  _io_out_cmp_T_15 = ~_io_out_cmp_T_14; // @[ALU.scala 68:13]
  wire  _io_out_cmp_T_32 = 3'h1 == io_in_branch ? _io_out_cmp_T_8 : 3'h0 == io_in_branch & _io_out_cmp_T_1; // @[Mux.scala 80:57]
  wire  _io_out_cmp_T_34 = 3'h2 == io_in_branch ? _io_out_cmp_T_15 : _io_out_cmp_T_32; // @[Mux.scala 80:57]
  wire  _io_out_cmp_T_36 = 3'h5 == io_in_branch ? _io_out_cmp_T_7 : _io_out_cmp_T_34; // @[Mux.scala 80:57]
  wire  _io_out_cmp_T_38 = 3'h6 == io_in_branch ? _io_out_cmp_T_14 : _io_out_cmp_T_36; // @[Mux.scala 80:57]
  assign io_out_dest = _io_out_dest_T_153[63:0]; // @[ALU.scala 33:15]
  assign io_out_cmp = 3'h7 == io_in_branch ? _io_out_cmp_T : _io_out_cmp_T_38; // @[Mux.scala 80:57]
endmodule
module EXU(
  input         clock,
  input         reset,
  input  [63:0] io_in_pc,
  input  [63:0] io_in_snpc,
  input  [4:0]  io_in_rs1,
  input  [4:0]  io_in_rs2,
  input  [4:0]  io_in_rd,
  input  [63:0] io_in_imm,
  input  [4:0]  io_contr_alu_op,
  input         io_contr_alu_srca,
  input         io_contr_alu_srcb,
  input         io_contr_reg_write,
  input         io_contr_mem_read,
  input         io_contr_mem_write,
  input         io_contr_mem_to_reg,
  input         io_contr_jalr,
  input  [2:0]  io_contr_branch,
  input  [2:0]  io_contr_wdth,
  output [63:0] io_out_alu_dest,
  output        io_out_pc_bsrc
);
  wire  regs_clock; // @[EXU.scala 42:20]
  wire  regs_reset; // @[EXU.scala 42:20]
  wire [63:0] regs_io_in_pc; // @[EXU.scala 42:20]
  wire  regs_io_in_reg_write; // @[EXU.scala 42:20]
  wire [4:0] regs_io_in_rs1_addr; // @[EXU.scala 42:20]
  wire [4:0] regs_io_in_rs2_addr; // @[EXU.scala 42:20]
  wire [4:0] regs_io_in_rd_addr; // @[EXU.scala 42:20]
  wire [63:0] regs_io_in_rd_data; // @[EXU.scala 42:20]
  wire [63:0] regs_io_out_rs1_data; // @[EXU.scala 42:20]
  wire [63:0] regs_io_out_rs2_data; // @[EXU.scala 42:20]
  wire [4:0] ALU_io_in_alu_op; // @[EXU.scala 49:19]
  wire [63:0] ALU_io_in_src1; // @[EXU.scala 49:19]
  wire [63:0] ALU_io_in_src2; // @[EXU.scala 49:19]
  wire [2:0] ALU_io_in_branch; // @[EXU.scala 49:19]
  wire [63:0] ALU_io_out_dest; // @[EXU.scala 49:19]
  wire  ALU_io_out_cmp; // @[EXU.scala 49:19]
  wire  mem_ren; // @[EXU.scala 56:19]
  wire  mem_wen; // @[EXU.scala 56:19]
  wire [63:0] mem_raddr; // @[EXU.scala 56:19]
  wire [63:0] mem_rdata; // @[EXU.scala 56:19]
  wire [63:0] mem_waddr; // @[EXU.scala 56:19]
  wire [63:0] mem_wdata; // @[EXU.scala 56:19]
  wire [7:0] mem_mask; // @[EXU.scala 56:19]
  wire [1:0] _mem_io_mask_T_3 = 3'h1 == io_contr_wdth ? 2'h3 : {{1'd0}, 3'h0 == io_contr_wdth}; // @[Mux.scala 80:57]
  wire [3:0] _mem_io_mask_T_5 = 3'h2 == io_contr_wdth ? 4'hf : {{2'd0}, _mem_io_mask_T_3}; // @[Mux.scala 80:57]
  wire [63:0] _alu_dest_T_1 = {63'h0,ALU_io_out_cmp}; // @[Cat.scala 30:58]
  wire [63:0] alu_dest = io_contr_branch == 3'h4 ? ALU_io_out_dest : _alu_dest_T_1; // @[EXU.scala 70:18]
  wire [7:0] mem_dest_lo = mem_rdata[7:0]; // @[EXU.scala 74:39]
  wire [63:0] _mem_dest_T = {56'h0,mem_dest_lo}; // @[Cat.scala 30:58]
  wire [15:0] mem_dest_lo_1 = mem_rdata[15:0]; // @[EXU.scala 75:39]
  wire [63:0] _mem_dest_T_1 = {48'h0,mem_dest_lo_1}; // @[Cat.scala 30:58]
  wire [31:0] mem_dest_lo_2 = mem_rdata[31:0]; // @[EXU.scala 76:39]
  wire [63:0] _mem_dest_T_2 = {32'h0,mem_dest_lo_2}; // @[Cat.scala 30:58]
  wire [55:0] mem_dest_hi = mem_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _mem_dest_T_5 = {mem_dest_hi,mem_dest_lo}; // @[Cat.scala 30:58]
  wire [47:0] mem_dest_hi_1 = mem_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _mem_dest_T_8 = {mem_dest_hi_1,mem_dest_lo_1}; // @[Cat.scala 30:58]
  wire [31:0] mem_dest_hi_2 = mem_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _mem_dest_T_11 = {mem_dest_hi_2,mem_dest_lo_2}; // @[Cat.scala 30:58]
  wire [63:0] _mem_dest_T_13 = 3'h0 == io_contr_wdth ? _mem_dest_T : mem_rdata; // @[Mux.scala 80:57]
  wire [63:0] _mem_dest_T_15 = 3'h1 == io_contr_wdth ? _mem_dest_T_1 : _mem_dest_T_13; // @[Mux.scala 80:57]
  wire [63:0] _mem_dest_T_17 = 3'h2 == io_contr_wdth ? _mem_dest_T_2 : _mem_dest_T_15; // @[Mux.scala 80:57]
  wire [63:0] _mem_dest_T_19 = 3'h4 == io_contr_wdth ? _mem_dest_T_5 : _mem_dest_T_17; // @[Mux.scala 80:57]
  wire [63:0] _mem_dest_T_21 = 3'h5 == io_contr_wdth ? _mem_dest_T_8 : _mem_dest_T_19; // @[Mux.scala 80:57]
  wire [63:0] mem_dest = 3'h6 == io_contr_wdth ? _mem_dest_T_11 : _mem_dest_T_21; // @[Mux.scala 80:57]
  wire [63:0] _regs_io_in_rd_data_T = io_contr_mem_to_reg ? mem_dest : alu_dest; // @[EXU.scala 81:59]
  RegFile regs ( // @[EXU.scala 42:20]
    .clock(regs_clock),
    .reset(regs_reset),
    .io_in_pc(regs_io_in_pc),
    .io_in_reg_write(regs_io_in_reg_write),
    .io_in_rs1_addr(regs_io_in_rs1_addr),
    .io_in_rs2_addr(regs_io_in_rs2_addr),
    .io_in_rd_addr(regs_io_in_rd_addr),
    .io_in_rd_data(regs_io_in_rd_data),
    .io_out_rs1_data(regs_io_out_rs1_data),
    .io_out_rs2_data(regs_io_out_rs2_data)
  );
  ALU ALU ( // @[EXU.scala 49:19]
    .io_in_alu_op(ALU_io_in_alu_op),
    .io_in_src1(ALU_io_in_src1),
    .io_in_src2(ALU_io_in_src2),
    .io_in_branch(ALU_io_in_branch),
    .io_out_dest(ALU_io_out_dest),
    .io_out_cmp(ALU_io_out_cmp)
  );
  MEM mem ( // @[EXU.scala 56:19]
    .ren(mem_ren),
    .wen(mem_wen),
    .raddr(mem_raddr),
    .rdata(mem_rdata),
    .waddr(mem_waddr),
    .wdata(mem_wdata),
    .mask(mem_mask)
  );
  assign io_out_alu_dest = ALU_io_out_dest; // @[EXU.scala 82:21]
  assign io_out_pc_bsrc = ALU_io_out_cmp; // @[EXU.scala 54:20]
  assign regs_clock = clock;
  assign regs_reset = reset;
  assign regs_io_in_pc = io_in_pc; // @[EXU.scala 47:24]
  assign regs_io_in_reg_write = io_contr_reg_write; // @[EXU.scala 43:24]
  assign regs_io_in_rs1_addr = io_in_rs1; // @[EXU.scala 44:24]
  assign regs_io_in_rs2_addr = io_in_rs2; // @[EXU.scala 45:24]
  assign regs_io_in_rd_addr = io_in_rd; // @[EXU.scala 46:24]
  assign regs_io_in_rd_data = io_contr_jalr ? io_in_snpc : _regs_io_in_rd_data_T; // @[EXU.scala 81:28]
  assign ALU_io_in_alu_op = io_contr_alu_op; // @[EXU.scala 50:20]
  assign ALU_io_in_src1 = io_contr_alu_srca ? io_in_pc : regs_io_out_rs1_data; // @[EXU.scala 51:26]
  assign ALU_io_in_src2 = io_contr_alu_srcb ? io_in_imm : regs_io_out_rs2_data; // @[EXU.scala 52:26]
  assign ALU_io_in_branch = io_contr_branch; // @[EXU.scala 53:20]
  assign mem_ren = io_contr_mem_read; // @[EXU.scala 57:16]
  assign mem_wen = io_contr_mem_write; // @[EXU.scala 58:16]
  assign mem_raddr = ALU_io_out_dest; // @[EXU.scala 59:16]
  assign mem_waddr = ALU_io_out_dest; // @[EXU.scala 60:16]
  assign mem_wdata = regs_io_out_rs2_data; // @[EXU.scala 61:16]
  assign mem_mask = 3'h3 == io_contr_wdth ? 8'hff : {{4'd0}, _mem_io_mask_T_5}; // @[Mux.scala 80:57]
endmodule
module CPU(
  input   clock,
  input   reset
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] IFU_io_in_addr; // @[CPU.scala 17:19]
  wire [31:0] IFU_io_out_inst; // @[CPU.scala 17:19]
  wire [31:0] IDU_io_in_inst; // @[CPU.scala 20:19]
  wire [4:0] IDU_io_out_rs1; // @[CPU.scala 20:19]
  wire [4:0] IDU_io_out_rs2; // @[CPU.scala 20:19]
  wire [4:0] IDU_io_out_rd; // @[CPU.scala 20:19]
  wire [63:0] IDU_io_out_imm; // @[CPU.scala 20:19]
  wire [4:0] IDU_io_contr_alu_op; // @[CPU.scala 20:19]
  wire  IDU_io_contr_alu_srca; // @[CPU.scala 20:19]
  wire  IDU_io_contr_alu_srcb; // @[CPU.scala 20:19]
  wire  IDU_io_contr_reg_write; // @[CPU.scala 20:19]
  wire  IDU_io_contr_mem_read; // @[CPU.scala 20:19]
  wire  IDU_io_contr_mem_write; // @[CPU.scala 20:19]
  wire  IDU_io_contr_mem_to_reg; // @[CPU.scala 20:19]
  wire  IDU_io_contr_pc_src; // @[CPU.scala 20:19]
  wire  IDU_io_contr_jalr; // @[CPU.scala 20:19]
  wire [2:0] IDU_io_contr_branch; // @[CPU.scala 20:19]
  wire [2:0] IDU_io_contr_wdth; // @[CPU.scala 20:19]
  wire  EXU_clock; // @[CPU.scala 23:19]
  wire  EXU_reset; // @[CPU.scala 23:19]
  wire [63:0] EXU_io_in_pc; // @[CPU.scala 23:19]
  wire [63:0] EXU_io_in_snpc; // @[CPU.scala 23:19]
  wire [4:0] EXU_io_in_rs1; // @[CPU.scala 23:19]
  wire [4:0] EXU_io_in_rs2; // @[CPU.scala 23:19]
  wire [4:0] EXU_io_in_rd; // @[CPU.scala 23:19]
  wire [63:0] EXU_io_in_imm; // @[CPU.scala 23:19]
  wire [4:0] EXU_io_contr_alu_op; // @[CPU.scala 23:19]
  wire  EXU_io_contr_alu_srca; // @[CPU.scala 23:19]
  wire  EXU_io_contr_alu_srcb; // @[CPU.scala 23:19]
  wire  EXU_io_contr_reg_write; // @[CPU.scala 23:19]
  wire  EXU_io_contr_mem_read; // @[CPU.scala 23:19]
  wire  EXU_io_contr_mem_write; // @[CPU.scala 23:19]
  wire  EXU_io_contr_mem_to_reg; // @[CPU.scala 23:19]
  wire  EXU_io_contr_jalr; // @[CPU.scala 23:19]
  wire [2:0] EXU_io_contr_branch; // @[CPU.scala 23:19]
  wire [2:0] EXU_io_contr_wdth; // @[CPU.scala 23:19]
  wire [63:0] EXU_io_out_alu_dest; // @[CPU.scala 23:19]
  wire  EXU_io_out_pc_bsrc; // @[CPU.scala 23:19]
  reg [63:0] pc; // @[CPU.scala 14:21]
  wire [63:0] snpc = pc + 64'h4; // @[CPU.scala 15:17]
  wire [63:0] _pc_T_3 = pc + IDU_io_out_imm; // @[CPU.scala 42:64]
  wire [63:0] _pc_T_5 = EXU_io_out_alu_dest & 64'hfffffffffffffffe; // @[CPU.scala 43:48]
  IFU IFU ( // @[CPU.scala 17:19]
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
    .io_contr_alu_srca(IDU_io_contr_alu_srca),
    .io_contr_alu_srcb(IDU_io_contr_alu_srcb),
    .io_contr_reg_write(IDU_io_contr_reg_write),
    .io_contr_mem_read(IDU_io_contr_mem_read),
    .io_contr_mem_write(IDU_io_contr_mem_write),
    .io_contr_mem_to_reg(IDU_io_contr_mem_to_reg),
    .io_contr_pc_src(IDU_io_contr_pc_src),
    .io_contr_jalr(IDU_io_contr_jalr),
    .io_contr_branch(IDU_io_contr_branch),
    .io_contr_wdth(IDU_io_contr_wdth)
  );
  EXU EXU ( // @[CPU.scala 23:19]
    .clock(EXU_clock),
    .reset(EXU_reset),
    .io_in_pc(EXU_io_in_pc),
    .io_in_snpc(EXU_io_in_snpc),
    .io_in_rs1(EXU_io_in_rs1),
    .io_in_rs2(EXU_io_in_rs2),
    .io_in_rd(EXU_io_in_rd),
    .io_in_imm(EXU_io_in_imm),
    .io_contr_alu_op(EXU_io_contr_alu_op),
    .io_contr_alu_srca(EXU_io_contr_alu_srca),
    .io_contr_alu_srcb(EXU_io_contr_alu_srcb),
    .io_contr_reg_write(EXU_io_contr_reg_write),
    .io_contr_mem_read(EXU_io_contr_mem_read),
    .io_contr_mem_write(EXU_io_contr_mem_write),
    .io_contr_mem_to_reg(EXU_io_contr_mem_to_reg),
    .io_contr_jalr(EXU_io_contr_jalr),
    .io_contr_branch(EXU_io_contr_branch),
    .io_contr_wdth(EXU_io_contr_wdth),
    .io_out_alu_dest(EXU_io_out_alu_dest),
    .io_out_pc_bsrc(EXU_io_out_pc_bsrc)
  );
  assign IFU_io_in_addr = pc; // @[CPU.scala 18:18]
  assign IDU_io_in_inst = IFU_io_out_inst; // @[CPU.scala 21:18]
  assign EXU_clock = clock;
  assign EXU_reset = reset;
  assign EXU_io_in_pc = pc; // @[CPU.scala 34:27]
  assign EXU_io_in_snpc = pc + 64'h4; // @[CPU.scala 15:17]
  assign EXU_io_in_rs1 = IDU_io_out_rs1; // @[CPU.scala 36:27]
  assign EXU_io_in_rs2 = IDU_io_out_rs2; // @[CPU.scala 37:27]
  assign EXU_io_in_rd = IDU_io_out_rd; // @[CPU.scala 38:27]
  assign EXU_io_in_imm = IDU_io_out_imm; // @[CPU.scala 39:27]
  assign EXU_io_contr_alu_op = IDU_io_contr_alu_op; // @[CPU.scala 24:27]
  assign EXU_io_contr_alu_srca = IDU_io_contr_alu_srca; // @[CPU.scala 25:27]
  assign EXU_io_contr_alu_srcb = IDU_io_contr_alu_srcb; // @[CPU.scala 26:27]
  assign EXU_io_contr_reg_write = IDU_io_contr_reg_write; // @[CPU.scala 27:27]
  assign EXU_io_contr_mem_read = IDU_io_contr_mem_read; // @[CPU.scala 28:27]
  assign EXU_io_contr_mem_write = IDU_io_contr_mem_write; // @[CPU.scala 29:27]
  assign EXU_io_contr_mem_to_reg = IDU_io_contr_mem_to_reg; // @[CPU.scala 30:27]
  assign EXU_io_contr_jalr = IDU_io_contr_jalr; // @[CPU.scala 31:27]
  assign EXU_io_contr_branch = IDU_io_contr_branch; // @[CPU.scala 32:27]
  assign EXU_io_contr_wdth = IDU_io_contr_wdth; // @[CPU.scala 33:27]
  always @(posedge clock) begin
    if (reset) begin // @[CPU.scala 14:21]
      pc <= 64'h80000000; // @[CPU.scala 14:21]
    end else if (IDU_io_contr_pc_src) begin // @[CPU.scala 41:12]
      if (IDU_io_contr_branch == 3'h4 | EXU_io_out_pc_bsrc) begin // @[CPU.scala 42:8]
        pc <= _pc_T_3;
      end else begin
        pc <= snpc;
      end
    end else if (IDU_io_contr_jalr) begin // @[CPU.scala 43:8]
      pc <= _pc_T_5;
    end else begin
      pc <= snpc;
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
