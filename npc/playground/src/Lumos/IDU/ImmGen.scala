package lumos.IDU

import chisel3._
import chisel3.util._

import lumos.util.InstConstants._

class ImmGenInput extends Bundle {
  val inst = UInt(32.W)
}

class ImmGenOutput extends Bundle {
  val imm = UInt(64.W)
}

class ImmGen extends Module {
  val io = IO(new Bundle {
    val in  = Input(new ImmGenInput())
    val out = Output(new ImmGenOutput())
  })

  // R-type
  def R() = 0.U
  // I-type
  def I() = Cat(Fill(52, io.in.inst(31)), io.in.inst(31, 20))
  // S-type
  def S() = Cat(Fill(52, io.in.inst(31)), io.in.inst(31, 25), io.in.inst(11, 7))
  // B-type
  def B() = Cat(Fill(52, io.in.inst(31)), io.in.inst(7), io.in.inst(30, 25), io.in.inst(11, 8), "b0".U)
  // U-type
  def U() = Cat(Fill(32, io.in.inst(31)), io.in.inst(31, 12), "b000000000000".U)
  // J-type
  def J() = Cat(Fill(44, io.in.inst(31)), io.in.inst(19, 12), io.in.inst(20), io.in.inst(30, 21), "b0".U)
  
  val imm = Lookup(io.in.inst, 0.U, Array(
    ADD   -> R(),
    ADDI  -> I(),
    ADDIW -> I(),
    ADDW  -> R(),
    AND   -> R(),
    ANDI  -> I(),
    AUIPC -> U(),
    BEQ   -> B(),
    BGE   -> B(),
    BGEU  -> B(),
    BLT   -> B(),
    BLTU  -> B(),
    BNE   -> B(),
    DIVW  -> R(),
    JAL   -> J(),
    JALR  -> I(),
    LBU   -> I(),
    LD    -> I(),
    LH    -> I(),
    LHU   -> I(),
    LW    -> I(),
    LUI   -> U(),
    MUL   -> R(),
    MULW  -> R(),
    OR    -> R(),
    REMW  -> R(),
    SB    -> S(),
    SD    -> S(),
    SH    -> S(),
    SW    -> S(),
    SLLI  -> I(),
    SLLIW -> I(),
    SLLW  -> R(),
    SLT   -> R(),
    SLTIU -> I(),
    SLTU  -> R(),
    SRAI  -> I(),
    SRAIW -> I(),
    SRAW  -> R(),
    SRLI  -> I(),
    SRLIW -> I(),
    SRLW  -> R(),
    SUB   -> R(),
    SUBW  -> R(),
    XORI  -> I()
  ));

  io.out.imm := imm
}
