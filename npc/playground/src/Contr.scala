import chisel3._
import chisel3.util._

class Contr extends Module {
  val io = IO(new Bundle{
    val opcode = Input(UInt(7.W))
    val alu_src = Output(Bool())
    val reg_write = Output(Bool())
  })

  io.alu_src := false.B
  io.reg_write := true.B
  // io.reg_write := MuxLookup(io.opcode, false.B, Array(
  //   0x13.U(7.W) -> true.B
  // ))
}
