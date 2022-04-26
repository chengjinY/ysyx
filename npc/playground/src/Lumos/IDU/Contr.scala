package lumos.IDU

import chisel3._
import chisel3.util._

import lumos.util.InstConstants._
import lumos.util.ALUConstants._

class ContrInput extends Bundle {
  val inst = UInt(32.W)
}

class ContrOutput extends Bundle {
  val alu_op     = UInt(4.W)
  val alu_src    = Bool()
  val reg_write  = Bool()
  val mem_read   = Bool()
  val mem_write  = Bool()
  val mem_to_reg = Bool()
  val pc_src     = Bool()
}

class Contr extends Module {
  val io = IO(new Bundle{
    val in  = Input(new ContrInput())
    val out = Output(new ContrOutput())
  })

  val controller = ListLookup(io.in.inst, List(ALUNOP, false.B, false.B, false.B, false.B, false.B, false.B), Array(
/*
 *  Opcode        alu_op      alu_src     reg_write     mem_read      mem_write     mem_to_reg      pc_src
 */
    ADDI  -> List(ALUADD,     true.B,     true.B,       false.B,      false.B,      false.B,        false.B)
  ))

  io.out.alu_op     := controller(0)
  io.out.alu_src    := controller(1)
  io.out.reg_write  := controller(2)
  io.out.mem_read   := controller(3)
  io.out.mem_write  := controller(4)
  io.out.mem_to_reg := controller(5)
  io.out.pc_src     := controller(6)
}
