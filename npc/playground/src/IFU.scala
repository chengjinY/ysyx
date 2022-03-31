import chisel3._
import chisel3.util.Decoupled

class IFUInput(val w: Int) extends Bundle {
  val addr = UInt(w.W)
}

class IFUOutput(val w: Int) extends Bundle {
  val data = UInt(w.W)
}

class IFU(val w: Int) extends Module {
  val in = IO(Flipped(Decoupled(new IFUInput(w))))
  val out = IO(Decoupled(new IFUOutput(w)))

  // just pass the address from in to out
  // and in c program, we'll simulate a memory.
  out := in
}
