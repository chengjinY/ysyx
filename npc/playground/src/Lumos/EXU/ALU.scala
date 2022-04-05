import chisel3._
import chisel3.util._

import lumos.Shared.ALUConstants

class ALUInput extends Bundle {
  val alu_op = UInt(4.W)
  val src1 = UInt(64.W)
  val src2 = UInt(64.W)
}

class ALUOutput extends Bundle {
  val dest = UInt(64.W)
}

class ALU extends Module {
  val io = IO(new Bundle {
    val in = Input(new ALUInput())
    val out = Output(new ALUOutput())
  })

  val src1 = io.in.src1
  val src2 = io.in.src2

  io.out.dest := MuxLookup(io.in.srcen, 0.U, Array(
    ALUADD.U -> (src1 + src2),
    ALUSUB.U -> (src1 - src2)
  ))
}
