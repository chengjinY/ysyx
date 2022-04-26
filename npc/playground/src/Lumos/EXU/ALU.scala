package lumos.EXU

import chisel3._
import chisel3.util._

import lumos.util.ALUConstants._

class ALUInput extends Bundle {
  val alu_op = UInt(4.W)
  val src1   = UInt(64.W)
  val src2   = UInt(64.W)
}

class ALUOutput extends Bundle {
  val dest = UInt(64.W)
}

class ALU extends Module {
  val io = IO(new Bundle {
    val in  = Input(new ALUInput())
    val out = Output(new ALUOutput())
  })

  val src1 = io.in.src1
  val src2 = io.in.src2

  io.out.dest := MuxLookup(io.in.alu_op, 0.U, Array(
    ALUADD -> (src1 + src2),
    ALUSUB -> (src1 - src2)
  ))
}
