import chisel3._
import chisel3.util._

import Lumos.Shared.OpcodeConstants

class ImmGen extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W))
    val imm = Output(UInt(64.W))
  })

  // I-type
  def i(): Cat(Fill(20, io.in.inst(31)), io.in.inst(31, 20))
  
  io.out.imm := MuxLookup(io.in.inst(6, 0), 0.U, Array(
    ADDI.U -> i()
  ));
}
