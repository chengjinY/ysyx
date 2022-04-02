import chisel3._

class IFU extends Module {
  val io = IO(new Bundle {
    val addr = Input(UInt(64.W))
    val inst = Output(UInt(32.W))
  })
  // just pass the address from in to out
  // and in c program, we'll simulate a memory.
  io.inst := io.addr
}
