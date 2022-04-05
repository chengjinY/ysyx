
import "DPI-C" context function logic[31:0] get_inst(logic[63:0] addr);
module FetchInst(addr, inst);
  input [63:0] in_addr;
  output [31:0] in_inst;

  assign inst = get_inst(addr);
endmodule
    
