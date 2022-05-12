package lumos.util

import chisel3._
import chisel3.util._

class Ebreak extends HasBlackBoxInline {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W))
  })
  setInline("Ebreak.v",
    s"""
    |import "DPI-C" function void ebreak();
    |module Ebreak(inst);
    |  input [31:0] inst;
    |always @(*) begin
    |  if (inst == 32'b00000000000100000000000001110011)
    |    ebreak();
    |end
    |endmodule
    """.stripMargin)
}
