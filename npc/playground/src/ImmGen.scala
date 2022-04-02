import chisel3._
import chisel3.util._

class ImmGen extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W))
    val imm = Output(UInt(64.W))
  })

  // I-type
  io.imm := Cat(Fill(20, io.inst(31)), io.inst(31, 20))
}
