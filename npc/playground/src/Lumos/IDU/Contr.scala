import chisel3._
import chisel3.util._

import Lumos.Shared._

class ContrInput extends Bundle {
  val opcode = UInt(7.W)
  // val func3 = UInt(3.W)
  // val func7 = UInt(7.W)
}

class ContrOutput extends Bundle {
  val reg_write = Bool()
  val alu_src = Bool()
  val alu_op = UInt(4.W)
}

class Contr extends Module {
  val io = IO(new Bundle{
    val in = Input(new ContrInput())
    val out = Output(new ContrOutput())
  })

  io.out.reg_write := MuxLookup(io.in.opcode, false.B, Array(
    ADDI.U_-> true.B
  ))

  io.out.alu_src := MuxLookup(io.in.opcode, false.B, Array(
    ADDI.U -> true.B
  ))

  io.out.alu_op := MuxLookup(io.in.opcode, ALUNOP, Array(
    ADDI.U -> ALUADD.U
  ))
}
