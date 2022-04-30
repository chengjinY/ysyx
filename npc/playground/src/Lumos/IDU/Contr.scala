package lumos.IDU

import chisel3._
import chisel3.util._

import lumos.util.InstConstants._
import lumos.util.ALUConstants._

class ContrInput extends Bundle {
  val inst = UInt(32.W)
}

class ContrOutput extends Bundle {
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

class Contr extends Module {
  val io = IO(new Bundle{
    val in  = Input(new ContrInput())
    val out = Output(new ContrOutput())
  })

  val iducontr = ListLookup(io.in.inst, List(ALUNOP, false.B, false.B, false.B, false.B, false.B, false.B, false.B, false.B, 4.U, 3.U), Array(
/*  Opcode        alu_op    alu_srca    alu_srcb    reg_write   mem_read    mem_write   mem_to_reg  pc_src      jalr        branch  width*/
//  For branch: 0 -> (a == b), 1/2 -> (a >= b, S/U), 5/6 -> (a < b, S/U), 7 -> (a != b), 4 -> NOP
//  For width:  0 -> 1.W,   1 -> 2.W,   2 -> 4.W,   3 -> 8.W
    ADD   -> List(ADD64,    false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    ADDI  -> List(ADD64,    false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    ADDIW -> List(ADD32,    false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    ADDW  -> List(ADD32,    false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    AND   -> List(ALUAND,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    ANDI  -> List(ALUAND,   false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    AUIPC -> List(ADD64,    true.B,     true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    BEQ   -> List(ALUNOP,   false.B,    false.B,    false.B,    false.B,    false.B,    false.B,    true.B,     false.B,    0.U,    3.U),
    BGE   -> List(ALUNOP,   false.B,    false.B,    false.B,    false.B,    false.B,    false.B,    true.B,     false.B,    1.U,    3.U),
    BGEU  -> List(ALUNOP,   false.B,    false.B,    false.B,    false.B,    false.B,    false.B,    true.B,     false.B,    2.U,    3.U),
    BLT   -> List(ALUNOP,   false.B,    false.B,    false.B,    false.B,    false.B,    false.B,    true.B,     false.B,    5.U,    3.U),
    BLTU  -> List(ALUNOP,   false.B,    false.B,    false.B,    false.B,    false.B,    false.B,    true.B,     false.B,    6.U,    3.U),
    BNE   -> List(ALUNOP,   false.B,    false.B,    false.B,    false.B,    false.B,    false.B,    true.B,     false.B,    7.U,    3.U),
//  DIV   -> List(DIVS64,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
//  DIVU  -> List(DIVU64,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
//  DIVUW -> List(DIVU32,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
//  DIVW  -> List(DIVS32,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    JAL   -> List(ADD64,    true.B,     false.B,    true.B,     false.B,    false.B,    false.B,    true.B,     true.B,     4.U,    3.U),
    JALR  -> List(ADD64,    false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    true.B,     4.U,    3.U),
    LB    -> List(ADD64,    false.B,    true.B,     true.B,     true.B,     false.B,    true.B,     false.B,    false.B,    4.U,    4.U),
    LBU   -> List(ADD64,    false.B,    true.B,     true.B,     true.B,     false.B,    true.B,     false.B,    false.B,    4.U,    0.U),
    LD    -> List(ADD64,    false.B,    true.B,     true.B,     true.B,     false.B,    true.B,     false.B,    false.B,    4.U,    3.U),
    LH    -> List(ADD64,    false.B,    true.B,     true.B,     true.B,     false.B,    true.B,     false.B,    false.B,    4.U,    5.U),
    LHU   -> List(ADD64,    false.B,    true.B,     true.B,     true.B,     false.B,    true.B,     false.B,    false.B,    4.U,    1.U),
    LW    -> List(ADD64,    false.B,    true.B,     true.B,     true.B,     false.B,    true.B,     false.B,    false.B,    4.U,    6.U),
    LWU   -> List(ADD64,    false.B,    true.B,     true.B,     true.B,     false.B,    true.B,     false.B,    false.B,    4.U,    2.U),
    LUI   -> List(ALUNOP,   false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    MUL   -> List(MUL64,    false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    MULW  -> List(MUL64,    false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    OR    -> List(ALUOR,    false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
//  REMW  -> List(),
    SB    -> List(ADD64,    false.B,    true.B,     false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    4.U,    0.U),
    SD    -> List(ADD64,    false.B,    true.B,     false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    4.U,    3.U),
    SH    -> List(ADD64,    false.B,    true.B,     false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    4.U,    1.U),
    SW    -> List(ADD64,    false.B,    true.B,     false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    4.U,    2.U),
    SLL   -> List(SFTL64,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SLLI  -> List(SFTL64,   false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SLLIW -> List(SFTL32,   false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SLLW  -> List(SFTL32,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SLT   -> List(ALUNOP,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    5.U,    3.U),
    SLTI  -> List(ALUNOP,   false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    5.U,    3.U),
    SLTIU -> List(ALUNOP,   false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    6.U,    3.U),
    SLTU  -> List(ALUNOP,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    6.U,    3.U),
    SRA   -> List(SFTRS64,  false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SRAI  -> List(SFTRS64,  false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SRAIW -> List(SFTRS32,  false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SRAW  -> List(SFTRS32,  false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SRL   -> List(SFTRU64,  false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SRLI  -> List(SFTRU64,  false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SRLIW -> List(SFTRU32,  false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SRLW  -> List(SFTRU32,  false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SUB   -> List(SUBU64,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    SUBW  -> List(SUBU32,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    XOR   -> List(ALUXOR,   false.B,    false.B,    true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U),
    XORI  -> List(ALUXOR,   false.B,    true.B,     true.B,     false.B,    false.B,    false.B,    false.B,    false.B,    4.U,    3.U)
  ))

  io.out.alu_op     := iducontr(0)
  io.out.alu_srca   := iducontr(1)
  io.out.alu_srcb   := iducontr(2)
  io.out.reg_write  := iducontr(3)
  io.out.mem_read   := iducontr(4)
  io.out.mem_write  := iducontr(5)
  io.out.mem_to_reg := iducontr(6)
  io.out.pc_src     := iducontr(7)
  io.out.jalr       := iducontr(8)
  io.out.branch     := iducontr(9)
  io.out.wdth       := iducontr(10)
}
