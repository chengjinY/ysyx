import chisel3._
import chisel3.util._

class RegFile extends Module {
  val io = IO(new Bundle {
    val wen = Input(UInt(1.W))
    val rs1_addr = Input(UInt(5.W))
    val rs2_addr = Input(UInt(5.W))
    val rd_addr = Input(UInt(5.W))
    val rd_data = Input(UInt(64.W))
    val rs1_data = Output(UInt(64.W))
    val rs2_data = Output(UInt(64.W))
  })

  val reg  = RegInit(VecInit(Seq.fill(32)(0.U(64.W))))

  io.rs1_data := reg(io.rs1_addr)
  io.rs2_data := reg(io.rs2_addr)
  if (io.wen == 1.U)
    reg(io.rd_addr) := io.rd_data

  reg(0) := 0.U
}
