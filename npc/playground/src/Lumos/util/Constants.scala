package lumos.util

import chisel3._
import chisel3.util._

object InstConstants {
  val ADDI  = BitPat("b??????? ????? ????? 000 ????? 00100 11")
  val AUIPC = BitPat("b??????? ????? ????? ??? ????? 00101 11")
  val JAL   = BitPat("b??????? ????? ????? ??? ????? 11011 11")
  val JALR  = BitPat("b??????? ????? ????? 000 ????? 11001 11")
  val LUI   = BitPat("b??????? ????? ????? ??? ????? 01101 11")
  val SD    = BitPat("b??????? ????? ????? 011 ????? 01000 11")
  val SLLI  = BitPat("b000000? ????? ????? 001 ????? 00100 11")
}

object ALUConstants {
  val ALUNOP = 0.U
  val ALUADD = 1.U
  val ALUSUB = 2.U
}
