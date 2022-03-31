import chisel3._

class CPU(val pc: Int) extends MultiIOModule {
  val pc = RegInit(pc.U(32.W))
  val snpc = RegInit(pc.U(32.W))
  val dnpc = RegInit(pc.U(32.W))

  val IFU = Module(new IFU())
  IFU.in.addr <> snpc

  val IDU = Module(new IDU())
  IDU.in.inst <> IFU.out.inst

  val EXU = Module(new EXU())


}
