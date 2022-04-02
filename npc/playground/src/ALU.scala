import chisel3._
import chisel3.util._

class ALU extends Module {
  val io = IO(new Bundle {
    val srcen = Input(UInt(4.W))
    val src1 = Input(UInt(64.W))
    val src2 = Input(UInt(64.W))
    val dest = Output(UInt(64.W))
  })

  io.dest := MuxLookup(io.srcen, 0.U, Array(
    0.U -> (io.src1 + io.src2),
    1.U -> (io.src1 - io.src2)
  ))
}
