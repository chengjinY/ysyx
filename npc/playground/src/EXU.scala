import chisel3._

class EXU extends Module {
  val io = IO(new Bundle {
    val rs1 = Input(UInt(64.W))
    val rs2 = Input(UInt(64.W))
    val dest = Output(UInt(64.W))
  })

  val ALU = Module(new ALU())
  ALU.io.srcen := true.B
  ALU.io.src1 := io.rs1
  ALU.io.src2 := io.rs2
  io.dest := ALU.io.dest
}
