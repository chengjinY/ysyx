package lumos.IFU

import chisel3._
import chisel3.util._

import lumos.util.MEM

class IFUInput extends Bundle {
  val addr = UInt(64.W)
}

class IFUOutput extends Bundle {
  val inst = UInt(32.W)
}

class IFU extends Module {
  val io = IO(new Bundle {
    val in  = Input(new IFUInput())
    val out = Output(new IFUOutput())
  })

  // using DPI-C to get instructions
  val fetchmem = Module(new MEM())
  fetchmem.io.ren   := true.B
  fetchmem.io.wen   := false.B
  fetchmem.io.raddr := io.in.addr
  io.out.inst       := fetchmem.io.rdata(31, 0)
}
