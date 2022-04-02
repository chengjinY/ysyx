import chisel3._
import chisel3.tester._

import utest._

object CPUSpec extends ChiselUtestTester {
  val tests = Tests {
    test("CPU") {
      testCircuit(new CPU(0x80000000)) {
        c => {
        }
      }
    }
  }
}
