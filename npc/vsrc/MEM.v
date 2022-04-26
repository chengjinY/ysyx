
import "DPI-C" function void pmem_read(
  input longint raddr, output longint rdata);
import "DPI-C" function void pmem_write(
  input longint waddr, input longint wdata, input byte mask);
module MEM(ren, wen, raddr, rdata, waddr, wdata, mask);
  input         ren;
  input         wen;
  input  [63:0] raddr;
  output [63:0] rdata;
  input  [63:0] waddr;
  input  [63:0] wdata;
  input  [7:0]  mask;
always @(*) begin
  if (ren)
    pmem_read(raddr, rdata);
  if (wen)
    pmem_write(waddr, wdata, mask);
end
endmodule
    