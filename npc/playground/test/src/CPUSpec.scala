import chisel3._
import chisel3.tester._

import utest._

object CPUSpec extends ChiselUtestTester {
  val tests = Tests {
    test("CPU") {
      testCircuit(new CPU()) {
        dut =>
          dut.input.initSource()
          dut.input.setSourceClock(dut.clock)
          dut.input.initSink()
          dut.input.setSinkClock(dut.clock)
      }
    }
  }
}
