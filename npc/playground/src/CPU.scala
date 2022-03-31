import chisel3._

class CPU extends MultiIOModule {
  val pc = Reg(UInt(32.W))
  val IFU = Module(new IFU(32))
}
