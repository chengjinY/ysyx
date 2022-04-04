import chisel3._
import chisel3.util._

class Contr extends Module {
  val io = IO(new Bundle{
    val opcode = Input(UInt(7.W))
    val alu_src = Output(UInt(1.W))
    val reg_write = Output(UInt(1.W))
  })

  io.alu_src := 0.U
  io.reg_write := 1.U
  // io.reg_write := MuxLookup(io.opcode, false.B, Array(
  //   0x13.U(7.W) -> true.B
  // ))
}
