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
  output [3:0]  io_out_alu_op,
  output        io_out_alu_srca,
  output        io_out_alu_srcb,
  output        io_out_reg_write,
  output        io_out_pc_src,
  output        io_out_jalr
);
  wire [31:0] _controller_T = io_in_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _controller_T_1 = 32'h33 == _controller_T; // @[Lookup.scala 31:38]
  wire [31:0] _controller_T_2 = io_in_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _controller_T_3 = 32'h13 == _controller_T_2; // @[Lookup.scala 31:38]
  wire  _controller_T_5 = 32'h1b == _controller_T_2; // @[Lookup.scala 31:38]
  wire  _controller_T_7 = 32'h3b == _controller_T; // @[Lookup.scala 31:38]
  wire  _controller_T_9 = 32'h7033 == _controller_T; // @[Lookup.scala 31:38]
  wire  _controller_T_11 = 32'h7013 == _controller_T_2; // @[Lookup.scala 31:38]
  wire [31:0] _controller_T_12 = io_in_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _controller_T_13 = 32'h17 == _controller_T_12; // @[Lookup.scala 31:38]
  wire  _controller_T_15 = 32'h6f == _controller_T_12; // @[Lookup.scala 31:38]
  wire  _controller_T_17 = 32'h67 == _controller_T_2; // @[Lookup.scala 31:38]
  wire  _controller_T_19 = 32'h37 == _controller_T_12; // @[Lookup.scala 31:38]
  wire [31:0] _controller_T_20 = io_in_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _controller_T_21 = 32'h1013 == _controller_T_20; // @[Lookup.scala 31:38]
  wire [3:0] _controller_T_22 = _controller_T_21 ? 4'ha : 4'hf; // @[Lookup.scala 33:37]
  wire [3:0] _controller_T_23 = _controller_T_19 ? 4'he : _controller_T_22; // @[Lookup.scala 33:37]
  wire [3:0] _controller_T_24 = _controller_T_17 ? 4'h2 : _controller_T_23; // @[Lookup.scala 33:37]
  wire [3:0] _controller_T_25 = _controller_T_15 ? 4'h2 : _controller_T_24; // @[Lookup.scala 33:37]
  wire [3:0] _controller_T_26 = _controller_T_13 ? 4'h2 : _controller_T_25; // @[Lookup.scala 33:37]
  wire [3:0] _controller_T_27 = _controller_T_11 ? 4'h0 : _controller_T_26; // @[Lookup.scala 33:37]
  wire [3:0] _controller_T_28 = _controller_T_9 ? 4'h0 : _controller_T_27; // @[Lookup.scala 33:37]
  wire [3:0] _controller_T_29 = _controller_T_7 ? 4'h3 : _controller_T_28; // @[Lookup.scala 33:37]
  wire [3:0] _controller_T_30 = _controller_T_5 ? 4'h3 : _controller_T_29; // @[Lookup.scala 33:37]
  wire [3:0] _controller_T_31 = _controller_T_3 ? 4'h2 : _controller_T_30; // @[Lookup.scala 33:37]
  wire  _controller_T_37 = _controller_T_11 ? 1'h0 : _controller_T_13 | _controller_T_15; // @[Lookup.scala 33:37]
  wire  _controller_T_38 = _controller_T_9 ? 1'h0 : _controller_T_37; // @[Lookup.scala 33:37]
  wire  _controller_T_39 = _controller_T_7 ? 1'h0 : _controller_T_38; // @[Lookup.scala 33:37]
  wire  _controller_T_40 = _controller_T_5 ? 1'h0 : _controller_T_39; // @[Lookup.scala 33:37]
  wire  _controller_T_41 = _controller_T_3 ? 1'h0 : _controller_T_40; // @[Lookup.scala 33:37]
  wire  _controller_T_45 = _controller_T_15 ? 1'h0 : _controller_T_17 | (_controller_T_19 | _controller_T_21); // @[Lookup.scala 33:37]
  wire  _controller_T_46 = _controller_T_13 ? 1'h0 : _controller_T_45; // @[Lookup.scala 33:37]
  wire  _controller_T_48 = _controller_T_9 ? 1'h0 : _controller_T_11 | _controller_T_46; // @[Lookup.scala 33:37]
  wire  _controller_T_49 = _controller_T_7 ? 1'h0 : _controller_T_48; // @[Lookup.scala 33:37]
  wire  _controller_T_96 = _controller_T_13 ? 1'h0 : _controller_T_15; // @[Lookup.scala 33:37]
  wire  _controller_T_97 = _controller_T_11 ? 1'h0 : _controller_T_96; // @[Lookup.scala 33:37]
  wire  _controller_T_98 = _controller_T_9 ? 1'h0 : _controller_T_97; // @[Lookup.scala 33:37]
  wire  _controller_T_99 = _controller_T_7 ? 1'h0 : _controller_T_98; // @[Lookup.scala 33:37]
  wire  _controller_T_100 = _controller_T_5 ? 1'h0 : _controller_T_99; // @[Lookup.scala 33:37]
  wire  _controller_T_101 = _controller_T_3 ? 1'h0 : _controller_T_100; // @[Lookup.scala 33:37]
  wire  _controller_T_106 = _controller_T_13 ? 1'h0 : _controller_T_15 | _controller_T_17; // @[Lookup.scala 33:37]
  wire  _controller_T_107 = _controller_T_11 ? 1'h0 : _controller_T_106; // @[Lookup.scala 33:37]
  wire  _controller_T_108 = _controller_T_9 ? 1'h0 : _controller_T_107; // @[Lookup.scala 33:37]
  wire  _controller_T_109 = _controller_T_7 ? 1'h0 : _controller_T_108; // @[Lookup.scala 33:37]
  wire  _controller_T_110 = _controller_T_5 ? 1'h0 : _controller_T_109; // @[Lookup.scala 33:37]
  wire  _controller_T_111 = _controller_T_3 ? 1'h0 : _controller_T_110; // @[Lookup.scala 33:37]
  assign io_out_alu_op = _controller_T_1 ? 4'h2 : _controller_T_31; // @[Lookup.scala 33:37]
  assign io_out_alu_srca = _controller_T_1 ? 1'h0 : _controller_T_41; // @[Lookup.scala 33:37]
  assign io_out_alu_srcb = _controller_T_1 ? 1'h0 : _controller_T_3 | (_controller_T_5 | _controller_T_49); // @[Lookup.scala 33:37]
  assign io_out_reg_write = _controller_T_1 | (_controller_T_3 | (_controller_T_5 | (_controller_T_7 | (_controller_T_9
     | (_controller_T_11 | (_controller_T_13 | (_controller_T_15 | (_controller_T_17 | (_controller_T_19 |
    _controller_T_21))))))))); // @[Lookup.scala 33:37]
  assign io_out_pc_src = _controller_T_1 ? 1'h0 : _controller_T_101; // @[Lookup.scala 33:37]
  assign io_out_jalr = _controller_T_1 ? 1'h0 : _controller_T_111; // @[Lookup.scala 33:37]
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
  wire [52:0] _imm_T_11 = {imm_hi_hi,imm_hi_lo,1'h0}; // @[Cat.scala 30:58]
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
  wire [4:0] imm_lo_16 = io_in_inst[11:7]; // @[ImmGen.scala 27:73]
  wire [63:0] _imm_T_56 = {imm_hi,imm_hi_lo_9,imm_lo_16}; // @[Cat.scala 30:58]
  wire [31:0] _imm_T_90 = io_in_inst & 32'hfe00707f; // @[Lookup.scala 31:38]
  wire  _imm_T_91 = 32'h33 == _imm_T_90; // @[Lookup.scala 31:38]
  wire [31:0] _imm_T_92 = io_in_inst & 32'h707f; // @[Lookup.scala 31:38]
  wire  _imm_T_93 = 32'h13 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_95 = 32'h1b == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_97 = 32'h3b == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_99 = 32'h7033 == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_101 = 32'h7013 == _imm_T_92; // @[Lookup.scala 31:38]
  wire [31:0] _imm_T_102 = io_in_inst & 32'h7f; // @[Lookup.scala 31:38]
  wire  _imm_T_103 = 32'h17 == _imm_T_102; // @[Lookup.scala 31:38]
  wire  _imm_T_105 = 32'h63 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_107 = 32'h5063 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_109 = 32'h7063 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_111 = 32'h4063 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_113 = 32'h6063 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_115 = 32'h1063 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_117 = 32'h200403b == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_119 = 32'h6f == _imm_T_102; // @[Lookup.scala 31:38]
  wire  _imm_T_121 = 32'h67 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_123 = 32'h4003 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_125 = 32'h3003 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_127 = 32'h1003 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_129 = 32'h5003 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_131 = 32'h2003 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_133 = 32'h37 == _imm_T_102; // @[Lookup.scala 31:38]
  wire  _imm_T_135 = 32'h2000033 == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_137 = 32'h200003b == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_139 = 32'h6033 == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_141 = 32'h200603b == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_143 = 32'h23 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_145 = 32'h3023 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_147 = 32'h1023 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_149 = 32'h2023 == _imm_T_92; // @[Lookup.scala 31:38]
  wire [31:0] _imm_T_150 = io_in_inst & 32'hfc00707f; // @[Lookup.scala 31:38]
  wire  _imm_T_151 = 32'h1013 == _imm_T_150; // @[Lookup.scala 31:38]
  wire  _imm_T_153 = 32'h101b == _imm_T_150; // @[Lookup.scala 31:38]
  wire  _imm_T_155 = 32'h103b == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_157 = 32'h2033 == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_159 = 32'h3013 == _imm_T_92; // @[Lookup.scala 31:38]
  wire  _imm_T_161 = 32'h3033 == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_163 = 32'h40005013 == _imm_T_150; // @[Lookup.scala 31:38]
  wire  _imm_T_165 = 32'h4000501b == _imm_T_150; // @[Lookup.scala 31:38]
  wire  _imm_T_167 = 32'h4000503b == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_169 = 32'h5013 == _imm_T_150; // @[Lookup.scala 31:38]
  wire  _imm_T_171 = 32'h501b == _imm_T_150; // @[Lookup.scala 31:38]
  wire  _imm_T_173 = 32'h503b == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_175 = 32'h40000033 == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_177 = 32'h4000003b == _imm_T_90; // @[Lookup.scala 31:38]
  wire  _imm_T_179 = 32'h4013 == _imm_T_92; // @[Lookup.scala 31:38]
  wire [63:0] _imm_T_180 = _imm_T_179 ? _imm_T_2 : 64'h0; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_181 = _imm_T_177 ? 64'h0 : _imm_T_180; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_182 = _imm_T_175 ? 64'h0 : _imm_T_181; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_183 = _imm_T_173 ? 64'h0 : _imm_T_182; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_184 = _imm_T_171 ? _imm_T_2 : _imm_T_183; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_185 = _imm_T_169 ? _imm_T_2 : _imm_T_184; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_186 = _imm_T_167 ? 64'h0 : _imm_T_185; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_187 = _imm_T_165 ? _imm_T_2 : _imm_T_186; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_188 = _imm_T_163 ? _imm_T_2 : _imm_T_187; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_189 = _imm_T_161 ? 64'h0 : _imm_T_188; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_190 = _imm_T_159 ? _imm_T_2 : _imm_T_189; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_191 = _imm_T_157 ? 64'h0 : _imm_T_190; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_192 = _imm_T_155 ? 64'h0 : _imm_T_191; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_193 = _imm_T_153 ? _imm_T_2 : _imm_T_192; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_194 = _imm_T_151 ? _imm_T_2 : _imm_T_193; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_195 = _imm_T_149 ? _imm_T_56 : _imm_T_194; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_196 = _imm_T_147 ? _imm_T_56 : _imm_T_195; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_197 = _imm_T_145 ? _imm_T_56 : _imm_T_196; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_198 = _imm_T_143 ? _imm_T_56 : _imm_T_197; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_199 = _imm_T_141 ? 64'h0 : _imm_T_198; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_200 = _imm_T_139 ? 64'h0 : _imm_T_199; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_201 = _imm_T_137 ? 64'h0 : _imm_T_200; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_202 = _imm_T_135 ? 64'h0 : _imm_T_201; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_203 = _imm_T_133 ? {{11'd0}, _imm_T_11} : _imm_T_202; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_204 = _imm_T_131 ? _imm_T_2 : _imm_T_203; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_205 = _imm_T_129 ? _imm_T_2 : _imm_T_204; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_206 = _imm_T_127 ? _imm_T_2 : _imm_T_205; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_207 = _imm_T_125 ? _imm_T_2 : _imm_T_206; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_208 = _imm_T_123 ? _imm_T_2 : _imm_T_207; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_209 = _imm_T_121 ? _imm_T_2 : _imm_T_208; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_210 = _imm_T_119 ? _imm_T_32 : _imm_T_209; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_211 = _imm_T_117 ? 64'h0 : _imm_T_210; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_212 = _imm_T_115 ? _imm_T_14 : _imm_T_211; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_213 = _imm_T_113 ? _imm_T_14 : _imm_T_212; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_214 = _imm_T_111 ? _imm_T_14 : _imm_T_213; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_215 = _imm_T_109 ? _imm_T_14 : _imm_T_214; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_216 = _imm_T_107 ? _imm_T_14 : _imm_T_215; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_217 = _imm_T_105 ? _imm_T_14 : _imm_T_216; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_218 = _imm_T_103 ? {{11'd0}, _imm_T_11} : _imm_T_217; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_219 = _imm_T_101 ? _imm_T_2 : _imm_T_218; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_220 = _imm_T_99 ? 64'h0 : _imm_T_219; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_221 = _imm_T_97 ? 64'h0 : _imm_T_220; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_222 = _imm_T_95 ? _imm_T_2 : _imm_T_221; // @[Lookup.scala 33:37]
  wire [63:0] _imm_T_223 = _imm_T_93 ? _imm_T_2 : _imm_T_222; // @[Lookup.scala 33:37]
  assign io_out_imm = _imm_T_91 ? 64'h0 : _imm_T_223; // @[Lookup.scala 33:37]
endmodule
module IDU(
  input  [31:0] io_in_inst,
  output [4:0]  io_out_rs1,
  output [4:0]  io_out_rs2,
  output [4:0]  io_out_rd,
  output [63:0] io_out_imm,
  output [3:0]  io_contr_alu_op,
  output        io_contr_alu_srca,
  output        io_contr_alu_srcb,
  output        io_contr_reg_write,
  output        io_contr_pc_src,
  output        io_contr_jalr
);
  wire [31:0] ebreak_inst; // @[IDU.scala 38:22]
  wire [31:0] contr_io_in_inst; // @[IDU.scala 41:21]
  wire [3:0] contr_io_out_alu_op; // @[IDU.scala 41:21]
  wire  contr_io_out_alu_srca; // @[IDU.scala 41:21]
  wire  contr_io_out_alu_srcb; // @[IDU.scala 41:21]
  wire  contr_io_out_reg_write; // @[IDU.scala 41:21]
  wire  contr_io_out_pc_src; // @[IDU.scala 41:21]
  wire  contr_io_out_jalr; // @[IDU.scala 41:21]
  wire [31:0] immgen_io_in_inst; // @[IDU.scala 53:22]
  wire [63:0] immgen_io_out_imm; // @[IDU.scala 53:22]
  Ebreak ebreak ( // @[IDU.scala 38:22]
    .inst(ebreak_inst)
  );
  Contr contr ( // @[IDU.scala 41:21]
    .io_in_inst(contr_io_in_inst),
    .io_out_alu_op(contr_io_out_alu_op),
    .io_out_alu_srca(contr_io_out_alu_srca),
    .io_out_alu_srcb(contr_io_out_alu_srcb),
    .io_out_reg_write(contr_io_out_reg_write),
    .io_out_pc_src(contr_io_out_pc_src),
    .io_out_jalr(contr_io_out_jalr)
  );
  ImmGen immgen ( // @[IDU.scala 53:22]
    .io_in_inst(immgen_io_in_inst),
    .io_out_imm(immgen_io_out_imm)
  );
  assign io_out_rs1 = io_in_inst[19:15]; // @[IDU.scala 57:27]
  assign io_out_rs2 = io_in_inst[24:20]; // @[IDU.scala 58:27]
  assign io_out_rd = io_in_inst[11:7]; // @[IDU.scala 59:27]
  assign io_out_imm = immgen_io_out_imm; // @[IDU.scala 55:21]
  assign io_contr_alu_op = contr_io_out_alu_op; // @[IDU.scala 43:23]
  assign io_contr_alu_srca = contr_io_out_alu_srca; // @[IDU.scala 44:23]
  assign io_contr_alu_srcb = contr_io_out_alu_srcb; // @[IDU.scala 45:23]
  assign io_contr_reg_write = contr_io_out_reg_write; // @[IDU.scala 46:23]
  assign io_contr_pc_src = contr_io_out_pc_src; // @[IDU.scala 50:23]
  assign io_contr_jalr = contr_io_out_jalr; // @[IDU.scala 51:23]
  assign ebreak_inst = io_in_inst; // @[IDU.scala 39:24]
  assign contr_io_in_inst = io_in_inst; // @[IDU.scala 42:23]
  assign immgen_io_in_inst = io_in_inst; // @[IDU.scala 54:21]
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
  wire [63:0] trace_regs_rf_0; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_1; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_2; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_3; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_4; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_5; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_6; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_7; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_8; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_9; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_10; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_11; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_12; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_13; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_14; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_15; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_16; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_17; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_18; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_19; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_20; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_21; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_22; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_23; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_24; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_25; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_26; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_27; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_28; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_29; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_30; // @[RegFile.scala 29:26]
  wire [63:0] trace_regs_rf_31; // @[RegFile.scala 29:26]
  reg [63:0] reg_1; // @[RegFile.scala 27:20]
  reg [63:0] reg_2; // @[RegFile.scala 27:20]
  reg [63:0] reg_3; // @[RegFile.scala 27:20]
  reg [63:0] reg_4; // @[RegFile.scala 27:20]
  reg [63:0] reg_5; // @[RegFile.scala 27:20]
  reg [63:0] reg_6; // @[RegFile.scala 27:20]
  reg [63:0] reg_7; // @[RegFile.scala 27:20]
  reg [63:0] reg_8; // @[RegFile.scala 27:20]
  reg [63:0] reg_9; // @[RegFile.scala 27:20]
  reg [63:0] reg_10; // @[RegFile.scala 27:20]
  reg [63:0] reg_11; // @[RegFile.scala 27:20]
  reg [63:0] reg_12; // @[RegFile.scala 27:20]
  reg [63:0] reg_13; // @[RegFile.scala 27:20]
  reg [63:0] reg_14; // @[RegFile.scala 27:20]
  reg [63:0] reg_15; // @[RegFile.scala 27:20]
  reg [63:0] reg_16; // @[RegFile.scala 27:20]
  reg [63:0] reg_17; // @[RegFile.scala 27:20]
  reg [63:0] reg_18; // @[RegFile.scala 27:20]
  reg [63:0] reg_19; // @[RegFile.scala 27:20]
  reg [63:0] reg_20; // @[RegFile.scala 27:20]
  reg [63:0] reg_21; // @[RegFile.scala 27:20]
  reg [63:0] reg_22; // @[RegFile.scala 27:20]
  reg [63:0] reg_23; // @[RegFile.scala 27:20]
  reg [63:0] reg_24; // @[RegFile.scala 27:20]
  reg [63:0] reg_25; // @[RegFile.scala 27:20]
  reg [63:0] reg_26; // @[RegFile.scala 27:20]
  reg [63:0] reg_27; // @[RegFile.scala 27:20]
  reg [63:0] reg_28; // @[RegFile.scala 27:20]
  reg [63:0] reg_29; // @[RegFile.scala 27:20]
  reg [63:0] reg_30; // @[RegFile.scala 27:20]
  reg [63:0] reg_31; // @[RegFile.scala 27:20]
  wire [63:0] _GEN_1 = 5'h1 == io_in_rs1_addr ? reg_1 : 64'h0; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_2 = 5'h2 == io_in_rs1_addr ? reg_2 : _GEN_1; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_3 = 5'h3 == io_in_rs1_addr ? reg_3 : _GEN_2; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_4 = 5'h4 == io_in_rs1_addr ? reg_4 : _GEN_3; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_5 = 5'h5 == io_in_rs1_addr ? reg_5 : _GEN_4; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_6 = 5'h6 == io_in_rs1_addr ? reg_6 : _GEN_5; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_7 = 5'h7 == io_in_rs1_addr ? reg_7 : _GEN_6; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_8 = 5'h8 == io_in_rs1_addr ? reg_8 : _GEN_7; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_9 = 5'h9 == io_in_rs1_addr ? reg_9 : _GEN_8; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_10 = 5'ha == io_in_rs1_addr ? reg_10 : _GEN_9; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_11 = 5'hb == io_in_rs1_addr ? reg_11 : _GEN_10; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_12 = 5'hc == io_in_rs1_addr ? reg_12 : _GEN_11; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_13 = 5'hd == io_in_rs1_addr ? reg_13 : _GEN_12; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_14 = 5'he == io_in_rs1_addr ? reg_14 : _GEN_13; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_15 = 5'hf == io_in_rs1_addr ? reg_15 : _GEN_14; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_16 = 5'h10 == io_in_rs1_addr ? reg_16 : _GEN_15; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_17 = 5'h11 == io_in_rs1_addr ? reg_17 : _GEN_16; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_18 = 5'h12 == io_in_rs1_addr ? reg_18 : _GEN_17; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_19 = 5'h13 == io_in_rs1_addr ? reg_19 : _GEN_18; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_20 = 5'h14 == io_in_rs1_addr ? reg_20 : _GEN_19; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_21 = 5'h15 == io_in_rs1_addr ? reg_21 : _GEN_20; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_22 = 5'h16 == io_in_rs1_addr ? reg_22 : _GEN_21; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_23 = 5'h17 == io_in_rs1_addr ? reg_23 : _GEN_22; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_24 = 5'h18 == io_in_rs1_addr ? reg_24 : _GEN_23; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_25 = 5'h19 == io_in_rs1_addr ? reg_25 : _GEN_24; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_26 = 5'h1a == io_in_rs1_addr ? reg_26 : _GEN_25; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_27 = 5'h1b == io_in_rs1_addr ? reg_27 : _GEN_26; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_28 = 5'h1c == io_in_rs1_addr ? reg_28 : _GEN_27; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_29 = 5'h1d == io_in_rs1_addr ? reg_29 : _GEN_28; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_30 = 5'h1e == io_in_rs1_addr ? reg_30 : _GEN_29; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  wire [63:0] _GEN_33 = 5'h1 == io_in_rs2_addr ? reg_1 : 64'h0; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_34 = 5'h2 == io_in_rs2_addr ? reg_2 : _GEN_33; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_35 = 5'h3 == io_in_rs2_addr ? reg_3 : _GEN_34; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_36 = 5'h4 == io_in_rs2_addr ? reg_4 : _GEN_35; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_37 = 5'h5 == io_in_rs2_addr ? reg_5 : _GEN_36; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_38 = 5'h6 == io_in_rs2_addr ? reg_6 : _GEN_37; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_39 = 5'h7 == io_in_rs2_addr ? reg_7 : _GEN_38; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_40 = 5'h8 == io_in_rs2_addr ? reg_8 : _GEN_39; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_41 = 5'h9 == io_in_rs2_addr ? reg_9 : _GEN_40; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_42 = 5'ha == io_in_rs2_addr ? reg_10 : _GEN_41; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_43 = 5'hb == io_in_rs2_addr ? reg_11 : _GEN_42; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_44 = 5'hc == io_in_rs2_addr ? reg_12 : _GEN_43; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_45 = 5'hd == io_in_rs2_addr ? reg_13 : _GEN_44; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_46 = 5'he == io_in_rs2_addr ? reg_14 : _GEN_45; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_47 = 5'hf == io_in_rs2_addr ? reg_15 : _GEN_46; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_48 = 5'h10 == io_in_rs2_addr ? reg_16 : _GEN_47; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_49 = 5'h11 == io_in_rs2_addr ? reg_17 : _GEN_48; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_50 = 5'h12 == io_in_rs2_addr ? reg_18 : _GEN_49; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_51 = 5'h13 == io_in_rs2_addr ? reg_19 : _GEN_50; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_52 = 5'h14 == io_in_rs2_addr ? reg_20 : _GEN_51; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_53 = 5'h15 == io_in_rs2_addr ? reg_21 : _GEN_52; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_54 = 5'h16 == io_in_rs2_addr ? reg_22 : _GEN_53; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_55 = 5'h17 == io_in_rs2_addr ? reg_23 : _GEN_54; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_56 = 5'h18 == io_in_rs2_addr ? reg_24 : _GEN_55; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_57 = 5'h19 == io_in_rs2_addr ? reg_25 : _GEN_56; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_58 = 5'h1a == io_in_rs2_addr ? reg_26 : _GEN_57; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_59 = 5'h1b == io_in_rs2_addr ? reg_27 : _GEN_58; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_60 = 5'h1c == io_in_rs2_addr ? reg_28 : _GEN_59; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_61 = 5'h1d == io_in_rs2_addr ? reg_29 : _GEN_60; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  wire [63:0] _GEN_62 = 5'h1e == io_in_rs2_addr ? reg_30 : _GEN_61; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  TraceRegs trace_regs ( // @[RegFile.scala 29:26]
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
  assign io_out_rs1_data = 5'h1f == io_in_rs1_addr ? reg_31 : _GEN_30; // @[RegFile.scala 32:19 RegFile.scala 32:19]
  assign io_out_rs2_data = 5'h1f == io_in_rs2_addr ? reg_31 : _GEN_62; // @[RegFile.scala 33:19 RegFile.scala 33:19]
  assign trace_regs_rf_0 = 64'h0; // @[RegFile.scala 30:20]
  assign trace_regs_rf_1 = reg_1; // @[RegFile.scala 30:20]
  assign trace_regs_rf_2 = reg_2; // @[RegFile.scala 30:20]
  assign trace_regs_rf_3 = reg_3; // @[RegFile.scala 30:20]
  assign trace_regs_rf_4 = reg_4; // @[RegFile.scala 30:20]
  assign trace_regs_rf_5 = reg_5; // @[RegFile.scala 30:20]
  assign trace_regs_rf_6 = reg_6; // @[RegFile.scala 30:20]
  assign trace_regs_rf_7 = reg_7; // @[RegFile.scala 30:20]
  assign trace_regs_rf_8 = reg_8; // @[RegFile.scala 30:20]
  assign trace_regs_rf_9 = reg_9; // @[RegFile.scala 30:20]
  assign trace_regs_rf_10 = reg_10; // @[RegFile.scala 30:20]
  assign trace_regs_rf_11 = reg_11; // @[RegFile.scala 30:20]
  assign trace_regs_rf_12 = reg_12; // @[RegFile.scala 30:20]
  assign trace_regs_rf_13 = reg_13; // @[RegFile.scala 30:20]
  assign trace_regs_rf_14 = reg_14; // @[RegFile.scala 30:20]
  assign trace_regs_rf_15 = reg_15; // @[RegFile.scala 30:20]
  assign trace_regs_rf_16 = reg_16; // @[RegFile.scala 30:20]
  assign trace_regs_rf_17 = reg_17; // @[RegFile.scala 30:20]
  assign trace_regs_rf_18 = reg_18; // @[RegFile.scala 30:20]
  assign trace_regs_rf_19 = reg_19; // @[RegFile.scala 30:20]
  assign trace_regs_rf_20 = reg_20; // @[RegFile.scala 30:20]
  assign trace_regs_rf_21 = reg_21; // @[RegFile.scala 30:20]
  assign trace_regs_rf_22 = reg_22; // @[RegFile.scala 30:20]
  assign trace_regs_rf_23 = reg_23; // @[RegFile.scala 30:20]
  assign trace_regs_rf_24 = reg_24; // @[RegFile.scala 30:20]
  assign trace_regs_rf_25 = reg_25; // @[RegFile.scala 30:20]
  assign trace_regs_rf_26 = reg_26; // @[RegFile.scala 30:20]
  assign trace_regs_rf_27 = reg_27; // @[RegFile.scala 30:20]
  assign trace_regs_rf_28 = reg_28; // @[RegFile.scala 30:20]
  assign trace_regs_rf_29 = reg_29; // @[RegFile.scala 30:20]
  assign trace_regs_rf_30 = reg_30; // @[RegFile.scala 30:20]
  assign trace_regs_rf_31 = reg_31; // @[RegFile.scala 30:20]
  always @(posedge clock) begin
    if (reset) begin // @[RegFile.scala 27:20]
      reg_1 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h1 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_1 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_2 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h2 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_2 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_3 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h3 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_3 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_4 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h4 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_4 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_5 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h5 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_5 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_6 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h6 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_6 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_7 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h7 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_7 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_8 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h8 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_8 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_9 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h9 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_9 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_10 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'ha == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_10 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_11 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'hb == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_11 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_12 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'hc == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_12 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_13 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'hd == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_13 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_14 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'he == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_14 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_15 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'hf == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_15 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_16 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h10 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_16 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_17 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h11 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_17 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_18 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h12 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_18 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_19 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h13 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_19 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_20 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h14 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_20 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_21 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h15 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_21 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_22 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h16 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_22 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_23 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h17 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_23 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_24 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h18 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_24 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_25 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h19 == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_25 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_26 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h1a == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_26 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_27 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h1b == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_27 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_28 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h1c == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_28 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_29 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h1d == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_29 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_30 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h1e == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_30 <= io_in_rd_data; // @[RegFile.scala 35:24]
      end
    end
    if (reset) begin // @[RegFile.scala 27:20]
      reg_31 <= 64'h0; // @[RegFile.scala 27:20]
    end else if (io_in_reg_write) begin // @[RegFile.scala 34:26]
      if (5'h1f == io_in_rd_addr) begin // @[RegFile.scala 35:24]
        reg_31 <= io_in_rd_data; // @[RegFile.scala 35:24]
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
  wire [63:0] _io_out_dest_T = io_in_src1 & io_in_src2; // @[ALU.scala 30:22]
  wire [63:0] _io_out_dest_T_1 = io_in_src1 | io_in_src2; // @[ALU.scala 31:22]
  wire [63:0] _io_out_dest_T_3 = io_in_src1 + io_in_src2; // @[ALU.scala 32:22]
  wire [31:0] io_out_dest_hi = _io_out_dest_T_3[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [95:0] _io_out_dest_T_7 = {io_out_dest_hi,_io_out_dest_T_3}; // @[Cat.scala 30:58]
  wire [126:0] _GEN_0 = {{63'd0}, io_in_src1}; // @[ALU.scala 34:22]
  wire [126:0] _io_out_dest_T_9 = _GEN_0 << io_in_src2[5:0]; // @[ALU.scala 34:22]
  wire [63:0] _io_out_dest_T_11 = 4'h0 == io_in_alu_op ? _io_out_dest_T : 64'h0; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_13 = 4'h1 == io_in_alu_op ? _io_out_dest_T_1 : _io_out_dest_T_11; // @[Mux.scala 80:57]
  wire [63:0] _io_out_dest_T_15 = 4'h2 == io_in_alu_op ? _io_out_dest_T_3 : _io_out_dest_T_13; // @[Mux.scala 80:57]
  wire [95:0] _io_out_dest_T_17 = 4'h3 == io_in_alu_op ? _io_out_dest_T_7 : {{32'd0}, _io_out_dest_T_15}; // @[Mux.scala 80:57]
  wire [126:0] _io_out_dest_T_19 = 4'ha == io_in_alu_op ? _io_out_dest_T_9 : {{31'd0}, _io_out_dest_T_17}; // @[Mux.scala 80:57]
  wire [126:0] _io_out_dest_T_21 = 4'he == io_in_alu_op ? {{63'd0}, io_in_src2} : _io_out_dest_T_19; // @[Mux.scala 80:57]
  assign io_out_dest = _io_out_dest_T_21[63:0]; // @[ALU.scala 29:15]
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
  input  [3:0]  io_contr_alu_op,
  input         io_contr_alu_srca,
  input         io_contr_alu_srcb,
  input         io_contr_reg_write,
  input         io_contr_jalr,
  output [63:0] io_out_alu_dest
);
  wire  regs_clock; // @[EXU.scala 38:20]
  wire  regs_reset; // @[EXU.scala 38:20]
  wire  regs_io_in_reg_write; // @[EXU.scala 38:20]
  wire [4:0] regs_io_in_rs1_addr; // @[EXU.scala 38:20]
  wire [4:0] regs_io_in_rs2_addr; // @[EXU.scala 38:20]
  wire [4:0] regs_io_in_rd_addr; // @[EXU.scala 38:20]
  wire [63:0] regs_io_in_rd_data; // @[EXU.scala 38:20]
  wire [63:0] regs_io_out_rs1_data; // @[EXU.scala 38:20]
  wire [63:0] regs_io_out_rs2_data; // @[EXU.scala 38:20]
  wire [3:0] ALU_io_in_alu_op; // @[EXU.scala 44:19]
  wire [63:0] ALU_io_in_src1; // @[EXU.scala 44:19]
  wire [63:0] ALU_io_in_src2; // @[EXU.scala 44:19]
  wire [63:0] ALU_io_out_dest; // @[EXU.scala 44:19]
  wire  mem_ren; // @[EXU.scala 49:19]
  wire  mem_wen; // @[EXU.scala 49:19]
  wire [63:0] mem_raddr; // @[EXU.scala 49:19]
  wire [63:0] mem_rdata; // @[EXU.scala 49:19]
  wire [63:0] mem_waddr; // @[EXU.scala 49:19]
  wire [63:0] mem_wdata; // @[EXU.scala 49:19]
  wire [7:0] mem_mask; // @[EXU.scala 49:19]
  wire [63:0] _regs_io_in_rd_data_T = ALU_io_out_dest; // @[EXU.scala 56:59]
  RegFile regs ( // @[EXU.scala 38:20]
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
  ALU ALU ( // @[EXU.scala 44:19]
    .io_in_alu_op(ALU_io_in_alu_op),
    .io_in_src1(ALU_io_in_src1),
    .io_in_src2(ALU_io_in_src2),
    .io_out_dest(ALU_io_out_dest)
  );
  MEM mem ( // @[EXU.scala 49:19]
    .ren(mem_ren),
    .wen(mem_wen),
    .raddr(mem_raddr),
    .rdata(mem_rdata),
    .waddr(mem_waddr),
    .wdata(mem_wdata),
    .mask(mem_mask)
  );
  assign io_out_alu_dest = ALU_io_out_dest; // @[EXU.scala 57:21]
  assign regs_clock = clock;
  assign regs_reset = reset;
  assign regs_io_in_reg_write = io_contr_reg_write; // @[EXU.scala 39:24]
  assign regs_io_in_rs1_addr = io_in_rs1; // @[EXU.scala 40:24]
  assign regs_io_in_rs2_addr = io_in_rs2; // @[EXU.scala 41:24]
  assign regs_io_in_rd_addr = io_in_rd; // @[EXU.scala 42:24]
  assign regs_io_in_rd_data = io_contr_jalr ? io_in_snpc : _regs_io_in_rd_data_T; // @[EXU.scala 56:28]
  assign ALU_io_in_alu_op = io_contr_alu_op; // @[EXU.scala 45:20]
  assign ALU_io_in_src1 = io_contr_alu_srca ? io_in_pc : regs_io_out_rs1_data; // @[EXU.scala 46:26]
  assign ALU_io_in_src2 = io_contr_alu_srcb ? io_in_imm : regs_io_out_rs2_data; // @[EXU.scala 47:26]
  assign mem_ren = 1'h0; // @[EXU.scala 50:16]
  assign mem_wen = 1'h0; // @[EXU.scala 51:16]
  assign mem_raddr = ALU_io_out_dest; // @[EXU.scala 52:16]
  assign mem_waddr = ALU_io_out_dest; // @[EXU.scala 53:16]
  assign mem_wdata = regs_io_out_rs2_data; // @[EXU.scala 54:16]
  assign mem_mask = 8'h0;
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
  wire [3:0] IDU_io_contr_alu_op; // @[CPU.scala 20:19]
  wire  IDU_io_contr_alu_srca; // @[CPU.scala 20:19]
  wire  IDU_io_contr_alu_srcb; // @[CPU.scala 20:19]
  wire  IDU_io_contr_reg_write; // @[CPU.scala 20:19]
  wire  IDU_io_contr_pc_src; // @[CPU.scala 20:19]
  wire  IDU_io_contr_jalr; // @[CPU.scala 20:19]
  wire  EXU_clock; // @[CPU.scala 23:19]
  wire  EXU_reset; // @[CPU.scala 23:19]
  wire [63:0] EXU_io_in_pc; // @[CPU.scala 23:19]
  wire [63:0] EXU_io_in_snpc; // @[CPU.scala 23:19]
  wire [4:0] EXU_io_in_rs1; // @[CPU.scala 23:19]
  wire [4:0] EXU_io_in_rs2; // @[CPU.scala 23:19]
  wire [4:0] EXU_io_in_rd; // @[CPU.scala 23:19]
  wire [63:0] EXU_io_in_imm; // @[CPU.scala 23:19]
  wire [3:0] EXU_io_contr_alu_op; // @[CPU.scala 23:19]
  wire  EXU_io_contr_alu_srca; // @[CPU.scala 23:19]
  wire  EXU_io_contr_alu_srcb; // @[CPU.scala 23:19]
  wire  EXU_io_contr_reg_write; // @[CPU.scala 23:19]
  wire  EXU_io_contr_jalr; // @[CPU.scala 23:19]
  wire [63:0] EXU_io_out_alu_dest; // @[CPU.scala 23:19]
  reg [63:0] pc; // @[CPU.scala 14:21]
  wire [63:0] snpc = pc + 64'h4; // @[CPU.scala 15:17]
  wire [63:0] _pc_T_1 = pc + IDU_io_out_imm; // @[CPU.scala 39:37]
  wire [63:0] _pc_T_2 = EXU_io_out_alu_dest & 64'hfffffffffffffffe; // @[CPU.scala 39:98]
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
    .io_contr_pc_src(IDU_io_contr_pc_src),
    .io_contr_jalr(IDU_io_contr_jalr)
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
    .io_contr_jalr(EXU_io_contr_jalr),
    .io_out_alu_dest(EXU_io_out_alu_dest)
  );
  assign IFU_io_in_addr = pc; // @[CPU.scala 18:18]
  assign IDU_io_in_inst = IFU_io_out_inst; // @[CPU.scala 21:18]
  assign EXU_clock = clock;
  assign EXU_reset = reset;
  assign EXU_io_in_pc = pc; // @[CPU.scala 32:27]
  assign EXU_io_in_snpc = pc + 64'h4; // @[CPU.scala 15:17]
  assign EXU_io_in_rs1 = IDU_io_out_rs1; // @[CPU.scala 34:27]
  assign EXU_io_in_rs2 = IDU_io_out_rs2; // @[CPU.scala 35:27]
  assign EXU_io_in_rd = IDU_io_out_rd; // @[CPU.scala 36:27]
  assign EXU_io_in_imm = IDU_io_out_imm; // @[CPU.scala 37:27]
  assign EXU_io_contr_alu_op = IDU_io_contr_alu_op; // @[CPU.scala 24:27]
  assign EXU_io_contr_alu_srca = IDU_io_contr_alu_srca; // @[CPU.scala 25:27]
  assign EXU_io_contr_alu_srcb = IDU_io_contr_alu_srcb; // @[CPU.scala 26:27]
  assign EXU_io_contr_reg_write = IDU_io_contr_reg_write; // @[CPU.scala 27:27]
  assign EXU_io_contr_jalr = IDU_io_contr_jalr; // @[CPU.scala 31:27]
  always @(posedge clock) begin
    if (reset) begin // @[CPU.scala 14:21]
      pc <= 64'h80000000; // @[CPU.scala 14:21]
    end else if (IDU_io_contr_pc_src) begin // @[CPU.scala 39:12]
      pc <= _pc_T_1;
    end else if (IDU_io_contr_jalr) begin // @[CPU.scala 39:58]
      pc <= _pc_T_2;
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
