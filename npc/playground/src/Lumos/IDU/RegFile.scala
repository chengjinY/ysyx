import chisel3._
import chisel3.util._

class RegFileInput extends Bundle {
  val reg_write = Bool()
  val rs1_addr = UInt(5.W)
  val rs2_addr = UInt(5.W)
  val rd_addr = UInt(5.W)
  val rd_data = UInt(64.W)
}

class RegFileOutput extends Bundle {
  val rs1_data = UInt(64.W)
  val rs2_data = UInt(64.W)
}

class RegFile extends Module {
  val io = IO(new Bundle {
    val in = Input(new RegFileInput())
    val out = Output(new RegFileOutput())
  })

  val reg  = RegInit(VecInit(Seq.fill(32)(0.U(64.W))))

  io.out.rs1_data := reg(io.in.rs1_addr)
  io.out.rs2_data := reg(io.in.rs2_addr)
  when (io.in.reg_write) {
    reg(io.in.rd_addr) := io.in.rd_data
  }

  reg(0) := 0.U
}
