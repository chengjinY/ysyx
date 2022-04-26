package lumos.IDU

import chisel3._
import chisel3.util._

class IDUInput extends Bundle {
  val inst = UInt(32.W)
}

class IDUControl extends Bundle {
  val alu_op     = UInt(4.W)
  val alu_src    = Bool()
  val reg_write  = Bool()
  val mem_read   = Bool()
  val mem_write  = Bool()
  val mem_to_reg = Bool()
  val pc_src     = Bool()
}

class IDUOutput extends Bundle {
  val rs1 = Output(UInt(5.W))
  val rs2 = Output(UInt(5.W))
  val rd  = Output(UInt(5.W))
  val imm = Output(UInt(64.W))
}

class IDU extends Module {
  val io = IO(new Bundle {
    val in    = Input(new IDUInput())
    val out   = Output(new IDUOutput())
    val contr = Output(new IDUControl())
  })

  val contr = Module(new Contr())
  contr.io.in.inst    := io.in.inst
  io.contr.alu_op     := contr.io.out.alu_op
  io.contr.alu_src    := contr.io.out.alu_src
  io.contr.reg_write  := contr.io.out.reg_write
  io.contr.mem_read   := contr.io.out.mem_read
  io.contr.mem_write  := contr.io.out.mem_write
  io.contr.mem_to_reg := contr.io.out.mem_to_reg
  io.contr.pc_src     := contr.io.out.pc_src

  val immgen = Module(new ImmGen())
  immgen.io.in.inst := io.in.inst
  io.out.imm        := immgen.io.out.imm

  io.out.rs1 := io.in.inst(19, 15)
  io.out.rs2 := io.in.inst(24, 20)
  io.out.rd  := io.in.inst(11, 7)
}
