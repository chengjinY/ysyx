
import "DPI-C" function int get_inst(input long addr);
module FetchInst(in_addr, out_inst);
  input [63:0] in_addr;
  output [31:0] out_inst;

  assign out_inst = get_inst(in_addr);
endmodule
    