
import "DPI-C" context function unsigned int get_inst(unsigned long long addr);
module IFU_DPIC(addr, inst);
  input [63:0] addr;
  output [31:0] inst;

  assign inst = get_inst(addr);
endmodule
    