import chisel3._
import chisel3.util._

class CPU extends Module {
  val io = IO(new Bundle {
  })
  val pc = RegInit(((Long)0x0000000080000000).U(64.W))

  val IFU = Module(new IFU())
  IFU.io.addr := pc
  pc := pc + 4.U

  val IDU = Module(new IDU())
  IDU.io.inst := IFU.io.inst
  IDU.io.rd_data := IFU.io.inst
  
  val EXU = Module(new EXU())
  EXU.io.rs1 := IDU.io.rs1_data
  EXU.io.rs2 := IDU.io.rs2_data
}
