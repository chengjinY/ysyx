import chisel3._
import chisel3.tester._

import utest._

object IFUSpec extends ChiselUtestTester {
  val tests = Tests {
    test("IFU") {
      testCircuit(new IFU()) {
        dut =>
          dut.in.initSource()
          dut.in.setSourceClock(dut.clock)
          dut.out.initSink()
          dut.out.setSinkClock(dut.clock)
      }
    }
  }
}
