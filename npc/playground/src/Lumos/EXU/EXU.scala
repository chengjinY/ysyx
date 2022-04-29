package lumos.EXU

import chisel3._

import lumos.util.MEM

class EXUInput extends Bundle {
  val pc  = UInt(64.W)
  val snpc  = UInt(64.W)
  val rs1 = UInt(5.W)
  val rs2 = UInt(5.W)
  val rd  = UInt(5.W)
  val imm = UInt(64.W)
}

class EXUControl extends Bundle {
  val alu_op     = UInt(4.W)
  val alu_srca   = Bool()
  val alu_srcb   = Bool()
  val reg_write  = Bool()
  val mem_read   = Bool()
  val mem_write  = Bool()
  val mem_to_reg = Bool()
  val jalr       = Bool()
}

class EXUOutput extends Bundle {
  val alu_dest   = UInt(64.W)
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

  val mem = Module(new MEM())
  mem.io.ren   := io.contr.mem_read
  mem.io.wen   := io.contr.mem_write
  mem.io.raddr := ALU.io.out.dest
  mem.io.waddr := ALU.io.out.dest
  mem.io.wdata := regs.io.out.rs2_data

  regs.io.in.rd_data := Mux(io.contr.jalr, io.in.snpc, Mux(io.contr.mem_to_reg, mem.io.rdata, ALU.io.out.dest))
  io.out.alu_dest   := ALU.io.out.dest
}
