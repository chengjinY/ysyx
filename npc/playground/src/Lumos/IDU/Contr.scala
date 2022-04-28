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
  val alu_srca   = Bool()
  val alu_srcb   = Bool()
  val reg_write  = Bool()
  val mem_read   = Bool()
  val mem_write  = Bool()
  val mem_to_reg = Bool()
  val pc_src     = Bool()
  val jalr       = Bool()
}

class Contr extends Module {
  val io = IO(new Bundle{
    val in  = Input(new ContrInput())
    val out = Output(new ContrOutput())
  })

  val controller = ListLookup(io.in.inst, List(ALUNOP, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B), Array(
/*  Opcode        alu_op        alu_srca      alu_srcb      reg_write     mem_read      mem_write     mem_to_reg    pc_src        jalr      */
    ADD   -> List(ALUADD,       false.B,      false.B,      true.B,       false.B,      false.B,      false.B,      false.B,      false.B),
    ADDI  -> List(ALUADD,       false.B,      true.B,       true.B,       false.B,      false.B,      false.B,      false.B,      false.B),
    ADDIW -> List(SEXTADD,      false.B,      true.B,       true.B,       false.B,      false.B,      false.B,      false.B,      false.B),
    ADDW  -> List(SEXTADD,      false.B,      false.B,      true.B,       false.B,      false.B,      false.B,      false.B,      false.B),
    AND   -> List(ALUAND,       false.B,      false.B,      true.B,       false.B,      false.B,      false.B,      false.B,      false.B),
    ANDI  -> List(ALUAND,       false.B,      true.B,       true.B,       false.B,      false.B,      false.B,      false.B,      false.B),
    AUIPC -> List(ALUADD,       true.B,       false.B,      true.B,       false.B,      false.B,      false.B,      false.B,      false.B),
//  BEQ   -> List()
//  BGE   -> List()
//  BGEU  -> List()
//  BLT   -> List()
//  BLTU  -> List()
//  BNE   -> List()
//  DIVW  -> List()
    JAL   -> List(ALUADD,       true.B,       false.B,      true.B,       false.B,      false.B,      false.B,      true.B,       true.B ),
    JALR  -> List(ALUADD,       false.B,      true.B,       true.B,       false.B,      false.B,      false.B,      false.B,      true.B ),
//  LBU   -> List()
//  LD    -> List()
//  LH    -> List()
//  LHU   -> List()
//  LW    -> List()
    LUI   -> List(TRANSB,       false.B,      true.B,       true.B,       false.B,      false.B,      false.B,      false.B,      false.B),
//  MUL   -> List()
//  MULW  -> List()
//  OR    -> List()
//  REMW  -> List()
//  SB    -> List()
//  SD    -> List()
//  SH    -> List()
//  SW    -> List()
    SLLI  -> List(SFTL,         false.B,      true.B,       true.B,       false.B,      false.B,      false.B,      false.B,      false.B)
//  SLLIW -> List()
//  SLLW  -> List()
//  SLT   -> List()
//  SLTIU -> List()
//  SLTU  -> List()
//  SRAI  -> List()
//  SRAIW -> List()
//  SRAW  -> List()
//  SRLI  -> List()
//  SRLIW -> List()
//  SRLW  -> List()
//  SUB   -> List()
//  SUBW  -> List()
//  XORI  -> List()
  ))

  io.out.alu_op     := controller(0)
  io.out.alu_srca   := controller(1)
  io.out.alu_srcb   := controller(2)
  io.out.reg_write  := controller(3)
  io.out.mem_read   := controller(4)
  io.out.mem_write  := controller(5)
  io.out.mem_to_reg := controller(6)
  io.out.pc_src     := controller(7)
  io.out.jalr       := controller(8)
}
