package lumos.IDU

import chisel3._
import chisel3.util._

import lumos.util.OpcodeConstants._
import lumos.util.ALUConstants._

class ContrInput extends Bundle {
  val opcode = UInt(7.W)
  // I don't know if they are used for now.
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

  val controller = ListLookup(io.in.opcode, List(ALUNOP, false.B, false.B), Array(
/*
 *  Opcode        ALUOp     RegWrite    ALUSrc
 */
    ADDI  -> List(ALUADD,   true.B,     true.B)
    AUIPC -> List(ALUADD,   true.B,     true.B)
    JAL   -> List(
  ))

  io.out.alu_op := controller(0)
  io.out.reg_write := controller(1)
  io.out.alu_src := controller(2)
}
