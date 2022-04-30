package lumos.EXU

import chisel3._
import chisel3.util._

import lumos.util.MEM

class EXUInput extends Bundle {
  val pc   = UInt(64.W)
  val snpc = UInt(64.W)
  val rs1  = UInt(5.W)
  val rs2  = UInt(5.W)
  val rd   = UInt(5.W)
  val imm  = UInt(64.W)
}

class EXUControl extends Bundle {
  val alu_op     = UInt(5.W)
  val alu_srca   = Bool()
  val alu_srcb   = Bool()
  val reg_write  = Bool()
  val mem_read   = Bool()
  val mem_write  = Bool()
  val mem_to_reg = Bool()
  val jalr       = Bool()
  val branch     = UInt(3.W)
  val wdth       = UInt(3.W)
}

class EXUOutput extends Bundle {
  val alu_dest = UInt(64.W)
  val pc_bsrc  = Bool()
}

class EXU extends Module {
  val io = IO(new Bundle {
    val in    = Input(new EXUInput())
    val contr = Input(new EXUControl())
    val out   = Output(new EXUOutput())
  })

  val regs = Module(new RegFile())
  regs.io.in.reg_write := io.contr.reg_write
  regs.io.in.rs1_addr  := io.in.rs1
  regs.io.in.rs2_addr  := io.in.rs2
  regs.io.in.rd_addr   := io.in.rd
  regs.io.in.pc        := io.in.pc

  val ALU = Module(new ALU())
  ALU.io.in.alu_op := io.contr.alu_op
  ALU.io.in.src1   := Mux(io.contr.alu_srca, io.in.pc, regs.io.out.rs1_data)
  ALU.io.in.src2   := Mux(io.contr.alu_srcb, io.in.imm, regs.io.out.rs2_data)
  ALU.io.in.branch := io.contr.branch
  io.out.pc_bsrc   := ALU.io.out.cmp

  val mem = Module(new MEM())
  mem.io.ren   := io.contr.mem_read
  mem.io.wen   := io.contr.mem_write
  mem.io.raddr := ALU.io.out.dest
  mem.io.waddr := ALU.io.out.dest
  mem.io.wdata := regs.io.out.rs2_data
  mem.io.mask  := MuxLookup(io.contr.wdth, 0.U, Array(
    0.U -> "b00000001".U,
    1.U -> "b00000011".U,
    2.U -> "b00001111".U,
    3.U -> "b11111111".U
  ))

  val alu_dest = Wire(UInt(64.W))
  alu_dest := Mux(io.contr.branch === 4.U, ALU.io.out.dest, Cat(0.U(63.W), ALU.io.out.cmp))

  val mem_dest = Wire(UInt(64.W))
  mem_dest := MuxLookup(io.contr.wdth, mem.io.rdata, Array(
    0.U -> Cat(0.U(56.W), mem.io.rdata( 7, 0)),
    1.U -> Cat(0.U(48.W), mem.io.rdata(15, 0)),
    2.U -> Cat(0.U(32.W), mem.io.rdata(31, 0)),
    4.U -> Cat(Fill(56, mem.io.rdata( 7)), mem.io.rdata( 7, 0)),
    5.U -> Cat(Fill(48, mem.io.rdata(15)), mem.io.rdata(15, 0)),
    6.U -> Cat(Fill(32, mem.io.rdata(31)), mem.io.rdata(31, 0))
  ))
  regs.io.in.rd_data := Mux(io.contr.jalr, io.in.snpc, Mux(io.contr.mem_to_reg, mem_dest, alu_dest))
  io.out.alu_dest   := ALU.io.out.dest
}
