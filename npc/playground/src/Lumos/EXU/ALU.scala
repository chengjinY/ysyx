package lumos.EXU

import chisel3._
import chisel3.util._

import lumos.util.ALUConstants._

class ALUInput extends Bundle {
  val alu_op = UInt(5.W)
  val src1   = UInt(64.W)
  val src2   = UInt(64.W)
  val branch = UInt(3.W)
}

class ALUOutput extends Bundle {
  val dest = UInt(64.W)
  val cmp  = Bool()
}

class ALU extends Module {
  val io = IO(new Bundle {
    val in  = Input(new ALUInput())
    val out = Output(new ALUOutput())
  })

  // val a32 = io.in.src1(31, 0)
  val a64 = io.in.src1
  // val b32 = io.in.src2(31, 0)
  val b64 = io.in.src2
  // val s32 = io.in.src2(4, 0)
  // val s64 = io.in.src2(5, 0)

  def SEXT(x: UInt): UInt = Cat(Fill(32, x(31)), x)

  io.out.dest := MuxLookup(io.in.alu_op, 0.U, Array(
    ALUNOP   -> (0.U).asUInt(),
    ALUAND   -> (a64 & b64).asUInt(),
    ALUOR    -> (a64 | b64).asUInt(),
    ALUXOR   -> (a64 ^ b64).asUInt(),
    ADD32    -> (SEXT((a64.asUInt() + b64.asUInt())(31, 0).asUInt())).asUInt(),
    ADD64    -> (a64.asUInt() + b64.asUInt()).asUInt(),
    SUBS32   -> (SEXT((a64.asSInt() - b64.asSInt())(31, 0).asUInt())).asUInt(),
    SUBS64   -> (a64.asSInt() - b64.asSInt()).asUInt(),
    SUBU32   -> (SEXT((a64.asUInt() - b64.asUInt())(31, 0).asUInt())).asUInt(),
    SUBU64   -> (a64.asUInt() - b64.asUInt()).asUInt(),
    MUL32    -> (SEXT((a64.asUInt() * b64.asUInt())(31, 0).asUInt())).asUInt(),
    MUL64    -> (a64.asUInt() * b64.asUInt()).asUInt(),
    // DIVS32   -> (SEXT((a64(31, 0).asSInt() / b64(31, 0).asSInt())(31, 0).asUInt())).asUInt(),
    // DIVS64   -> (a64.asSInt() / b64.asSInt()).asUInt(),
    // DIVU32   -> (SEXT((a64(31, 0).asUInt() / b64(31, 0).asUInt())(31, 0).asUInt())).asUInt(),
    // DIVU64   -> (a64.asUInt() / b64.asUInt()).asUInt(),
    // REMS32   -> (SEXT((a64(31, 0).asSInt() % b64(31, 0).asSInt())(31, 0).asUInt())).asUInt(),
    // REMS64   -> (a64.asSInt() % b64.asSInt()).asUInt(),
    // REMU32   -> (SEXT((a64(31, 0).asUInt() % b64(31, 0).asUInt())(31, 0).asUInt())).asUInt(),
    // REMU64   -> (a64.asUInt() % b64.asUInt()).asUInt(),
    SFTL32   -> (SEXT((a64 << b64(4, 0))(31, 0).asUInt())).asUInt(),
    SFTL64   -> (a64 << b64(4, 0)).asUInt(),
    SFTRS32  -> (SEXT((a64(31, 0).asSInt() >> b64(4, 0))(31, 0).asUInt())).asUInt(),
    SFTRS64  -> (a64.asSInt() >> b64(4, 0)).asUInt(),
    SFTRU32  -> (SEXT((a64(31, 0).asUInt() >> b64(4, 0))(31, 0).asUInt())).asUInt(),
    SFTRU64  -> (a64.asUInt() >> b64(4, 0)).asUInt()
  ))

  val diff = a64 - b64

  io.out.cmp := MuxLookup(io.in.branch, false.B, Array(
    0.U -> (~diff.orR),
    1.U -> (~Mux(a64(63) === b64(63), diff(63), a64(63))),
    2.U -> ( Mux(a64(63) === b64(63), diff(63), b64(63))),
    5.U -> (~Mux(a64(63) === b64(63), diff(63), a64(63))),
    6.U -> ( Mux(a64(63) === b64(63), diff(63), b64(63))),
    7.U -> ( diff.orR)
  ))
}
