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
        tracep->declBit(c+84,"clock", false,-1);
        tracep->declBit(c+85,"reset", false,-1);
        tracep->declBus(c+86,"io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+87,"io_out_result", false,-1, 63,0);
        tracep->declBit(c+84,"CPU clock", false,-1);
        tracep->declBit(c+85,"CPU reset", false,-1);
        tracep->declBus(c+86,"CPU io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+87,"CPU io_out_result", false,-1, 63,0);
        tracep->declQuad(c+12,"CPU IFU_io_in_addr", false,-1, 63,0);
        tracep->declBus(c+1,"CPU IFU_io_out_inst", false,-1, 31,0);
        tracep->declBit(c+84,"CPU IDU_clock", false,-1);
        tracep->declBit(c+85,"CPU IDU_reset", false,-1);
        tracep->declBus(c+1,"CPU IDU_io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+14,"CPU IDU_io_in_rd_data", false,-1, 63,0);
        tracep->declQuad(c+16,"CPU IDU_io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+18,"CPU IDU_io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+2,"CPU IDU_io_contr_alu_op", false,-1, 3,0);
        tracep->declBus(c+2,"CPU EXU_io_in_alu_op", false,-1, 3,0);
        tracep->declQuad(c+16,"CPU EXU_io_in_rs1", false,-1, 63,0);
        tracep->declQuad(c+18,"CPU EXU_io_in_rs2", false,-1, 63,0);
        tracep->declQuad(c+14,"CPU EXU_io_out_dest", false,-1, 63,0);
        tracep->declQuad(c+12,"CPU pc", false,-1, 63,0);
        tracep->declQuad(c+12,"CPU IFU io_in_addr", false,-1, 63,0);
        tracep->declBus(c+1,"CPU IFU io_out_inst", false,-1, 31,0);
        tracep->declQuad(c+12,"CPU IFU fetchinst_in_addr", false,-1, 63,0);
        tracep->declBus(c+1,"CPU IFU fetchinst_out_inst", false,-1, 31,0);
        tracep->declQuad(c+12,"CPU IFU fetchinst in_addr", false,-1, 63,0);
        tracep->declBus(c+1,"CPU IFU fetchinst out_inst", false,-1, 31,0);
        tracep->declBit(c+84,"CPU IDU clock", false,-1);
        tracep->declBit(c+85,"CPU IDU reset", false,-1);
        tracep->declBus(c+1,"CPU IDU io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+14,"CPU IDU io_in_rd_data", false,-1, 63,0);
        tracep->declQuad(c+16,"CPU IDU io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+18,"CPU IDU io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+2,"CPU IDU io_contr_alu_op", false,-1, 3,0);
        tracep->declBus(c+3,"CPU IDU contr_io_in_opcode", false,-1, 6,0);
        tracep->declBit(c+4,"CPU IDU contr_io_out_reg_write", false,-1);
        tracep->declBit(c+4,"CPU IDU contr_io_out_alu_src", false,-1);
        tracep->declBus(c+2,"CPU IDU contr_io_out_alu_op", false,-1, 3,0);
        tracep->declBit(c+84,"CPU IDU reg__clock", false,-1);
        tracep->declBit(c+85,"CPU IDU reg__reset", false,-1);
        tracep->declBit(c+4,"CPU IDU reg__io_in_reg_write", false,-1);
        tracep->declBus(c+5,"CPU IDU reg__io_in_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+6,"CPU IDU reg__io_in_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+7,"CPU IDU reg__io_in_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+14,"CPU IDU reg__io_in_rd_data", false,-1, 63,0);
        tracep->declQuad(c+16,"CPU IDU reg__io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+20,"CPU IDU reg__io_out_rs2_data", false,-1, 63,0);
        tracep->declBus(c+1,"CPU IDU immgen_io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+8,"CPU IDU immgen_io_out_imm", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IDU contr io_in_opcode", false,-1, 6,0);
        tracep->declBit(c+4,"CPU IDU contr io_out_reg_write", false,-1);
        tracep->declBit(c+4,"CPU IDU contr io_out_alu_src", false,-1);
        tracep->declBus(c+2,"CPU IDU contr io_out_alu_op", false,-1, 3,0);
        tracep->declBit(c+84,"CPU IDU reg_ clock", false,-1);
        tracep->declBit(c+85,"CPU IDU reg_ reset", false,-1);
        tracep->declBit(c+4,"CPU IDU reg_ io_in_reg_write", false,-1);
        tracep->declBus(c+5,"CPU IDU reg_ io_in_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+6,"CPU IDU reg_ io_in_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+7,"CPU IDU reg_ io_in_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+14,"CPU IDU reg_ io_in_rd_data", false,-1, 63,0);
        tracep->declQuad(c+16,"CPU IDU reg_ io_out_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+20,"CPU IDU reg_ io_out_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+22,"CPU IDU reg_ reg_1", false,-1, 63,0);
        tracep->declQuad(c+24,"CPU IDU reg_ reg_2", false,-1, 63,0);
        tracep->declQuad(c+26,"CPU IDU reg_ reg_3", false,-1, 63,0);
        tracep->declQuad(c+28,"CPU IDU reg_ reg_4", false,-1, 63,0);
        tracep->declQuad(c+30,"CPU IDU reg_ reg_5", false,-1, 63,0);
        tracep->declQuad(c+32,"CPU IDU reg_ reg_6", false,-1, 63,0);
        tracep->declQuad(c+34,"CPU IDU reg_ reg_7", false,-1, 63,0);
        tracep->declQuad(c+36,"CPU IDU reg_ reg_8", false,-1, 63,0);
        tracep->declQuad(c+38,"CPU IDU reg_ reg_9", false,-1, 63,0);
        tracep->declQuad(c+40,"CPU IDU reg_ reg_10", false,-1, 63,0);
        tracep->declQuad(c+42,"CPU IDU reg_ reg_11", false,-1, 63,0);
        tracep->declQuad(c+44,"CPU IDU reg_ reg_12", false,-1, 63,0);
        tracep->declQuad(c+46,"CPU IDU reg_ reg_13", false,-1, 63,0);
        tracep->declQuad(c+48,"CPU IDU reg_ reg_14", false,-1, 63,0);
        tracep->declQuad(c+50,"CPU IDU reg_ reg_15", false,-1, 63,0);
        tracep->declQuad(c+52,"CPU IDU reg_ reg_16", false,-1, 63,0);
        tracep->declQuad(c+54,"CPU IDU reg_ reg_17", false,-1, 63,0);
        tracep->declQuad(c+56,"CPU IDU reg_ reg_18", false,-1, 63,0);
        tracep->declQuad(c+58,"CPU IDU reg_ reg_19", false,-1, 63,0);
        tracep->declQuad(c+60,"CPU IDU reg_ reg_20", false,-1, 63,0);
        tracep->declQuad(c+62,"CPU IDU reg_ reg_21", false,-1, 63,0);
        tracep->declQuad(c+64,"CPU IDU reg_ reg_22", false,-1, 63,0);
        tracep->declQuad(c+66,"CPU IDU reg_ reg_23", false,-1, 63,0);
        tracep->declQuad(c+68,"CPU IDU reg_ reg_24", false,-1, 63,0);
        tracep->declQuad(c+70,"CPU IDU reg_ reg_25", false,-1, 63,0);
        tracep->declQuad(c+72,"CPU IDU reg_ reg_26", false,-1, 63,0);
        tracep->declQuad(c+74,"CPU IDU reg_ reg_27", false,-1, 63,0);
        tracep->declQuad(c+76,"CPU IDU reg_ reg_28", false,-1, 63,0);
        tracep->declQuad(c+78,"CPU IDU reg_ reg_29", false,-1, 63,0);
        tracep->declQuad(c+80,"CPU IDU reg_ reg_30", false,-1, 63,0);
        tracep->declQuad(c+82,"CPU IDU reg_ reg_31", false,-1, 63,0);
        tracep->declBus(c+1,"CPU IDU immgen io_in_inst", false,-1, 31,0);
        tracep->declQuad(c+8,"CPU IDU immgen io_out_imm", false,-1, 63,0);
        tracep->declBus(c+10,"CPU IDU immgen io_out_imm_hi", false,-1, 19,0);
        tracep->declBus(c+11,"CPU IDU immgen io_out_imm_lo", false,-1, 11,0);
        tracep->declBus(c+2,"CPU EXU io_in_alu_op", false,-1, 3,0);
        tracep->declQuad(c+16,"CPU EXU io_in_rs1", false,-1, 63,0);
        tracep->declQuad(c+18,"CPU EXU io_in_rs2", false,-1, 63,0);
        tracep->declQuad(c+14,"CPU EXU io_out_dest", false,-1, 63,0);
        tracep->declBus(c+2,"CPU EXU ALU_io_in_alu_op", false,-1, 3,0);
        tracep->declQuad(c+16,"CPU EXU ALU_io_in_src1", false,-1, 63,0);
        tracep->declQuad(c+18,"CPU EXU ALU_io_in_src2", false,-1, 63,0);
        tracep->declQuad(c+14,"CPU EXU ALU_io_out_dest", false,-1, 63,0);
        tracep->declBus(c+2,"CPU EXU ALU io_in_alu_op", false,-1, 3,0);
        tracep->declQuad(c+16,"CPU EXU ALU io_in_src1", false,-1, 63,0);
        tracep->declQuad(c+18,"CPU EXU ALU io_in_src2", false,-1, 63,0);
        tracep->declQuad(c+14,"CPU EXU ALU io_out_dest", false,-1, 63,0);
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
        tracep->fullIData(oldp+1,(vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst),32);
        tracep->fullCData(oldp+2,((0x13U == (0x7fU 
                                             & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))),4);
        tracep->fullCData(oldp+3,((0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst)),7);
        tracep->fullBit(oldp+4,((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))));
        tracep->fullCData(oldp+5,((0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+6,((0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                            >> 0x14U))),5);
        tracep->fullCData(oldp+7,((0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                            >> 7U))),5);
        tracep->fullQData(oldp+8,((QData)((IData)((
                                                   (0x13U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))
                                                    ? 
                                                   ((((vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                       >> 0x1fU)
                                                       ? 0xfffffU
                                                       : 0U) 
                                                     << 0xcU) 
                                                    | (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                       >> 0x14U))
                                                    : 0U)))),64);
        tracep->fullIData(oldp+10,(((vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U)),20);
        tracep->fullSData(oldp+11,((vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                    >> 0x14U)),12);
        tracep->fullQData(oldp+12,(vlSelf->CPU__DOT__pc),64);
        tracep->fullQData(oldp+14,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5),64);
        tracep->fullQData(oldp+16,(vlSelf->CPU__DOT__IDU__DOT__reg___05Fio_out_rs1_data),64);
        tracep->fullQData(oldp+18,(vlSelf->CPU__DOT__IDU_io_out_rs2_data),64);
        tracep->fullQData(oldp+20,(((0x1fU == (0x1fU 
                                               & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                  >> 0x14U)))
                                     ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31
                                     : ((0x1eU == (0x1fU 
                                                   & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                      >> 0x14U)))
                                         ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30
                                         : ((0x1dU 
                                             == (0x1fU 
                                                 & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                    >> 0x14U)))
                                             ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29
                                             : ((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                     >> 0x14U)))
                                                 ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27
                                                  : vlSelf->CPU__DOT__IDU__DOT__reg___DOT___GEN_58)))))),64);
        tracep->fullQData(oldp+22,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1),64);
        tracep->fullQData(oldp+24,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2),64);
        tracep->fullQData(oldp+26,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3),64);
        tracep->fullQData(oldp+28,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4),64);
        tracep->fullQData(oldp+30,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5),64);
        tracep->fullQData(oldp+32,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6),64);
        tracep->fullQData(oldp+34,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7),64);
        tracep->fullQData(oldp+36,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8),64);
        tracep->fullQData(oldp+38,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9),64);
        tracep->fullQData(oldp+40,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10),64);
        tracep->fullQData(oldp+42,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11),64);
        tracep->fullQData(oldp+44,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12),64);
        tracep->fullQData(oldp+46,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13),64);
        tracep->fullQData(oldp+48,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14),64);
        tracep->fullQData(oldp+50,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15),64);
        tracep->fullQData(oldp+52,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16),64);
        tracep->fullQData(oldp+54,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17),64);
        tracep->fullQData(oldp+56,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18),64);
        tracep->fullQData(oldp+58,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19),64);
        tracep->fullQData(oldp+60,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20),64);
        tracep->fullQData(oldp+62,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21),64);
        tracep->fullQData(oldp+64,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22),64);
        tracep->fullQData(oldp+66,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23),64);
        tracep->fullQData(oldp+68,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24),64);
        tracep->fullQData(oldp+70,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25),64);
        tracep->fullQData(oldp+72,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26),64);
        tracep->fullQData(oldp+74,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27),64);
        tracep->fullQData(oldp+76,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28),64);
        tracep->fullQData(oldp+78,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29),64);
        tracep->fullQData(oldp+80,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30),64);
        tracep->fullQData(oldp+82,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31),64);
        tracep->fullBit(oldp+84,(vlSelf->clock));
        tracep->fullBit(oldp+85,(vlSelf->reset));
        tracep->fullIData(oldp+86,(vlSelf->io_in_inst),32);
        tracep->fullQData(oldp+87,(vlSelf->io_out_result),64);
    }
}
