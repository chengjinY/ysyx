import chisel3._
import chisel3.util.Decoupled

class IFUInput extends Bundle {
  val addr = UInt(32.W)
}

class IFUOutput extends Bundle {
  val inst = UInt(32.W)
}

class IFU() extends MultiIOModule {
  val in = IO(Flipped(Decoupled(new IFUInput())))
  val out = IO(Decoupled(new IFUOutput()))

  // just pass the address from in to out
  // and in c program, we'll simulate a memory.
  out.inst <> in.addr
  // addr(pc): auto inc 1.
  addr := addr + 4.U
}
