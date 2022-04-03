import chisel3._
import chisel3.util._

class CPU extends Module {
  val io = IO(new Bundle {
    val inst = Input(UInt(32.W))
  })
  val pc = RegInit((0x0000000080000000L).U(64.W))

  val IFU = Module(new IFU())
  IFU.io.addr := pc
  pc := pc + 4.U

  val IDU = Module(new IDU())
  IDU.io.inst := io.inst
  // IDU.io.inst := IFU.io.inst
  IDU.io.rd_data := IFU.io.inst
  
  val EXU = Module(new EXU())
  EXU.io.rs1 := IDU.io.rs1_data
  EXU.io.rs2 := IDU.io.rs2_data
}
