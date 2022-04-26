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
  def I() = Cat(Fill(20, io.in.inst(31)), io.in.inst(31, 20))
  // S-type
  def S() = Cat(Fill(20, io.in.inst(31)), io.in.inst(31, 25), io.in.inst(11, 7))
  // B-type
  def B() = Cat(Fill(20, io.in.inst(31)), io.in.inst(7), io.in.inst(30, 25), io.in.inst(11, 8), "b0".U)
  // U-type
  def U() = Cat(io.in.inst(31, 12), "b0000 0000 0000".U)
  // J-type
  def J() = Cat(Fill(12, io.in.inst(31)), io.in.inst(19, 12), io.in.inst(11), io.in.inst(30, 21), "b0".U)
  
  val imm = Lookup(io.in.inst, 0.U, Array(
    ADDI  -> I()
  ));

  io.out.imm := imm
}
