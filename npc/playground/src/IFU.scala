import chisel3._

class IFUInput extends Bundle {
  val addr = UInt(64.W)
}

class IFUOutput extends Bundle {
  val inst = UInt(32.W)
}

class IFU_DPIC extends HasBlackboxInline {
  val io = IO(new Bundle {
    val in = Input(new IFUInput())
    val out = Output(new IFUOutput())
  })
  setInline("IFU_DPIC.v",
    s"""
    |import "DPI-C" context function uint32_t get_inst(uint64_t addr);
    |module IFU_DPIC(addr, inst);
    |  input [63:0] addr;
    |  output [31:0] inst;
    |
    |  assign inst = get_inst(addr);
    |endmodule
    """.stripMargin);
}

class IFU extends Module {
  val io = IO(new Bundle {
    val in = Input(new IFUInput())
    val out = Output(new IFUOutput())
  })

  // using DPI-C to get instructions
  val ifu_dpic = new IFU_DPIC();
  io <> ifu_dpic.io
}
