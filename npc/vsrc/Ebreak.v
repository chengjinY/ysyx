
import "DPI-C" function void ebreak();
module Ebreak(inst);
  input [31:0] inst;
always @(*) begin
  if (inst == 32'b00000000000100000000000001110011)
    ebreak();
end
endmodule
    