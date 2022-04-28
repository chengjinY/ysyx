// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


void VCPU___024root__traceInitSub0(VCPU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VCPU___024root__traceInitTop(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VCPU___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VCPU___024root__traceInitSub0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+172,"clock", false,-1);
        tracep->declBit(c+173,"reset", false,-1);
        tracep->declBit(c+172,"CPU clock", false,-1);
        tracep->declBit(c+173,"CPU reset", false,-1);
        tracep->declQuad(c+1,"CPU IFU_io_in_addr", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IFU_io_out_inst", false,-1, 31,0);
        tracep->declBus(c+3,"CPU IDU_io_in_inst", false,-1, 31,0);
        tracep->declBus(c+4,"CPU IDU_io_out_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU IDU_io_out_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU IDU_io_out_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU IDU_io_out_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU IDU_io_contr_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU IDU_io_contr_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU IDU_io_contr_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU IDU_io_contr_reg_write", false,-1);
        tracep->declBit(c+13,"CPU IDU_io_contr_pc_src", false,-1);
        tracep->declBit(c+14,"CPU IDU_io_contr_jalr", false,-1);
        tracep->declBit(c+172,"CPU EXU_clock", false,-1);
        tracep->declBit(c+173,"CPU EXU_reset", false,-1);
        tracep->declQuad(c+1,"CPU EXU_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+15,"CPU EXU_io_in_snpc", false,-1, 63,0);
        tracep->declBus(c+4,"CPU EXU_io_in_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU_io_in_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU_io_in_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU EXU_io_in_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU EXU_io_contr_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU EXU_io_contr_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU EXU_io_contr_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU EXU_io_contr_reg_write", false,-1);
        tracep->declBit(c+14,"CPU EXU_io_contr_jalr", false,-1);
        tracep->declQuad(c+17,"CPU EXU_io_out_alu_dest", false,-1, 63,0);
        tracep->declQuad(c+1,"CPU pc", false,-1, 63,0);
        tracep->declQuad(c+15,"CPU snpc", false,-1, 63,0);
        tracep->declQuad(c+1,"CPU IFU io_in_addr", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IFU io_out_inst", false,-1, 31,0);
        tracep->declBit(c+174,"CPU IFU fetchmem_ren", false,-1);
        tracep->declBit(c+175,"CPU IFU fetchmem_wen", false,-1);
        tracep->declQuad(c+1,"CPU IFU fetchmem_raddr", false,-1, 63,0);
        tracep->declQuad(c+19,"CPU IFU fetchmem_rdata", false,-1, 63,0);
        tracep->declQuad(c+176,"CPU IFU fetchmem_waddr", false,-1, 63,0);
        tracep->declQuad(c+176,"CPU IFU fetchmem_wdata", false,-1, 63,0);
        tracep->declBus(c+178,"CPU IFU fetchmem_mask", false,-1, 7,0);
        tracep->declBit(c+174,"CPU IFU fetchmem ren", false,-1);
        tracep->declBit(c+175,"CPU IFU fetchmem wen", false,-1);
        tracep->declQuad(c+1,"CPU IFU fetchmem raddr", false,-1, 63,0);
        tracep->declQuad(c+19,"CPU IFU fetchmem rdata", false,-1, 63,0);
        tracep->declQuad(c+176,"CPU IFU fetchmem waddr", false,-1, 63,0);
        tracep->declQuad(c+176,"CPU IFU fetchmem wdata", false,-1, 63,0);
        tracep->declBus(c+178,"CPU IFU fetchmem mask", false,-1, 7,0);
        tracep->declBus(c+3,"CPU IDU io_in_inst", false,-1, 31,0);
        tracep->declBus(c+4,"CPU IDU io_out_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU IDU io_out_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU IDU io_out_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU IDU io_out_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU IDU io_contr_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU IDU io_contr_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU IDU io_contr_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU IDU io_contr_reg_write", false,-1);
        tracep->declBit(c+13,"CPU IDU io_contr_pc_src", false,-1);
        tracep->declBit(c+14,"CPU IDU io_contr_jalr", false,-1);
        tracep->declBus(c+3,"CPU IDU ebreak_inst", false,-1, 31,0);
        tracep->declBus(c+3,"CPU IDU contr_io_in_inst", false,-1, 31,0);
        tracep->declBus(c+9,"CPU IDU contr_io_out_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU IDU contr_io_out_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU IDU contr_io_out_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU IDU contr_io_out_reg_write", false,-1);
        tracep->declBit(c+13,"CPU IDU contr_io_out_pc_src", false,-1);
        tracep->declBit(c+14,"CPU IDU contr_io_out_jalr", false,-1);
        tracep->declBus(c+3,"CPU IDU immgen_io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"CPU IDU immgen_io_out_imm", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IDU ebreak inst", false,-1, 31,0);
        tracep->declBus(c+3,"CPU IDU contr io_in_inst", false,-1, 31,0);
        tracep->declBus(c+9,"CPU IDU contr io_out_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU IDU contr io_out_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU IDU contr io_out_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU IDU contr io_out_reg_write", false,-1);
        tracep->declBit(c+13,"CPU IDU contr io_out_pc_src", false,-1);
        tracep->declBit(c+14,"CPU IDU contr io_out_jalr", false,-1);
        tracep->declBus(c+3,"CPU IDU immgen io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"CPU IDU immgen io_out_imm", false,-1, 63,0);
        tracep->declQuad(c+21,"CPU IDU immgen imm_hi", false,-1, 51,0);
        tracep->declBus(c+23,"CPU IDU immgen imm_lo", false,-1, 11,0);
        tracep->declBus(c+24,"CPU IDU immgen imm_hi_hi", false,-1, 31,0);
        tracep->declBus(c+25,"CPU IDU immgen imm_hi_lo", false,-1, 19,0);
        tracep->declBit(c+26,"CPU IDU immgen imm_hi_hi_lo", false,-1);
        tracep->declBus(c+27,"CPU IDU immgen imm_hi_lo_1", false,-1, 5,0);
        tracep->declBus(c+28,"CPU IDU immgen imm_lo_hi", false,-1, 3,0);
        tracep->declQuad(c+29,"CPU IDU immgen imm_hi_hi_hi_6", false,-1, 43,0);
        tracep->declBus(c+31,"CPU IDU immgen imm_hi_hi_lo_6", false,-1, 7,0);
        tracep->declBit(c+32,"CPU IDU immgen imm_hi_lo_7", false,-1);
        tracep->declBus(c+33,"CPU IDU immgen imm_lo_hi_6", false,-1, 9,0);
        tracep->declBus(c+34,"CPU IDU immgen imm_hi_lo_9", false,-1, 6,0);
        tracep->declBus(c+6,"CPU IDU immgen imm_lo_16", false,-1, 4,0);
        tracep->declBit(c+172,"CPU EXU clock", false,-1);
        tracep->declBit(c+173,"CPU EXU reset", false,-1);
        tracep->declQuad(c+1,"CPU EXU io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+15,"CPU EXU io_in_snpc", false,-1, 63,0);
        tracep->declBus(c+4,"CPU EXU io_in_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU io_in_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU io_in_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU EXU io_in_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU EXU io_contr_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU EXU io_contr_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU EXU io_contr_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU EXU io_contr_reg_write", false,-1);
        tracep->declBit(c+14,"CPU EXU io_contr_jalr", false,-1);
        tracep->declQuad(c+17,"CPU EXU io_out_alu_dest", false,-1, 63,0);
        tracep->declBit(c+172,"CPU EXU regs_clock", false,-1);
        tracep->declBit(c+173,"CPU EXU regs_reset", false,-1);
        tracep->declBit(c+12,"CPU EXU regs_io_in_reg_write", false,-1);
        tracep->declBus(c+4,"CPU EXU regs_io_in_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU regs_io_in_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU regs_io_in_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+35,"CPU EXU regs_io_in_rd_data", false,-1, 63,0);
        tracep->declQuad(c+37,"CPU EXU regs_io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+39,"CPU EXU regs_io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+9,"CPU EXU ALU_io_in_alu_op", false,-1, 3,0);
        tracep->declQuad(c+41,"CPU EXU ALU_io_in_src1", false,-1, 63,0);
        tracep->declQuad(c+43,"CPU EXU ALU_io_in_src2", false,-1, 63,0);
        tracep->declQuad(c+17,"CPU EXU ALU_io_out_dest", false,-1, 63,0);
        tracep->declBit(c+175,"CPU EXU mem_ren", false,-1);
        tracep->declBit(c+175,"CPU EXU mem_wen", false,-1);
        tracep->declQuad(c+17,"CPU EXU mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+179,"CPU EXU mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+17,"CPU EXU mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+39,"CPU EXU mem_wdata", false,-1, 63,0);
        tracep->declBus(c+178,"CPU EXU mem_mask", false,-1, 7,0);
        tracep->declBit(c+172,"CPU EXU regs clock", false,-1);
        tracep->declBit(c+173,"CPU EXU regs reset", false,-1);
        tracep->declBit(c+12,"CPU EXU regs io_in_reg_write", false,-1);
        tracep->declBus(c+4,"CPU EXU regs io_in_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU regs io_in_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU regs io_in_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+35,"CPU EXU regs io_in_rd_data", false,-1, 63,0);
        tracep->declQuad(c+37,"CPU EXU regs io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+39,"CPU EXU regs io_out_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+176,"CPU EXU regs trace_regs_rf_0", false,-1, 63,0);
        tracep->declQuad(c+45,"CPU EXU regs trace_regs_rf_1", false,-1, 63,0);
        tracep->declQuad(c+47,"CPU EXU regs trace_regs_rf_2", false,-1, 63,0);
        tracep->declQuad(c+49,"CPU EXU regs trace_regs_rf_3", false,-1, 63,0);
        tracep->declQuad(c+51,"CPU EXU regs trace_regs_rf_4", false,-1, 63,0);
        tracep->declQuad(c+53,"CPU EXU regs trace_regs_rf_5", false,-1, 63,0);
        tracep->declQuad(c+55,"CPU EXU regs trace_regs_rf_6", false,-1, 63,0);
        tracep->declQuad(c+57,"CPU EXU regs trace_regs_rf_7", false,-1, 63,0);
        tracep->declQuad(c+59,"CPU EXU regs trace_regs_rf_8", false,-1, 63,0);
        tracep->declQuad(c+61,"CPU EXU regs trace_regs_rf_9", false,-1, 63,0);
        tracep->declQuad(c+63,"CPU EXU regs trace_regs_rf_10", false,-1, 63,0);
        tracep->declQuad(c+65,"CPU EXU regs trace_regs_rf_11", false,-1, 63,0);
        tracep->declQuad(c+67,"CPU EXU regs trace_regs_rf_12", false,-1, 63,0);
        tracep->declQuad(c+69,"CPU EXU regs trace_regs_rf_13", false,-1, 63,0);
        tracep->declQuad(c+71,"CPU EXU regs trace_regs_rf_14", false,-1, 63,0);
        tracep->declQuad(c+73,"CPU EXU regs trace_regs_rf_15", false,-1, 63,0);
        tracep->declQuad(c+75,"CPU EXU regs trace_regs_rf_16", false,-1, 63,0);
        tracep->declQuad(c+77,"CPU EXU regs trace_regs_rf_17", false,-1, 63,0);
        tracep->declQuad(c+79,"CPU EXU regs trace_regs_rf_18", false,-1, 63,0);
        tracep->declQuad(c+81,"CPU EXU regs trace_regs_rf_19", false,-1, 63,0);
        tracep->declQuad(c+83,"CPU EXU regs trace_regs_rf_20", false,-1, 63,0);
        tracep->declQuad(c+85,"CPU EXU regs trace_regs_rf_21", false,-1, 63,0);
        tracep->declQuad(c+87,"CPU EXU regs trace_regs_rf_22", false,-1, 63,0);
        tracep->declQuad(c+89,"CPU EXU regs trace_regs_rf_23", false,-1, 63,0);
        tracep->declQuad(c+91,"CPU EXU regs trace_regs_rf_24", false,-1, 63,0);
        tracep->declQuad(c+93,"CPU EXU regs trace_regs_rf_25", false,-1, 63,0);
        tracep->declQuad(c+95,"CPU EXU regs trace_regs_rf_26", false,-1, 63,0);
        tracep->declQuad(c+97,"CPU EXU regs trace_regs_rf_27", false,-1, 63,0);
        tracep->declQuad(c+99,"CPU EXU regs trace_regs_rf_28", false,-1, 63,0);
        tracep->declQuad(c+101,"CPU EXU regs trace_regs_rf_29", false,-1, 63,0);
        tracep->declQuad(c+103,"CPU EXU regs trace_regs_rf_30", false,-1, 63,0);
        tracep->declQuad(c+105,"CPU EXU regs trace_regs_rf_31", false,-1, 63,0);
        tracep->declQuad(c+45,"CPU EXU regs reg_1", false,-1, 63,0);
        tracep->declQuad(c+47,"CPU EXU regs reg_2", false,-1, 63,0);
        tracep->declQuad(c+49,"CPU EXU regs reg_3", false,-1, 63,0);
        tracep->declQuad(c+51,"CPU EXU regs reg_4", false,-1, 63,0);
        tracep->declQuad(c+53,"CPU EXU regs reg_5", false,-1, 63,0);
        tracep->declQuad(c+55,"CPU EXU regs reg_6", false,-1, 63,0);
        tracep->declQuad(c+57,"CPU EXU regs reg_7", false,-1, 63,0);
        tracep->declQuad(c+59,"CPU EXU regs reg_8", false,-1, 63,0);
        tracep->declQuad(c+61,"CPU EXU regs reg_9", false,-1, 63,0);
        tracep->declQuad(c+63,"CPU EXU regs reg_10", false,-1, 63,0);
        tracep->declQuad(c+65,"CPU EXU regs reg_11", false,-1, 63,0);
        tracep->declQuad(c+67,"CPU EXU regs reg_12", false,-1, 63,0);
        tracep->declQuad(c+69,"CPU EXU regs reg_13", false,-1, 63,0);
        tracep->declQuad(c+71,"CPU EXU regs reg_14", false,-1, 63,0);
        tracep->declQuad(c+73,"CPU EXU regs reg_15", false,-1, 63,0);
        tracep->declQuad(c+75,"CPU EXU regs reg_16", false,-1, 63,0);
        tracep->declQuad(c+77,"CPU EXU regs reg_17", false,-1, 63,0);
        tracep->declQuad(c+79,"CPU EXU regs reg_18", false,-1, 63,0);
        tracep->declQuad(c+81,"CPU EXU regs reg_19", false,-1, 63,0);
        tracep->declQuad(c+83,"CPU EXU regs reg_20", false,-1, 63,0);
        tracep->declQuad(c+85,"CPU EXU regs reg_21", false,-1, 63,0);
        tracep->declQuad(c+87,"CPU EXU regs reg_22", false,-1, 63,0);
        tracep->declQuad(c+89,"CPU EXU regs reg_23", false,-1, 63,0);
        tracep->declQuad(c+91,"CPU EXU regs reg_24", false,-1, 63,0);
        tracep->declQuad(c+93,"CPU EXU regs reg_25", false,-1, 63,0);
        tracep->declQuad(c+95,"CPU EXU regs reg_26", false,-1, 63,0);
        tracep->declQuad(c+97,"CPU EXU regs reg_27", false,-1, 63,0);
        tracep->declQuad(c+99,"CPU EXU regs reg_28", false,-1, 63,0);
        tracep->declQuad(c+101,"CPU EXU regs reg_29", false,-1, 63,0);
        tracep->declQuad(c+103,"CPU EXU regs reg_30", false,-1, 63,0);
        tracep->declQuad(c+105,"CPU EXU regs reg_31", false,-1, 63,0);
        tracep->declQuad(c+176,"CPU EXU regs trace_regs rf_0", false,-1, 63,0);
        tracep->declQuad(c+45,"CPU EXU regs trace_regs rf_1", false,-1, 63,0);
        tracep->declQuad(c+47,"CPU EXU regs trace_regs rf_2", false,-1, 63,0);
        tracep->declQuad(c+49,"CPU EXU regs trace_regs rf_3", false,-1, 63,0);
        tracep->declQuad(c+51,"CPU EXU regs trace_regs rf_4", false,-1, 63,0);
        tracep->declQuad(c+53,"CPU EXU regs trace_regs rf_5", false,-1, 63,0);
        tracep->declQuad(c+55,"CPU EXU regs trace_regs rf_6", false,-1, 63,0);
        tracep->declQuad(c+57,"CPU EXU regs trace_regs rf_7", false,-1, 63,0);
        tracep->declQuad(c+59,"CPU EXU regs trace_regs rf_8", false,-1, 63,0);
        tracep->declQuad(c+61,"CPU EXU regs trace_regs rf_9", false,-1, 63,0);
        tracep->declQuad(c+63,"CPU EXU regs trace_regs rf_10", false,-1, 63,0);
        tracep->declQuad(c+65,"CPU EXU regs trace_regs rf_11", false,-1, 63,0);
        tracep->declQuad(c+67,"CPU EXU regs trace_regs rf_12", false,-1, 63,0);
        tracep->declQuad(c+69,"CPU EXU regs trace_regs rf_13", false,-1, 63,0);
        tracep->declQuad(c+71,"CPU EXU regs trace_regs rf_14", false,-1, 63,0);
        tracep->declQuad(c+73,"CPU EXU regs trace_regs rf_15", false,-1, 63,0);
        tracep->declQuad(c+75,"CPU EXU regs trace_regs rf_16", false,-1, 63,0);
        tracep->declQuad(c+77,"CPU EXU regs trace_regs rf_17", false,-1, 63,0);
        tracep->declQuad(c+79,"CPU EXU regs trace_regs rf_18", false,-1, 63,0);
        tracep->declQuad(c+81,"CPU EXU regs trace_regs rf_19", false,-1, 63,0);
        tracep->declQuad(c+83,"CPU EXU regs trace_regs rf_20", false,-1, 63,0);
        tracep->declQuad(c+85,"CPU EXU regs trace_regs rf_21", false,-1, 63,0);
        tracep->declQuad(c+87,"CPU EXU regs trace_regs rf_22", false,-1, 63,0);
        tracep->declQuad(c+89,"CPU EXU regs trace_regs rf_23", false,-1, 63,0);
        tracep->declQuad(c+91,"CPU EXU regs trace_regs rf_24", false,-1, 63,0);
        tracep->declQuad(c+93,"CPU EXU regs trace_regs rf_25", false,-1, 63,0);
        tracep->declQuad(c+95,"CPU EXU regs trace_regs rf_26", false,-1, 63,0);
        tracep->declQuad(c+97,"CPU EXU regs trace_regs rf_27", false,-1, 63,0);
        tracep->declQuad(c+99,"CPU EXU regs trace_regs rf_28", false,-1, 63,0);
        tracep->declQuad(c+101,"CPU EXU regs trace_regs rf_29", false,-1, 63,0);
        tracep->declQuad(c+103,"CPU EXU regs trace_regs rf_30", false,-1, 63,0);
        tracep->declQuad(c+105,"CPU EXU regs trace_regs rf_31", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+107+i*2,"CPU EXU regs trace_regs regs", true,(i+0), 63,0);}}
        tracep->declBus(c+9,"CPU EXU ALU io_in_alu_op", false,-1, 3,0);
        tracep->declQuad(c+41,"CPU EXU ALU io_in_src1", false,-1, 63,0);
        tracep->declQuad(c+43,"CPU EXU ALU io_in_src2", false,-1, 63,0);
        tracep->declQuad(c+17,"CPU EXU ALU io_out_dest", false,-1, 63,0);
        tracep->declBus(c+171,"CPU EXU ALU io_out_dest_hi", false,-1, 31,0);
        tracep->declBit(c+175,"CPU EXU mem ren", false,-1);
        tracep->declBit(c+175,"CPU EXU mem wen", false,-1);
        tracep->declQuad(c+17,"CPU EXU mem raddr", false,-1, 63,0);
        tracep->declQuad(c+179,"CPU EXU mem rdata", false,-1, 63,0);
        tracep->declQuad(c+17,"CPU EXU mem waddr", false,-1, 63,0);
        tracep->declQuad(c+39,"CPU EXU mem wdata", false,-1, 63,0);
        tracep->declBus(c+178,"CPU EXU mem mask", false,-1, 7,0);
    }
}

void VCPU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VCPU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VCPU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VCPU___024root__traceRegister(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VCPU___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VCPU___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VCPU___024root__traceCleanup, vlSelf);
    }
}

void VCPU___024root__traceFullSub0(VCPU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VCPU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VCPU___024root* const __restrict vlSelf = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VCPU___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VCPU___024root__traceFullSub0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->CPU__DOT__pc),64);
        tracep->fullIData(oldp+3,((IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)),32);
        tracep->fullCData(oldp+4,((0x1fU & (IData)(
                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                    >> 0xfU)))),5);
        tracep->fullCData(oldp+5,((0x1fU & (IData)(
                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                    >> 0x14U)))),5);
        tracep->fullCData(oldp+6,((0x1fU & (IData)(
                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                    >> 7U)))),5);
        tracep->fullQData(oldp+7,(vlSelf->CPU__DOT__IDU__DOT__immgen_io_out_imm),64);
        tracep->fullCData(oldp+9,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op),4);
        tracep->fullBit(oldp+10,(((0x33U != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                  & ((0x13U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                     & ((0x1bU != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                        & ((0x3bU != 
                                            (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                           & ((0x7033U 
                                               != (0xfe00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                              & ((0x7013U 
                                                  != 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                 & ((0x17U 
                                                     == 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                    | (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))));
        tracep->fullBit(oldp+11,(((0x33U != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                  & ((0x13U == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                     | ((0x1bU == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                        | ((0x3bU != 
                                            (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                           & ((0x7033U 
                                               != (0xfe00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                              & ((0x7013U 
                                                  == 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                 | ((0x17U 
                                                     != 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                    & ((0x6fU 
                                                        != 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                       & ((0x67U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                          | ((0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                             | (0x1013U 
                                                                == 
                                                                (0xfc00707fU 
                                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))))))))))))));
        tracep->fullBit(oldp+12,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write));
        tracep->fullBit(oldp+13,(((0x33U != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                  & ((0x13U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                     & ((0x1bU != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                        & ((0x3bU != 
                                            (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                           & ((0x7033U 
                                               != (0xfe00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                              & ((0x7013U 
                                                  != 
                                                  (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                 & ((0x17U 
                                                     != 
                                                     (0x7fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                    & (0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))));
        tracep->fullBit(oldp+14,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_jalr));
        tracep->fullQData(oldp+15,((4ULL + vlSelf->CPU__DOT__pc)),64);
        tracep->fullQData(oldp+17,((((QData)((IData)(
                                                     vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_21[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_21[0U])))),64);
        tracep->fullQData(oldp+19,(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata),64);
        tracep->fullQData(oldp+21,(((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0x1fU)))
                                     ? 0xfffffffffffffULL
                                     : 0ULL)),52);
        tracep->fullSData(oldp+23,((0xfffU & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x14U)))),12);
        tracep->fullIData(oldp+24,(((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0x1fU)))
                                     ? 0xffffffffU : 0U)),32);
        tracep->fullIData(oldp+25,((0xfffffU & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0xcU)))),20);
        tracep->fullBit(oldp+26,((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                >> 7U)))));
        tracep->fullCData(oldp+27,((0x3fU & (IData)(
                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                     >> 0x19U)))),6);
        tracep->fullCData(oldp+28,((0xfU & (IData)(
                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                    >> 8U)))),4);
        tracep->fullQData(oldp+29,(((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0x1fU)))
                                     ? 0xfffffffffffULL
                                     : 0ULL)),44);
        tracep->fullCData(oldp+31,((0xffU & (IData)(
                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                     >> 0xcU)))),8);
        tracep->fullBit(oldp+32,((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                >> 0x14U)))));
        tracep->fullSData(oldp+33,((0x3ffU & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x15U)))),10);
        tracep->fullCData(oldp+34,((0x7fU & (IData)(
                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                     >> 0x19U)))),7);
        tracep->fullQData(oldp+35,(vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data),64);
        tracep->fullQData(oldp+37,(((0x1fU == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                          >> 0xfU))))
                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31
                                     : ((0x1eU == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0xfU))))
                                         ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30
                                         : ((0x1dU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                            >> 0xfU))))
                                             ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29
                                             : ((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                             >> 0xfU))))
                                                 ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0xfU))))
                                                  ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27
                                                  : vlSelf->CPU__DOT__EXU__DOT__regs__DOT___GEN_26)))))),64);
        tracep->fullQData(oldp+39,(((0x1fU == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                          >> 0x14U))))
                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31
                                     : ((0x1eU == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0x14U))))
                                         ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30
                                         : ((0x1dU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                            >> 0x14U))))
                                             ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29
                                             : ((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                             >> 0x14U))))
                                                 ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0x14U))))
                                                  ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27
                                                  : vlSelf->CPU__DOT__EXU__DOT__regs__DOT___GEN_58)))))),64);
        tracep->fullQData(oldp+41,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1),64);
        tracep->fullQData(oldp+43,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2),64);
        tracep->fullQData(oldp+45,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1),64);
        tracep->fullQData(oldp+47,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2),64);
        tracep->fullQData(oldp+49,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3),64);
        tracep->fullQData(oldp+51,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4),64);
        tracep->fullQData(oldp+53,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5),64);
        tracep->fullQData(oldp+55,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6),64);
        tracep->fullQData(oldp+57,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7),64);
        tracep->fullQData(oldp+59,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8),64);
        tracep->fullQData(oldp+61,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9),64);
        tracep->fullQData(oldp+63,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10),64);
        tracep->fullQData(oldp+65,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11),64);
        tracep->fullQData(oldp+67,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12),64);
        tracep->fullQData(oldp+69,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13),64);
        tracep->fullQData(oldp+71,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14),64);
        tracep->fullQData(oldp+73,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15),64);
        tracep->fullQData(oldp+75,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16),64);
        tracep->fullQData(oldp+77,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17),64);
        tracep->fullQData(oldp+79,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18),64);
        tracep->fullQData(oldp+81,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19),64);
        tracep->fullQData(oldp+83,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20),64);
        tracep->fullQData(oldp+85,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21),64);
        tracep->fullQData(oldp+87,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22),64);
        tracep->fullQData(oldp+89,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23),64);
        tracep->fullQData(oldp+91,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24),64);
        tracep->fullQData(oldp+93,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25),64);
        tracep->fullQData(oldp+95,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26),64);
        tracep->fullQData(oldp+97,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27),64);
        tracep->fullQData(oldp+99,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28),64);
        tracep->fullQData(oldp+101,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29),64);
        tracep->fullQData(oldp+103,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30),64);
        tracep->fullQData(oldp+105,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31),64);
        tracep->fullQData(oldp+107,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0]),64);
        tracep->fullQData(oldp+109,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[1]),64);
        tracep->fullQData(oldp+111,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[2]),64);
        tracep->fullQData(oldp+113,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[3]),64);
        tracep->fullQData(oldp+115,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[4]),64);
        tracep->fullQData(oldp+117,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[5]),64);
        tracep->fullQData(oldp+119,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[6]),64);
        tracep->fullQData(oldp+121,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[7]),64);
        tracep->fullQData(oldp+123,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[8]),64);
        tracep->fullQData(oldp+125,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[9]),64);
        tracep->fullQData(oldp+127,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[10]),64);
        tracep->fullQData(oldp+129,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[11]),64);
        tracep->fullQData(oldp+131,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[12]),64);
        tracep->fullQData(oldp+133,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[13]),64);
        tracep->fullQData(oldp+135,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[14]),64);
        tracep->fullQData(oldp+137,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[15]),64);
        tracep->fullQData(oldp+139,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[16]),64);
        tracep->fullQData(oldp+141,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[17]),64);
        tracep->fullQData(oldp+143,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[18]),64);
        tracep->fullQData(oldp+145,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[19]),64);
        tracep->fullQData(oldp+147,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[20]),64);
        tracep->fullQData(oldp+149,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[21]),64);
        tracep->fullQData(oldp+151,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[22]),64);
        tracep->fullQData(oldp+153,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[23]),64);
        tracep->fullQData(oldp+155,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[24]),64);
        tracep->fullQData(oldp+157,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[25]),64);
        tracep->fullQData(oldp+159,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[26]),64);
        tracep->fullQData(oldp+161,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[27]),64);
        tracep->fullQData(oldp+163,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[28]),64);
        tracep->fullQData(oldp+165,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[29]),64);
        tracep->fullQData(oldp+167,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[30]),64);
        tracep->fullQData(oldp+169,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[31]),64);
        tracep->fullIData(oldp+171,(((1U & (IData)(
                                                   (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_3 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullBit(oldp+172,(vlSelf->clock));
        tracep->fullBit(oldp+173,(vlSelf->reset));
        tracep->fullBit(oldp+174,(1U));
        tracep->fullBit(oldp+175,(0U));
        tracep->fullQData(oldp+176,(0ULL),64);
        tracep->fullCData(oldp+178,(0U),8);
        tracep->fullQData(oldp+179,(vlSelf->CPU__DOT__EXU__DOT__mem_rdata),64);
    }
}
