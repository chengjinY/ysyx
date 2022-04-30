package lumos

import chisel3._
import chisel3.util._

import lumos.IFU._
import lumos.IDU._
import lumos.EXU._

class CPU extends Module {
  val io = IO(new Bundle {
  })

  val pc   = RegInit((0x0000000080000000L).U(64.W))
  val snpc = pc + 4.U

  val IFU = Module(new IFU())
  IFU.io.in.addr := pc

  val IDU = Module(new IDU())
  IDU.io.in.inst := IFU.io.out.inst
  
  val EXU = Module(new EXU())
  EXU.io.contr.alu_op     := IDU.io.contr.alu_op
  EXU.io.contr.alu_srca   := IDU.io.contr.alu_srca
  EXU.io.contr.alu_srcb   := IDU.io.contr.alu_srcb
  EXU.io.contr.reg_write  := IDU.io.contr.reg_write
  EXU.io.contr.mem_read   := IDU.io.contr.mem_read
  EXU.io.contr.mem_write  := IDU.io.contr.mem_write
  EXU.io.contr.mem_to_reg := IDU.io.contr.mem_to_reg
  EXU.io.contr.jalr       := IDU.io.contr.jalr
  EXU.io.contr.branch     := IDU.io.contr.branch
  EXU.io.contr.wdth       := IDU.io.contr.wdth
  EXU.io.in.pc            := pc
  EXU.io.in.snpc          := snpc
  EXU.io.in.rs1           := IDU.io.out.rs1
  EXU.io.in.rs2           := IDU.io.out.rs2
  EXU.io.in.rd            := IDU.io.out.rd
  EXU.io.in.imm           := IDU.io.out.imm

  pc := Mux(IDU.io.contr.pc_src,
    Mux((IDU.io.contr.branch === 4.U) | EXU.io.out.pc_bsrc, pc + IDU.io.out.imm, snpc),
    Mux(IDU.io.contr.jalr, EXU.io.out.alu_dest & "hFFFFFFFFFFFFFFFE".U, snpc)
  )
}
