package lumos.EXU

import chisel3._

class EXUInput extends Bundle {
  val alu_src = UInt(4.W)
  val rs1 = UInt(64.W)
  val rs2 = UInt(64.W)
}

class EXUOutput extends Bundle {
  val dest = UInt(64.W)
}

class EXU extends Module {
  val io = IO(new Bundle {
    val in = Input(new EXUInput())
    val out = Output(new EXUOutput())
  })

  val ALU = Module(new ALU())
  ALU.io.in.alu_src := io.in.alu_src
  ALU.io.in.src1 := io.in.rs1
  ALU.io.in.src2 := io.in.rs2
  io.out.dest := ALU.io.out.dest
}
