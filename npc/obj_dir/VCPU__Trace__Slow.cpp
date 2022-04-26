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
        tracep->declBit(c+86,"clock", false,-1);
        tracep->declBit(c+87,"reset", false,-1);
        tracep->declBit(c+86,"CPU clock", false,-1);
        tracep->declBit(c+87,"CPU reset", false,-1);
        tracep->declQuad(c+1,"CPU IFU_io_in_addr", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IFU_io_out_inst", false,-1, 31,0);
        tracep->declBus(c+3,"CPU IDU_io_in_inst", false,-1, 31,0);
        tracep->declBus(c+4,"CPU IDU_io_out_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU IDU_io_out_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU IDU_io_out_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU IDU_io_out_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU IDU_io_contr_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU IDU_io_contr_alu_src", false,-1);
        tracep->declBit(c+10,"CPU IDU_io_contr_reg_write", false,-1);
        tracep->declBit(c+86,"CPU EXU_clock", false,-1);
        tracep->declBit(c+87,"CPU EXU_reset", false,-1);
        tracep->declBus(c+4,"CPU EXU_io_in_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU_io_in_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU_io_in_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU EXU_io_in_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU EXU_io_contr_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU EXU_io_contr_alu_src", false,-1);
        tracep->declBit(c+10,"CPU EXU_io_contr_reg_write", false,-1);
        tracep->declQuad(c+1,"CPU pc", false,-1, 63,0);
        tracep->declQuad(c+1,"CPU IFU io_in_addr", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IFU io_out_inst", false,-1, 31,0);
        tracep->declBit(c+88,"CPU IFU fetchmem_ren", false,-1);
        tracep->declBit(c+89,"CPU IFU fetchmem_wen", false,-1);
        tracep->declQuad(c+1,"CPU IFU fetchmem_raddr", false,-1, 63,0);
        tracep->declQuad(c+11,"CPU IFU fetchmem_rdata", false,-1, 63,0);
        tracep->declQuad(c+90,"CPU IFU fetchmem_waddr", false,-1, 63,0);
        tracep->declQuad(c+90,"CPU IFU fetchmem_wdata", false,-1, 63,0);
        tracep->declBus(c+92,"CPU IFU fetchmem_mask", false,-1, 7,0);
        tracep->declBus(c+3,"CPU IFU ebreak_inst", false,-1, 31,0);
        tracep->declBit(c+88,"CPU IFU fetchmem ren", false,-1);
        tracep->declBit(c+89,"CPU IFU fetchmem wen", false,-1);
        tracep->declQuad(c+1,"CPU IFU fetchmem raddr", false,-1, 63,0);
        tracep->declQuad(c+11,"CPU IFU fetchmem rdata", false,-1, 63,0);
        tracep->declQuad(c+90,"CPU IFU fetchmem waddr", false,-1, 63,0);
        tracep->declQuad(c+90,"CPU IFU fetchmem wdata", false,-1, 63,0);
        tracep->declBus(c+92,"CPU IFU fetchmem mask", false,-1, 7,0);
        tracep->declBus(c+3,"CPU IFU ebreak inst", false,-1, 31,0);
        tracep->declBus(c+3,"CPU IDU io_in_inst", false,-1, 31,0);
        tracep->declBus(c+4,"CPU IDU io_out_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU IDU io_out_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU IDU io_out_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU IDU io_out_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU IDU io_contr_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU IDU io_contr_alu_src", false,-1);
        tracep->declBit(c+10,"CPU IDU io_contr_reg_write", false,-1);
        tracep->declBus(c+3,"CPU IDU contr_io_in_inst", false,-1, 31,0);
        tracep->declBus(c+9,"CPU IDU contr_io_out_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU IDU contr_io_out_alu_src", false,-1);
        tracep->declBit(c+10,"CPU IDU contr_io_out_reg_write", false,-1);
        tracep->declBus(c+3,"CPU IDU immgen_io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"CPU IDU immgen_io_out_imm", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IDU contr io_in_inst", false,-1, 31,0);
        tracep->declBus(c+9,"CPU IDU contr io_out_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU IDU contr io_out_alu_src", false,-1);
        tracep->declBit(c+10,"CPU IDU contr io_out_reg_write", false,-1);
        tracep->declBit(c+10,"CPU IDU contr controller_0", false,-1);
        tracep->declBus(c+3,"CPU IDU immgen io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"CPU IDU immgen io_out_imm", false,-1, 63,0);
        tracep->declBus(c+13,"CPU IDU immgen imm_hi", false,-1, 19,0);
        tracep->declBus(c+14,"CPU IDU immgen imm_lo", false,-1, 11,0);
        tracep->declBus(c+15,"CPU IDU immgen imm", false,-1, 31,0);
        tracep->declBit(c+86,"CPU EXU clock", false,-1);
        tracep->declBit(c+87,"CPU EXU reset", false,-1);
        tracep->declBus(c+4,"CPU EXU io_in_rs1", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU io_in_rs2", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU io_in_rd", false,-1, 4,0);
        tracep->declQuad(c+7,"CPU EXU io_in_imm", false,-1, 63,0);
        tracep->declBus(c+9,"CPU EXU io_contr_alu_op", false,-1, 3,0);
        tracep->declBit(c+10,"CPU EXU io_contr_alu_src", false,-1);
        tracep->declBit(c+10,"CPU EXU io_contr_reg_write", false,-1);
        tracep->declBit(c+86,"CPU EXU regs_clock", false,-1);
        tracep->declBit(c+87,"CPU EXU regs_reset", false,-1);
        tracep->declBit(c+10,"CPU EXU regs_io_in_reg_write", false,-1);
        tracep->declBus(c+4,"CPU EXU regs_io_in_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU regs_io_in_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU regs_io_in_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+16,"CPU EXU regs_io_in_rd_data", false,-1, 63,0);
        tracep->declQuad(c+18,"CPU EXU regs_io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+20,"CPU EXU regs_io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+9,"CPU EXU ALU_io_in_alu_op", false,-1, 3,0);
        tracep->declQuad(c+18,"CPU EXU ALU_io_in_src1", false,-1, 63,0);
        tracep->declQuad(c+22,"CPU EXU ALU_io_in_src2", false,-1, 63,0);
        tracep->declQuad(c+16,"CPU EXU ALU_io_out_dest", false,-1, 63,0);
        tracep->declBit(c+89,"CPU EXU mem_ren", false,-1);
        tracep->declBit(c+89,"CPU EXU mem_wen", false,-1);
        tracep->declQuad(c+16,"CPU EXU mem_raddr", false,-1, 63,0);
        tracep->declQuad(c+93,"CPU EXU mem_rdata", false,-1, 63,0);
        tracep->declQuad(c+16,"CPU EXU mem_waddr", false,-1, 63,0);
        tracep->declQuad(c+20,"CPU EXU mem_wdata", false,-1, 63,0);
        tracep->declBus(c+92,"CPU EXU mem_mask", false,-1, 7,0);
        tracep->declBit(c+86,"CPU EXU regs clock", false,-1);
        tracep->declBit(c+87,"CPU EXU regs reset", false,-1);
        tracep->declBit(c+10,"CPU EXU regs io_in_reg_write", false,-1);
        tracep->declBus(c+4,"CPU EXU regs io_in_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+5,"CPU EXU regs io_in_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+6,"CPU EXU regs io_in_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+16,"CPU EXU regs io_in_rd_data", false,-1, 63,0);
        tracep->declQuad(c+18,"CPU EXU regs io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+20,"CPU EXU regs io_out_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+24,"CPU EXU regs reg_1", false,-1, 63,0);
        tracep->declQuad(c+26,"CPU EXU regs reg_2", false,-1, 63,0);
        tracep->declQuad(c+28,"CPU EXU regs reg_3", false,-1, 63,0);
        tracep->declQuad(c+30,"CPU EXU regs reg_4", false,-1, 63,0);
        tracep->declQuad(c+32,"CPU EXU regs reg_5", false,-1, 63,0);
        tracep->declQuad(c+34,"CPU EXU regs reg_6", false,-1, 63,0);
        tracep->declQuad(c+36,"CPU EXU regs reg_7", false,-1, 63,0);
        tracep->declQuad(c+38,"CPU EXU regs reg_8", false,-1, 63,0);
        tracep->declQuad(c+40,"CPU EXU regs reg_9", false,-1, 63,0);
        tracep->declQuad(c+42,"CPU EXU regs reg_10", false,-1, 63,0);
        tracep->declQuad(c+44,"CPU EXU regs reg_11", false,-1, 63,0);
        tracep->declQuad(c+46,"CPU EXU regs reg_12", false,-1, 63,0);
        tracep->declQuad(c+48,"CPU EXU regs reg_13", false,-1, 63,0);
        tracep->declQuad(c+50,"CPU EXU regs reg_14", false,-1, 63,0);
        tracep->declQuad(c+52,"CPU EXU regs reg_15", false,-1, 63,0);
        tracep->declQuad(c+54,"CPU EXU regs reg_16", false,-1, 63,0);
        tracep->declQuad(c+56,"CPU EXU regs reg_17", false,-1, 63,0);
        tracep->declQuad(c+58,"CPU EXU regs reg_18", false,-1, 63,0);
        tracep->declQuad(c+60,"CPU EXU regs reg_19", false,-1, 63,0);
        tracep->declQuad(c+62,"CPU EXU regs reg_20", false,-1, 63,0);
        tracep->declQuad(c+64,"CPU EXU regs reg_21", false,-1, 63,0);
        tracep->declQuad(c+66,"CPU EXU regs reg_22", false,-1, 63,0);
        tracep->declQuad(c+68,"CPU EXU regs reg_23", false,-1, 63,0);
        tracep->declQuad(c+70,"CPU EXU regs reg_24", false,-1, 63,0);
        tracep->declQuad(c+72,"CPU EXU regs reg_25", false,-1, 63,0);
        tracep->declQuad(c+74,"CPU EXU regs reg_26", false,-1, 63,0);
        tracep->declQuad(c+76,"CPU EXU regs reg_27", false,-1, 63,0);
        tracep->declQuad(c+78,"CPU EXU regs reg_28", false,-1, 63,0);
        tracep->declQuad(c+80,"CPU EXU regs reg_29", false,-1, 63,0);
        tracep->declQuad(c+82,"CPU EXU regs reg_30", false,-1, 63,0);
        tracep->declQuad(c+84,"CPU EXU regs reg_31", false,-1, 63,0);
        tracep->declBus(c+9,"CPU EXU ALU io_in_alu_op", false,-1, 3,0);
        tracep->declQuad(c+18,"CPU EXU ALU io_in_src1", false,-1, 63,0);
        tracep->declQuad(c+22,"CPU EXU ALU io_in_src2", false,-1, 63,0);
        tracep->declQuad(c+16,"CPU EXU ALU io_out_dest", false,-1, 63,0);
        tracep->declBit(c+89,"CPU EXU mem ren", false,-1);
        tracep->declBit(c+89,"CPU EXU mem wen", false,-1);
        tracep->declQuad(c+16,"CPU EXU mem raddr", false,-1, 63,0);
        tracep->declQuad(c+93,"CPU EXU mem rdata", false,-1, 63,0);
        tracep->declQuad(c+16,"CPU EXU mem waddr", false,-1, 63,0);
        tracep->declQuad(c+20,"CPU EXU mem wdata", false,-1, 63,0);
        tracep->declBus(c+92,"CPU EXU mem mask", false,-1, 7,0);
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
        tracep->fullIData(oldp+3,((IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                           >> 0x20U))),32);
        tracep->fullCData(oldp+4,((0x1fU & (IData)(
                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                    >> 0x2fU)))),5);
        tracep->fullCData(oldp+5,((0x1fU & (IData)(
                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                    >> 0x34U)))),5);
        tracep->fullCData(oldp+6,((0x1fU & (IData)(
                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                    >> 0x27U)))),5);
        tracep->fullQData(oldp+7,((QData)((IData)((
                                                   (0x13U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0x20U))))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0x3fU)))
                                                       ? 0xfffffU
                                                       : 0U) 
                                                     << 0xcU) 
                                                    | (0xfffU 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0x34U))))
                                                    : 0U)))),64);
        tracep->fullCData(oldp+9,((0x13U == (0x707fU 
                                             & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0x20U))))),4);
        tracep->fullBit(oldp+10,((0x13U == (0x707fU 
                                            & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 0x20U))))));
        tracep->fullQData(oldp+11,(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata),64);
        tracep->fullIData(oldp+13,(((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0x3fU)))
                                     ? 0xfffffU : 0U)),20);
        tracep->fullSData(oldp+14,((0xfffU & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x34U)))),12);
        tracep->fullIData(oldp+15,(((0x13U == (0x707fU 
                                               & (IData)(
                                                         (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                          >> 0x20U))))
                                     ? ((((1U & (IData)(
                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                         >> 0x3fU)))
                                           ? 0xfffffU
                                           : 0U) << 0xcU) 
                                        | (0xfffU & (IData)(
                                                            (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                             >> 0x34U))))
                                     : 0U)),32);
        tracep->fullQData(oldp+16,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5),64);
        tracep->fullQData(oldp+18,(vlSelf->CPU__DOT__EXU__DOT__regs_io_out_rs1_data),64);
        tracep->fullQData(oldp+20,(((0x1fU == (0x1fU 
                                               & (IData)(
                                                         (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                          >> 0x34U))))
                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31
                                     : ((0x1eU == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0x34U))))
                                         ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30
                                         : ((0x1dU 
                                             == (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                            >> 0x34U))))
                                             ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29
                                             : ((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                             >> 0x34U))))
                                                 ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0x34U))))
                                                  ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27
                                                  : vlSelf->CPU__DOT__EXU__DOT__regs__DOT___GEN_58)))))),64);
        tracep->fullQData(oldp+22,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2),64);
        tracep->fullQData(oldp+24,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1),64);
        tracep->fullQData(oldp+26,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2),64);
        tracep->fullQData(oldp+28,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3),64);
        tracep->fullQData(oldp+30,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4),64);
        tracep->fullQData(oldp+32,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5),64);
        tracep->fullQData(oldp+34,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6),64);
        tracep->fullQData(oldp+36,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7),64);
        tracep->fullQData(oldp+38,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8),64);
        tracep->fullQData(oldp+40,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9),64);
        tracep->fullQData(oldp+42,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10),64);
        tracep->fullQData(oldp+44,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11),64);
        tracep->fullQData(oldp+46,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12),64);
        tracep->fullQData(oldp+48,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13),64);
        tracep->fullQData(oldp+50,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14),64);
        tracep->fullQData(oldp+52,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15),64);
        tracep->fullQData(oldp+54,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16),64);
        tracep->fullQData(oldp+56,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17),64);
        tracep->fullQData(oldp+58,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18),64);
        tracep->fullQData(oldp+60,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19),64);
        tracep->fullQData(oldp+62,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20),64);
        tracep->fullQData(oldp+64,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21),64);
        tracep->fullQData(oldp+66,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22),64);
        tracep->fullQData(oldp+68,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23),64);
        tracep->fullQData(oldp+70,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24),64);
        tracep->fullQData(oldp+72,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25),64);
        tracep->fullQData(oldp+74,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26),64);
        tracep->fullQData(oldp+76,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27),64);
        tracep->fullQData(oldp+78,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28),64);
        tracep->fullQData(oldp+80,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29),64);
        tracep->fullQData(oldp+82,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30),64);
        tracep->fullQData(oldp+84,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31),64);
        tracep->fullBit(oldp+86,(vlSelf->clock));
        tracep->fullBit(oldp+87,(vlSelf->reset));
        tracep->fullBit(oldp+88,(1U));
        tracep->fullBit(oldp+89,(0U));
        tracep->fullQData(oldp+90,(0ULL),64);
        tracep->fullCData(oldp+92,(0U),8);
        tracep->fullQData(oldp+93,(vlSelf->CPU__DOT__EXU__DOT__mem_rdata),64);
    }
}
