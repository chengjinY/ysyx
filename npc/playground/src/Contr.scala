import chisel3._

class Contr extends Module {
  val io = IO(new Bundle{
    val opcode = Input(UInt(7.W))
    val alu_src = Output(Bool())
    val reg_write = Output(Bool())
  })
  
  if (io.opcode == 0x13.U(7.W)) {
    io.reg_write := true.B
    io.alu_src := true.B
  } else {
    io.reg_write := false.B
    io.alu_src := false.B
  }
}
