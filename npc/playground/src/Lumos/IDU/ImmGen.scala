package lumos.IDU

import chisel3._
import chisel3.util._

import lumos.Shared.OpcodeConstants._

class ImmGenInput extends Bundle {
  val inst = UInt(32.W)
}

class ImmGenOutput extends Bundle {
  val imm = UInt(64.W)
}

class ImmGen extends Module {
  val io = IO(new Bundle {
    val in = Input(new ImmGenInput())
    val out = Output(new ImmGenOutput())
  })

  // I-type
  def i() = Cat(Fill(20, io.in.inst(31)), io.in.inst(31, 20))
  
  io.out.imm := MuxLookup(io.in.inst(6, 0), 0.U, Array(
    ADDI.U -> i()
  ));
}
