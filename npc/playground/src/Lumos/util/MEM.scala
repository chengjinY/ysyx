package lumos.util

import chisel3._
import chisel3.util._

class MEM extends HasBlackBoxInline {
  val io = IO(new Bundle {
    val ren   = Input(Bool())
    val wen   = Input(Bool())
    val raddr = Input(UInt(64.W))
    val rdata = Output(UInt(64.W))
    val waddr = Input(UInt(64.W))
    val wdata = Input(UInt(64.W))
    val mask  = Input(UInt(8.W))
  })
  setInline("MEM.v",
    s"""
    |import "DPI-C" function void pmem_read(
    |  input longint raddr, output longint rdata);
    |import "DPI-C" function void pmem_write(
    |  input longint waddr, input longint wdata, input byte mask);
    |module MEM(ren, wen, raddr, rdata, waddr, wdata, mask);
    |  input             ren;
    |  input             wen;
    |  input  reg [63:0] raddr;
    |  output reg [63:0] rdata;
    |  input  reg [63:0] waddr;
    |  input  reg [63:0] wdata;
    |  input  reg [7:0]  mask;
    |
    |  always @(*) begin
    |    if (ren) pmem_read(raddr, rdata);
    |    else rdata = 64'b0;
    |    if (wen) pmem_write(waddr, wdata, mask);
    |  end
    |endmodule
    """.stripMargin)
}
