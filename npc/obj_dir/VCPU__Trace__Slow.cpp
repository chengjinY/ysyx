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
        tracep->declBit(c+149,"clock", false,-1);
        tracep->declBit(c+150,"reset", false,-1);
        tracep->declBit(c+149,"CPU clock", false,-1);
        tracep->declBit(c+150,"CPU reset", false,-1);
        tracep->declQuad(c+1,"CPU IFU_io_in_addr", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IFU_io_out_inst", false,-1, 31,0);
        tracep->declBus(c+3,"CPU IDU_io_in_inst", false,-1, 31,0);
        tracep->declBus(c+4,"CPU IDU_io_out_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU IDU_io_out_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU IDU_io_out_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU IDU_io_out_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU IDU_io_contr_alu_op", false,-1, 4,0);
        tracep->declBit(c+10,"CPU IDU_io_contr_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU IDU_io_contr_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU IDU_io_contr_reg_write", false,-1);
        tracep->declBit(c+13,"CPU IDU_io_contr_mem_read", false,-1);
        tracep->declBit(c+14,"CPU IDU_io_contr_mem_write", false,-1);
        tracep->declBit(c+13,"CPU IDU_io_contr_mem_to_reg", false,-1);
        tracep->declBit(c+15,"CPU IDU_io_contr_pc_src", false,-1);
        tracep->declBit(c+16,"CPU IDU_io_contr_jalr", false,-1);
        tracep->declBus(c+17,"CPU IDU_io_contr_branch", false,-1, 2,0);
        tracep->declBus(c+18,"CPU IDU_io_contr_wdth", false,-1, 2,0);
        tracep->declBit(c+149,"CPU EXU_clock", false,-1);
        tracep->declBit(c+150,"CPU EXU_reset", false,-1);
        tracep->declQuad(c+1,"CPU EXU_io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+19,"CPU EXU_io_in_snpc", false,-1, 63,0);
        tracep->declBus(c+4,"CPU EXU_io_in_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU_io_in_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU_io_in_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU EXU_io_in_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU EXU_io_contr_alu_op", false,-1, 4,0);
        tracep->declBit(c+10,"CPU EXU_io_contr_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU EXU_io_contr_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU EXU_io_contr_reg_write", false,-1);
        tracep->declBit(c+13,"CPU EXU_io_contr_mem_read", false,-1);
        tracep->declBit(c+14,"CPU EXU_io_contr_mem_write", false,-1);
        tracep->declBit(c+13,"CPU EXU_io_contr_mem_to_reg", false,-1);
        tracep->declBit(c+16,"CPU EXU_io_contr_jalr", false,-1);
        tracep->declBus(c+17,"CPU EXU_io_contr_branch", false,-1, 2,0);
        tracep->declBus(c+18,"CPU EXU_io_contr_wdth", false,-1, 2,0);
        tracep->declQuad(c+21,"CPU EXU_io_out_alu_dest", false,-1, 63,0);
        tracep->declBit(c+23,"CPU EXU_io_out_pc_bsrc", false,-1);
        tracep->declQuad(c+1,"CPU pc", false,-1, 63,0);
        tracep->declQuad(c+19,"CPU snpc", false,-1, 63,0);
        tracep->declQuad(c+1,"CPU IFU io_in_addr", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IFU io_out_inst", false,-1, 31,0);
        tracep->declBit(c+151,"CPU IFU fetchmem_ren", false,-1);
        tracep->declBit(c+152,"CPU IFU fetchmem_wen", false,-1);
        tracep->declQuad(c+1,"CPU IFU fetchmem_raddr", false,-1, 63,0);
        tracep->declQuad(c+24,"CPU IFU fetchmem_rdata", false,-1, 63,0);
        tracep->declQuad(c+153,"CPU IFU fetchmem_waddr", false,-1, 63,0);
        tracep->declQuad(c+153,"CPU IFU fetchmem_wdata", false,-1, 63,0);
        tracep->declBus(c+155,"CPU IFU fetchmem_mask", false,-1, 7,0);
        tracep->declBit(c+151,"CPU IFU fetchmem ren", false,-1);
        tracep->declBit(c+152,"CPU IFU fetchmem wen", false,-1);
        tracep->declQuad(c+1,"CPU IFU fetchmem raddr", false,-1, 63,0);
        tracep->declQuad(c+24,"CPU IFU fetchmem rdata", false,-1, 63,0);
        tracep->declQuad(c+153,"CPU IFU fetchmem waddr", false,-1, 63,0);
        tracep->declQuad(c+153,"CPU IFU fetchmem wdata", false,-1, 63,0);
        tracep->declBus(c+155,"CPU IFU fetchmem mask", false,-1, 7,0);
        tracep->declBus(c+3,"CPU IDU io_in_inst", false,-1, 31,0);
        tracep->declBus(c+4,"CPU IDU io_out_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU IDU io_out_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU IDU io_out_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU IDU io_out_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU IDU io_contr_alu_op", false,-1, 4,0);
        tracep->declBit(c+10,"CPU IDU io_contr_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU IDU io_contr_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU IDU io_contr_reg_write", false,-1);
        tracep->declBit(c+13,"CPU IDU io_contr_mem_read", false,-1);
        tracep->declBit(c+14,"CPU IDU io_contr_mem_write", false,-1);
        tracep->declBit(c+13,"CPU IDU io_contr_mem_to_reg", false,-1);
        tracep->declBit(c+15,"CPU IDU io_contr_pc_src", false,-1);
        tracep->declBit(c+16,"CPU IDU io_contr_jalr", false,-1);
        tracep->declBus(c+17,"CPU IDU io_contr_branch", false,-1, 2,0);
        tracep->declBus(c+18,"CPU IDU io_contr_wdth", false,-1, 2,0);
        tracep->declBus(c+3,"CPU IDU ebreak_inst", false,-1, 31,0);
        tracep->declBus(c+3,"CPU IDU contr_io_in_inst", false,-1, 31,0);
        tracep->declBus(c+9,"CPU IDU contr_io_out_alu_op", false,-1, 4,0);
        tracep->declBit(c+10,"CPU IDU contr_io_out_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU IDU contr_io_out_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU IDU contr_io_out_reg_write", false,-1);
        tracep->declBit(c+13,"CPU IDU contr_io_out_mem_read", false,-1);
        tracep->declBit(c+14,"CPU IDU contr_io_out_mem_write", false,-1);
        tracep->declBit(c+13,"CPU IDU contr_io_out_mem_to_reg", false,-1);
        tracep->declBit(c+15,"CPU IDU contr_io_out_pc_src", false,-1);
        tracep->declBit(c+16,"CPU IDU contr_io_out_jalr", false,-1);
        tracep->declBus(c+17,"CPU IDU contr_io_out_branch", false,-1, 2,0);
        tracep->declBus(c+18,"CPU IDU contr_io_out_wdth", false,-1, 2,0);
        tracep->declBus(c+3,"CPU IDU immgen_io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"CPU IDU immgen_io_out_imm", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IDU ebreak inst", false,-1, 31,0);
        tracep->declBus(c+3,"CPU IDU contr io_in_inst", false,-1, 31,0);
        tracep->declBus(c+9,"CPU IDU contr io_out_alu_op", false,-1, 4,0);
        tracep->declBit(c+10,"CPU IDU contr io_out_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU IDU contr io_out_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU IDU contr io_out_reg_write", false,-1);
        tracep->declBit(c+13,"CPU IDU contr io_out_mem_read", false,-1);
        tracep->declBit(c+14,"CPU IDU contr io_out_mem_write", false,-1);
        tracep->declBit(c+13,"CPU IDU contr io_out_mem_to_reg", false,-1);
        tracep->declBit(c+15,"CPU IDU contr io_out_pc_src", false,-1);
        tracep->declBit(c+16,"CPU IDU contr io_out_jalr", false,-1);
        tracep->declBus(c+17,"CPU IDU contr io_out_branch", false,-1, 2,0);
        tracep->declBus(c+18,"CPU IDU contr io_out_wdth", false,-1, 2,0);
        tracep->declBus(c+3,"CPU IDU immgen io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"CPU IDU immgen io_out_imm", false,-1, 63,0);
        tracep->declQuad(c+26,"CPU IDU immgen imm_hi", false,-1, 51,0);
        tracep->declBus(c+28,"CPU IDU immgen imm_lo", false,-1, 11,0);
        tracep->declBus(c+29,"CPU IDU immgen imm_hi_hi", false,-1, 31,0);
        tracep->declBus(c+30,"CPU IDU immgen imm_hi_lo", false,-1, 19,0);
        tracep->declBit(c+31,"CPU IDU immgen imm_hi_hi_lo", false,-1);
        tracep->declBus(c+32,"CPU IDU immgen imm_hi_lo_1", false,-1, 5,0);
        tracep->declBus(c+33,"CPU IDU immgen imm_lo_hi", false,-1, 3,0);
        tracep->declQuad(c+34,"CPU IDU immgen imm_hi_hi_hi_6", false,-1, 43,0);
        tracep->declBus(c+36,"CPU IDU immgen imm_hi_hi_lo_6", false,-1, 7,0);
        tracep->declBit(c+37,"CPU IDU immgen imm_hi_lo_7", false,-1);
        tracep->declBus(c+38,"CPU IDU immgen imm_lo_hi_6", false,-1, 9,0);
        tracep->declBus(c+39,"CPU IDU immgen imm_hi_lo_9", false,-1, 6,0);
        tracep->declBus(c+6,"CPU IDU immgen imm_lo_18", false,-1, 4,0);
        tracep->declBit(c+149,"CPU EXU clock", false,-1);
        tracep->declBit(c+150,"CPU EXU reset", false,-1);
        tracep->declQuad(c+1,"CPU EXU io_in_pc", false,-1, 63,0);
        tracep->declQuad(c+19,"CPU EXU io_in_snpc", false,-1, 63,0);
        tracep->declBus(c+4,"CPU EXU io_in_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU io_in_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU io_in_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU EXU io_in_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU EXU io_contr_alu_op", false,-1, 4,0);
        tracep->declBit(c+10,"CPU EXU io_contr_alu_srca", false,-1);
        tracep->declBit(c+11,"CPU EXU io_contr_alu_srcb", false,-1);
        tracep->declBit(c+12,"CPU EXU io_contr_reg_write", false,-1);
        tracep->declBit(c+13,"CPU EXU io_contr_mem_read", false,-1);
        tracep->declBit(c+14,"CPU EXU io_contr_mem_write", false,-1);
        tracep->declBit(c+13,"CPU EXU io_contr_mem_to_reg", false,-1);
        tracep->declBit(c+16,"CPU EXU io_contr_jalr", false,-1);
        tracep->declBus(c+17,"CPU EXU io_contr_branch", false,-1, 2,0);
        tracep->declBus(c+18,"CPU EXU io_contr_wdth", false,-1, 2,0);
        tracep->declQuad(c+21,"CPU EXU io_out_alu_dest", false,-1, 63,0);
        tracep->declBit(c+23,"CPU EXU io_out_pc_bsrc", false,-1);
        tracep->declBit(c+149,"CPU EXU regs_clock", false,-1);
        tracep->declBit(c+150,"CPU EXU regs_reset", false,-1);
        tracep->declQuad(c+1,"CPU EXU regs_io_in_pc", false,-1, 63,0);
        tracep->declBit(c+12,"CPU EXU regs_io_in_reg_write", false,-1);
        tracep->declBus(c+4,"CPU EXU regs_io_in_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU regs_io_in_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU regs_io_in_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+40,"CPU EXU regs_io_in_rd_data", false,-1, 63,0);
        tracep->declQuad(c+42,"CPU EXU regs_io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+44,"CPU EXU regs_io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+9,"CPU EXU ALU_io_in_alu_op", false,-1, 4,0);
        tracep->declQuad(c+46,"CPU EXU ALU_io_in_src1", false,-1, 63,0);
        tracep->declQuad(c+48,"CPU EXU ALU_io_in_src2", false,-1, 63,0);
        tracep->declBus(c+17,"CPU EXU ALU_io_in_branch", false,-1, 2,0);
        tracep->declQuad(c+21,"CPU EXU ALU_io_out_dest", false,-1, 63,0);
        tracep->declBit(c+23,"CPU EXU ALU_io_out_cmp", false,-1);
        tracep->declBit(c+13,"CPU EXU mem_ren", false,-1);
        tracep->declBit(c+14,"CPU EXU mem_wen", false,-1);
        tracep->declQuad(c+21,"CPU EXU mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+50,"CPU EXU mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+21,"CPU EXU mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+44,"CPU EXU mem_wdata", false,-1, 63,0);
        tracep->declBus(c+52,"CPU EXU mem_mask", false,-1, 7,0);
        tracep->declQuad(c+53,"CPU EXU alu_dest", false,-1, 63,0);
        tracep->declBus(c+55,"CPU EXU mem_dest_lo", false,-1, 7,0);
        tracep->declBus(c+56,"CPU EXU mem_dest_lo_1", false,-1, 15,0);
        tracep->declBus(c+57,"CPU EXU mem_dest_lo_2", false,-1, 31,0);
        tracep->declQuad(c+58,"CPU EXU mem_dest_hi", false,-1, 55,0);
        tracep->declQuad(c+60,"CPU EXU mem_dest_hi_1", false,-1, 47,0);
        tracep->declBus(c+62,"CPU EXU mem_dest_hi_2", false,-1, 31,0);
        tracep->declQuad(c+63,"CPU EXU mem_dest", false,-1, 63,0);
        tracep->declBit(c+149,"CPU EXU regs clock", false,-1);
        tracep->declBit(c+150,"CPU EXU regs reset", false,-1);
        tracep->declQuad(c+1,"CPU EXU regs io_in_pc", false,-1, 63,0);
        tracep->declBit(c+12,"CPU EXU regs io_in_reg_write", false,-1);
        tracep->declBus(c+4,"CPU EXU regs io_in_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU regs io_in_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU regs io_in_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+40,"CPU EXU regs io_in_rd_data", false,-1, 63,0);
        tracep->declQuad(c+42,"CPU EXU regs io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+44,"CPU EXU regs io_out_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+1,"CPU EXU regs trace_regs_pc", false,-1, 63,0);
        tracep->declQuad(c+153,"CPU EXU regs trace_regs_rf_0", false,-1, 63,0);
        tracep->declQuad(c+65,"CPU EXU regs trace_regs_rf_1", false,-1, 63,0);
        tracep->declQuad(c+67,"CPU EXU regs trace_regs_rf_2", false,-1, 63,0);
        tracep->declQuad(c+69,"CPU EXU regs trace_regs_rf_3", false,-1, 63,0);
        tracep->declQuad(c+71,"CPU EXU regs trace_regs_rf_4", false,-1, 63,0);
        tracep->declQuad(c+73,"CPU EXU regs trace_regs_rf_5", false,-1, 63,0);
        tracep->declQuad(c+75,"CPU EXU regs trace_regs_rf_6", false,-1, 63,0);
        tracep->declQuad(c+77,"CPU EXU regs trace_regs_rf_7", false,-1, 63,0);
        tracep->declQuad(c+79,"CPU EXU regs trace_regs_rf_8", false,-1, 63,0);
        tracep->declQuad(c+81,"CPU EXU regs trace_regs_rf_9", false,-1, 63,0);
        tracep->declQuad(c+83,"CPU EXU regs trace_regs_rf_10", false,-1, 63,0);
        tracep->declQuad(c+85,"CPU EXU regs trace_regs_rf_11", false,-1, 63,0);
        tracep->declQuad(c+87,"CPU EXU regs trace_regs_rf_12", false,-1, 63,0);
        tracep->declQuad(c+89,"CPU EXU regs trace_regs_rf_13", false,-1, 63,0);
        tracep->declQuad(c+91,"CPU EXU regs trace_regs_rf_14", false,-1, 63,0);
        tracep->declQuad(c+93,"CPU EXU regs trace_regs_rf_15", false,-1, 63,0);
        tracep->declQuad(c+95,"CPU EXU regs trace_regs_rf_16", false,-1, 63,0);
        tracep->declQuad(c+97,"CPU EXU regs trace_regs_rf_17", false,-1, 63,0);
        tracep->declQuad(c+99,"CPU EXU regs trace_regs_rf_18", false,-1, 63,0);
        tracep->declQuad(c+101,"CPU EXU regs trace_regs_rf_19", false,-1, 63,0);
        tracep->declQuad(c+103,"CPU EXU regs trace_regs_rf_20", false,-1, 63,0);
        tracep->declQuad(c+105,"CPU EXU regs trace_regs_rf_21", false,-1, 63,0);
        tracep->declQuad(c+107,"CPU EXU regs trace_regs_rf_22", false,-1, 63,0);
        tracep->declQuad(c+109,"CPU EXU regs trace_regs_rf_23", false,-1, 63,0);
        tracep->declQuad(c+111,"CPU EXU regs trace_regs_rf_24", false,-1, 63,0);
        tracep->declQuad(c+113,"CPU EXU regs trace_regs_rf_25", false,-1, 63,0);
        tracep->declQuad(c+115,"CPU EXU regs trace_regs_rf_26", false,-1, 63,0);
        tracep->declQuad(c+117,"CPU EXU regs trace_regs_rf_27", false,-1, 63,0);
        tracep->declQuad(c+119,"CPU EXU regs trace_regs_rf_28", false,-1, 63,0);
        tracep->declQuad(c+121,"CPU EXU regs trace_regs_rf_29", false,-1, 63,0);
        tracep->declQuad(c+123,"CPU EXU regs trace_regs_rf_30", false,-1, 63,0);
        tracep->declQuad(c+125,"CPU EXU regs trace_regs_rf_31", false,-1, 63,0);
        tracep->declQuad(c+65,"CPU EXU regs reg_1", false,-1, 63,0);
        tracep->declQuad(c+67,"CPU EXU regs reg_2", false,-1, 63,0);
        tracep->declQuad(c+69,"CPU EXU regs reg_3", false,-1, 63,0);
        tracep->declQuad(c+71,"CPU EXU regs reg_4", false,-1, 63,0);
        tracep->declQuad(c+73,"CPU EXU regs reg_5", false,-1, 63,0);
        tracep->declQuad(c+75,"CPU EXU regs reg_6", false,-1, 63,0);
        tracep->declQuad(c+77,"CPU EXU regs reg_7", false,-1, 63,0);
        tracep->declQuad(c+79,"CPU EXU regs reg_8", false,-1, 63,0);
        tracep->declQuad(c+81,"CPU EXU regs reg_9", false,-1, 63,0);
        tracep->declQuad(c+83,"CPU EXU regs reg_10", false,-1, 63,0);
        tracep->declQuad(c+85,"CPU EXU regs reg_11", false,-1, 63,0);
        tracep->declQuad(c+87,"CPU EXU regs reg_12", false,-1, 63,0);
        tracep->declQuad(c+89,"CPU EXU regs reg_13", false,-1, 63,0);
        tracep->declQuad(c+91,"CPU EXU regs reg_14", false,-1, 63,0);
        tracep->declQuad(c+93,"CPU EXU regs reg_15", false,-1, 63,0);
        tracep->declQuad(c+95,"CPU EXU regs reg_16", false,-1, 63,0);
        tracep->declQuad(c+97,"CPU EXU regs reg_17", false,-1, 63,0);
        tracep->declQuad(c+99,"CPU EXU regs reg_18", false,-1, 63,0);
        tracep->declQuad(c+101,"CPU EXU regs reg_19", false,-1, 63,0);
        tracep->declQuad(c+103,"CPU EXU regs reg_20", false,-1, 63,0);
        tracep->declQuad(c+105,"CPU EXU regs reg_21", false,-1, 63,0);
        tracep->declQuad(c+107,"CPU EXU regs reg_22", false,-1, 63,0);
        tracep->declQuad(c+109,"CPU EXU regs reg_23", false,-1, 63,0);
        tracep->declQuad(c+111,"CPU EXU regs reg_24", false,-1, 63,0);
        tracep->declQuad(c+113,"CPU EXU regs reg_25", false,-1, 63,0);
        tracep->declQuad(c+115,"CPU EXU regs reg_26", false,-1, 63,0);
        tracep->declQuad(c+117,"CPU EXU regs reg_27", false,-1, 63,0);
        tracep->declQuad(c+119,"CPU EXU regs reg_28", false,-1, 63,0);
        tracep->declQuad(c+121,"CPU EXU regs reg_29", false,-1, 63,0);
        tracep->declQuad(c+123,"CPU EXU regs reg_30", false,-1, 63,0);
        tracep->declQuad(c+125,"CPU EXU regs reg_31", false,-1, 63,0);
        tracep->declQuad(c+1,"CPU EXU regs trace_regs pc", false,-1, 63,0);
        tracep->declQuad(c+153,"CPU EXU regs trace_regs rf_0", false,-1, 63,0);
        tracep->declQuad(c+65,"CPU EXU regs trace_regs rf_1", false,-1, 63,0);
        tracep->declQuad(c+67,"CPU EXU regs trace_regs rf_2", false,-1, 63,0);
        tracep->declQuad(c+69,"CPU EXU regs trace_regs rf_3", false,-1, 63,0);
        tracep->declQuad(c+71,"CPU EXU regs trace_regs rf_4", false,-1, 63,0);
        tracep->declQuad(c+73,"CPU EXU regs trace_regs rf_5", false,-1, 63,0);
        tracep->declQuad(c+75,"CPU EXU regs trace_regs rf_6", false,-1, 63,0);
        tracep->declQuad(c+77,"CPU EXU regs trace_regs rf_7", false,-1, 63,0);
        tracep->declQuad(c+79,"CPU EXU regs trace_regs rf_8", false,-1, 63,0);
        tracep->declQuad(c+81,"CPU EXU regs trace_regs rf_9", false,-1, 63,0);
        tracep->declQuad(c+83,"CPU EXU regs trace_regs rf_10", false,-1, 63,0);
        tracep->declQuad(c+85,"CPU EXU regs trace_regs rf_11", false,-1, 63,0);
        tracep->declQuad(c+87,"CPU EXU regs trace_regs rf_12", false,-1, 63,0);
        tracep->declQuad(c+89,"CPU EXU regs trace_regs rf_13", false,-1, 63,0);
        tracep->declQuad(c+91,"CPU EXU regs trace_regs rf_14", false,-1, 63,0);
        tracep->declQuad(c+93,"CPU EXU regs trace_regs rf_15", false,-1, 63,0);
        tracep->declQuad(c+95,"CPU EXU regs trace_regs rf_16", false,-1, 63,0);
        tracep->declQuad(c+97,"CPU EXU regs trace_regs rf_17", false,-1, 63,0);
        tracep->declQuad(c+99,"CPU EXU regs trace_regs rf_18", false,-1, 63,0);
        tracep->declQuad(c+101,"CPU EXU regs trace_regs rf_19", false,-1, 63,0);
        tracep->declQuad(c+103,"CPU EXU regs trace_regs rf_20", false,-1, 63,0);
        tracep->declQuad(c+105,"CPU EXU regs trace_regs rf_21", false,-1, 63,0);
        tracep->declQuad(c+107,"CPU EXU regs trace_regs rf_22", false,-1, 63,0);
        tracep->declQuad(c+109,"CPU EXU regs trace_regs rf_23", false,-1, 63,0);
        tracep->declQuad(c+111,"CPU EXU regs trace_regs rf_24", false,-1, 63,0);
        tracep->declQuad(c+113,"CPU EXU regs trace_regs rf_25", false,-1, 63,0);
        tracep->declQuad(c+115,"CPU EXU regs trace_regs rf_26", false,-1, 63,0);
        tracep->declQuad(c+117,"CPU EXU regs trace_regs rf_27", false,-1, 63,0);
        tracep->declQuad(c+119,"CPU EXU regs trace_regs rf_28", false,-1, 63,0);
        tracep->declQuad(c+121,"CPU EXU regs trace_regs rf_29", false,-1, 63,0);
        tracep->declQuad(c+123,"CPU EXU regs trace_regs rf_30", false,-1, 63,0);
        tracep->declQuad(c+125,"CPU EXU regs trace_regs rf_31", false,-1, 63,0);
        tracep->declBus(c+9,"CPU EXU ALU io_in_alu_op", false,-1, 4,0);
        tracep->declQuad(c+46,"CPU EXU ALU io_in_src1", false,-1, 63,0);
        tracep->declQuad(c+48,"CPU EXU ALU io_in_src2", false,-1, 63,0);
        tracep->declBus(c+17,"CPU EXU ALU io_in_branch", false,-1, 2,0);
        tracep->declQuad(c+21,"CPU EXU ALU io_out_dest", false,-1, 63,0);
        tracep->declBit(c+23,"CPU EXU ALU io_out_cmp", false,-1);
        tracep->declBus(c+127,"CPU EXU ALU io_out_dest_lo", false,-1, 31,0);
        tracep->declBus(c+128,"CPU EXU ALU io_out_dest_hi", false,-1, 31,0);
        tracep->declBus(c+129,"CPU EXU ALU io_out_dest_lo_1", false,-1, 31,0);
        tracep->declBus(c+130,"CPU EXU ALU io_out_dest_hi_1", false,-1, 31,0);
        tracep->declBus(c+131,"CPU EXU ALU io_out_dest_lo_2", false,-1, 31,0);
        tracep->declBus(c+132,"CPU EXU ALU io_out_dest_hi_2", false,-1, 31,0);
        tracep->declBus(c+133,"CPU EXU ALU io_out_dest_lo_3", false,-1, 31,0);
        tracep->declBus(c+134,"CPU EXU ALU io_out_dest_hi_3", false,-1, 31,0);
        tracep->declBus(c+135,"CPU EXU ALU io_out_dest_lo_4", false,-1, 31,0);
        tracep->declBus(c+136,"CPU EXU ALU io_out_dest_hi_4", false,-1, 31,0);
        tracep->declBus(c+137,"CPU EXU ALU io_out_dest_lo_5", false,-1, 31,0);
        tracep->declBus(c+138,"CPU EXU ALU io_out_dest_hi_5", false,-1, 31,0);
        tracep->declBus(c+139,"CPU EXU ALU io_out_dest_lo_6", false,-1, 31,0);
        tracep->declBus(c+140,"CPU EXU ALU io_out_dest_hi_6", false,-1, 31,0);
        tracep->declBus(c+141,"CPU EXU ALU io_out_dest_lo_7", false,-1, 31,0);
        tracep->declBus(c+142,"CPU EXU ALU io_out_dest_hi_7", false,-1, 31,0);
        tracep->declBus(c+143,"CPU EXU ALU io_out_dest_lo_8", false,-1, 31,0);
        tracep->declBus(c+144,"CPU EXU ALU io_out_dest_hi_8", false,-1, 31,0);
        tracep->declBus(c+145,"CPU EXU ALU io_out_dest_lo_9", false,-1, 31,0);
        tracep->declBus(c+146,"CPU EXU ALU io_out_dest_hi_9", false,-1, 31,0);
        tracep->declBus(c+147,"CPU EXU ALU io_out_dest_lo_10", false,-1, 31,0);
        tracep->declBus(c+148,"CPU EXU ALU io_out_dest_hi_10", false,-1, 31,0);
        tracep->declBit(c+13,"CPU EXU mem ren", false,-1);
        tracep->declBit(c+14,"CPU EXU mem wen", false,-1);
        tracep->declQuad(c+21,"CPU EXU mem raddr", false,-1, 63,0);
        tracep->declQuad(c+50,"CPU EXU mem rdata", false,-1, 63,0);
        tracep->declQuad(c+21,"CPU EXU mem waddr", false,-1, 63,0);
        tracep->declQuad(c+44,"CPU EXU mem wdata", false,-1, 63,0);
        tracep->declBus(c+52,"CPU EXU mem mask", false,-1, 7,0);
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
        tracep->fullCData(oldp+9,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op),5);
        tracep->fullBit(oldp+10,(((0x33U != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                  & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_229))));
        tracep->fullBit(oldp+11,(((0x33U != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                  & ((0x13U == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                     | ((0x1bU == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                        | ((0x3bU != 
                                            (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                           & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_283)))))));
        tracep->fullBit(oldp+12,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write));
        tracep->fullBit(oldp+13,(((0x33U != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                  & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_400))));
        tracep->fullBit(oldp+14,(((0x33U != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                  & ((0x13U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                     & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_456)))));
        tracep->fullBit(oldp+15,(((0x33U != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                  & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_571))));
        tracep->fullBit(oldp+16,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_jalr));
        tracep->fullCData(oldp+17,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch),3);
        tracep->fullCData(oldp+18,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth),3);
        tracep->fullQData(oldp+19,((4ULL + vlSelf->CPU__DOT__pc)),64);
        tracep->fullQData(oldp+21,((((QData)((IData)(
                                                     vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[0U])))),64);
        tracep->fullBit(oldp+23,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_out_cmp));
        tracep->fullQData(oldp+24,(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata),64);
        tracep->fullQData(oldp+26,(((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0x1fU)))
                                     ? 0xfffffffffffffULL
                                     : 0ULL)),52);
        tracep->fullSData(oldp+28,((0xfffU & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x14U)))),12);
        tracep->fullIData(oldp+29,(((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0x1fU)))
                                     ? 0xffffffffU : 0U)),32);
        tracep->fullIData(oldp+30,((0xfffffU & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0xcU)))),20);
        tracep->fullBit(oldp+31,((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                >> 7U)))));
        tracep->fullCData(oldp+32,((0x3fU & (IData)(
                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                     >> 0x19U)))),6);
        tracep->fullCData(oldp+33,((0xfU & (IData)(
                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                    >> 8U)))),4);
        tracep->fullQData(oldp+34,(((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0x1fU)))
                                     ? 0xfffffffffffULL
                                     : 0ULL)),44);
        tracep->fullCData(oldp+36,((0xffU & (IData)(
                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                     >> 0xcU)))),8);
        tracep->fullBit(oldp+37,((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                >> 0x14U)))));
        tracep->fullSData(oldp+38,((0x3ffU & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x15U)))),10);
        tracep->fullCData(oldp+39,((0x7fU & (IData)(
                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                     >> 0x19U)))),7);
        tracep->fullQData(oldp+40,(vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data),64);
        tracep->fullQData(oldp+42,(((0x1fU == (0x1fU 
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
        tracep->fullQData(oldp+44,(vlSelf->CPU__DOT__EXU__DOT__regs_io_out_rs2_data),64);
        tracep->fullQData(oldp+46,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1),64);
        tracep->fullQData(oldp+48,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2),64);
        tracep->fullQData(oldp+50,(vlSelf->CPU__DOT__EXU__DOT__mem_rdata),64);
        tracep->fullCData(oldp+52,(((3U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                     ? 0xffU : ((2U 
                                                 == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                 ? 0xfU
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                  ? 3U
                                                  : 
                                                 (0U 
                                                  == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth)))))),8);
        tracep->fullQData(oldp+53,(((4U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                     ? (((QData)((IData)(
                                                         vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[0U])))
                                     : (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_out_cmp)))),64);
        tracep->fullCData(oldp+55,((0xffU & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))),8);
        tracep->fullSData(oldp+56,((0xffffU & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))),16);
        tracep->fullIData(oldp+57,((IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)),32);
        tracep->fullQData(oldp+58,(((1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                   >> 7U)))
                                     ? 0xffffffffffffffULL
                                     : 0ULL)),56);
        tracep->fullQData(oldp+60,(((1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                   >> 0xfU)))
                                     ? 0xffffffffffffULL
                                     : 0ULL)),48);
        tracep->fullIData(oldp+62,(((1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                   >> 0x1fU)))
                                     ? 0xffffffffU : 0U)),32);
        tracep->fullQData(oldp+63,(((6U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                     ? (((QData)((IData)(
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                                      >> 0x1fU)))
                                                           ? 0xffffffffU
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))
                                     : ((5U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                         ? ((((1U & (IData)(
                                                            (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                             >> 0xfU)))
                                               ? 0xffffffffffffULL
                                               : 0ULL) 
                                             << 0x10U) 
                                            | (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))))
                                         : ((4U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                             ? ((((1U 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                              >> 7U)))
                                                   ? 0xffffffffffffffULL
                                                   : 0ULL) 
                                                 << 8U) 
                                                | (QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))))
                                             : ((2U 
                                                 == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                 ? (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                  ? (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))
                                                  : 
                                                 ((0U 
                                                   == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                   ? (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))
                                                   : vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))))),64);
        tracep->fullQData(oldp+65,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1),64);
        tracep->fullQData(oldp+67,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2),64);
        tracep->fullQData(oldp+69,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3),64);
        tracep->fullQData(oldp+71,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4),64);
        tracep->fullQData(oldp+73,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5),64);
        tracep->fullQData(oldp+75,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6),64);
        tracep->fullQData(oldp+77,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7),64);
        tracep->fullQData(oldp+79,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8),64);
        tracep->fullQData(oldp+81,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9),64);
        tracep->fullQData(oldp+83,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10),64);
        tracep->fullQData(oldp+85,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11),64);
        tracep->fullQData(oldp+87,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12),64);
        tracep->fullQData(oldp+89,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13),64);
        tracep->fullQData(oldp+91,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14),64);
        tracep->fullQData(oldp+93,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15),64);
        tracep->fullQData(oldp+95,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16),64);
        tracep->fullQData(oldp+97,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17),64);
        tracep->fullQData(oldp+99,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18),64);
        tracep->fullQData(oldp+101,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19),64);
        tracep->fullQData(oldp+103,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20),64);
        tracep->fullQData(oldp+105,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21),64);
        tracep->fullQData(oldp+107,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22),64);
        tracep->fullQData(oldp+109,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23),64);
        tracep->fullQData(oldp+111,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24),64);
        tracep->fullQData(oldp+113,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25),64);
        tracep->fullQData(oldp+115,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26),64);
        tracep->fullQData(oldp+117,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27),64);
        tracep->fullQData(oldp+119,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28),64);
        tracep->fullQData(oldp+121,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29),64);
        tracep->fullQData(oldp+123,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30),64);
        tracep->fullQData(oldp+125,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31),64);
        tracep->fullIData(oldp+127,((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4)),32);
        tracep->fullIData(oldp+128,(((1U & (IData)(
                                                   (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+129,((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14)),32);
        tracep->fullIData(oldp+130,(((1U & (IData)(
                                                   (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+131,((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25)),32);
        tracep->fullIData(oldp+132,(((1U & (IData)(
                                                   (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+133,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U]),32);
        tracep->fullIData(oldp+134,(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U] 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+135,((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_40)),32);
        tracep->fullIData(oldp+136,(((1U & (IData)(
                                                   (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_40 
                                                    >> 0x1fU)))
                                      ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+137,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5),32);
        tracep->fullIData(oldp+138,(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+139,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6),32);
        tracep->fullIData(oldp+140,(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+141,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___GEN_1),32);
        tracep->fullIData(oldp+142,(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___GEN_1 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+143,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_75[0U]),32);
        tracep->fullIData(oldp+144,(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_75[0U] 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+145,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_9),32);
        tracep->fullIData(oldp+146,(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_9 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullIData(oldp+147,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_10),32);
        tracep->fullIData(oldp+148,(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_10 
                                      >> 0x1fU) ? 0xffffffffU
                                      : 0U)),32);
        tracep->fullBit(oldp+149,(vlSelf->clock));
        tracep->fullBit(oldp+150,(vlSelf->reset));
        tracep->fullBit(oldp+151,(1U));
        tracep->fullBit(oldp+152,(0U));
        tracep->fullQData(oldp+153,(0ULL),64);
        tracep->fullCData(oldp+155,(0U),8);
    }
}
