import chisel3._

class cpu extends Module {
  val pc = Reg(UInt(32.W))

  val IFU = Module(new IFU(32))
}
