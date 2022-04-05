
import "DPI-C" context function uint32_t get_inst(uint64_t addr);
module IFU_DPIC(addr, inst);
  input [63:0] addr;
  output [31:0] inst;

  assign inst = get_inst(addr);
endmodule
    