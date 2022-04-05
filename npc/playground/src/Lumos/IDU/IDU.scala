package lumos.IDU

import chisel3._

class IDUInput extends Bundle {
  val inst = UInt(32.W)
  val rd_data = UInt(64.W)
}

class IDUControl extends Bundle {
  val alu_op = UInt(4.W)  // need to be modified as same as Contr.scala
}

class IDUOutput extends Bundle {
  val rs1_data = Output(UInt(64.W))
  val rs2_data = Output(UInt(64.W))
}

class IDU extends Module {
  val io = IO(new Bundle {
    val in = Input(new IDUInput())
    val out = Output(new IDUOutput())
    val contr = Output(new IDUControl())
  })

  val contr = Module(new Contr())
  contr.io.in.opcode := io.in.inst(6, 0)

  val reg = Module(new RegFile())
  reg.io.in.reg_write := contr.io.out.reg_write
  reg.io.in.rs1_addr := io.in.inst(19, 15)
  reg.io.in.rs2_addr := io.in.inst(24, 20)
  reg.io.in.rd_addr := io.in.inst(11, 7)
  reg.io.in.rd_data := io.in.rd_data
  io.out.rs1_data := reg.io.out.rs1_data

  val immgen = Module(new ImmGen())
  immgen.io.in.inst := io.in.inst
  io.out.rs2_data := Mux(contr.io.out.alu_src, reg.io.out.rs2_data, immgen.io.out.imm)
}
