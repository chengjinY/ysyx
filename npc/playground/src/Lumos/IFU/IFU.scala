package lumos.IFU

import chisel3._
import chisel3.util._
import chisel3.experimental._

class IFUInput extends Bundle {
  val addr = UInt(64.W)
}

class IFUOutput extends Bundle {
  val inst = UInt(32.W)
}

class FetchInst extends HasBlackBoxInline {
  val io = IO(new Bundle {
    val in = Input(new IFUInput())
    val out = Output(new IFUOutput())
  })
  setInline("FetchInst.v",
    s"""
    |import "DPI-C" context function uint32_t get_inst(uint64_t addr);
    |module IFU_DPIC(addr, inst);
    |  input [63:0] addr;
    |  output [31:0] inst;
    |
    |  assign inst = get_inst(addr);
    |endmodule
    """.stripMargin);
}

class IFU extends Module {
  val io = IO(new Bundle {
    val in = Input(new IFUInput())
    val out = Output(new IFUOutput())
  })

  // using DPI-C to get instructions
  val fetchinst = Module(new FetchInst());
  io <> fetchinst.io
}