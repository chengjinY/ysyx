import chisel3._

class IDU extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W))
    // Contr
    // RegFile
    val rd_data = Input(UInt(64.W))
    val rs1_data = Output(UInt(64.W))
    val rs2_data = Output(UInt(64.W))
  })

  val contr = Module(new Contr())
  contr.io.opcode := io.inst(6, 0)

  val reg = Module(new RegFile())
  reg.io.wen := contr.io.reg_write
  reg.io.rs1_addr := io.inst(19, 15)
  reg.io.rs2_addr := io.inst(24, 20)
  reg.io.rd_addr := io.inst(11, 7)
  reg.io.rd_data := io.rd_data
  io.rs1_data := reg.io.rs1_data

  val immgen = Module(new ImmGen())
  immgen.io.inst := io.inst
  io.rs2_data := Mux(contr.io.alu_src, reg.io.rs2_data, immgen.io.imm)
}
