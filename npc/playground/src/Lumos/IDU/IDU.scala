package lumos.IDU

import chisel3._
import chisel3.util._

import lumos.util.Ebreak

class IDUInput extends Bundle {
  val inst       = UInt(32.W)
}

class IDUControl extends Bundle {
  val alu_op     = UInt(5.W)
  val alu_srca   = Bool()
  val alu_srcb   = Bool()
  val reg_write  = Bool()
  val mem_read   = Bool()
  val mem_write  = Bool()
  val mem_to_reg = Bool()
  val pc_src     = Bool()
  val jalr       = Bool()
  val branch     = UInt(3.W)
  val wdth       = UInt(3.W)
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

  val ebreak = Module(new Ebreak())
  ebreak.io.inst      := io.in.inst

  val contr = Module(new Contr())
  contr.io.in.inst    := io.in.inst
  io.contr.alu_op     := contr.io.out.alu_op
  io.contr.alu_srca   := contr.io.out.alu_srca
  io.contr.alu_srcb   := contr.io.out.alu_srcb
  io.contr.reg_write  := contr.io.out.reg_write
  io.contr.mem_read   := contr.io.out.mem_read
  io.contr.mem_write  := contr.io.out.mem_write
  io.contr.mem_to_reg := contr.io.out.mem_to_reg
  io.contr.pc_src     := contr.io.out.pc_src
  io.contr.jalr       := contr.io.out.jalr
  io.contr.branch     := contr.io.out.branch
  io.contr.wdth       := contr.io.out.wdth

  val immgen = Module(new ImmGen())
  immgen.io.in.inst := io.in.inst
  io.out.imm        := immgen.io.out.imm

  io.out.rs1 := io.in.inst(19, 15)
  io.out.rs2 := io.in.inst(24, 20)
  io.out.rd  := io.in.inst(11, 7)
}
