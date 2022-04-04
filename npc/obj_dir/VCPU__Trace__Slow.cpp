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
        tracep->declBit(c+63,"clock", false,-1);
        tracep->declBit(c+64,"reset", false,-1);
        tracep->declBus(c+65,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+66,"io_out", false,-1, 63,0);
        tracep->declBit(c+63,"CPU clock", false,-1);
        tracep->declBit(c+64,"CPU reset", false,-1);
        tracep->declBus(c+65,"CPU io_inst", false,-1, 31,0);
        tracep->declQuad(c+66,"CPU io_out", false,-1, 63,0);
        tracep->declBit(c+63,"CPU IDU_clock", false,-1);
        tracep->declBit(c+64,"CPU IDU_reset", false,-1);
        tracep->declBus(c+65,"CPU IDU_io_inst", false,-1, 31,0);
        tracep->declQuad(c+68,"CPU IDU_io_rd_data", false,-1, 63,0);
        tracep->declQuad(c+70,"CPU IDU_io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+72,"CPU IDU_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+70,"CPU EXU_io_rs1", false,-1, 63,0);
        tracep->declQuad(c+72,"CPU EXU_io_rs2", false,-1, 63,0);
        tracep->declQuad(c+68,"CPU EXU_io_dest", false,-1, 63,0);
        tracep->declBit(c+63,"CPU IDU clock", false,-1);
        tracep->declBit(c+64,"CPU IDU reset", false,-1);
        tracep->declBus(c+65,"CPU IDU io_inst", false,-1, 31,0);
        tracep->declQuad(c+68,"CPU IDU io_rd_data", false,-1, 63,0);
        tracep->declQuad(c+70,"CPU IDU io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+72,"CPU IDU io_rs2_data", false,-1, 63,0);
        tracep->declBit(c+63,"CPU IDU reg__clock", false,-1);
        tracep->declBit(c+64,"CPU IDU reg__reset", false,-1);
        tracep->declBus(c+74,"CPU IDU reg__io_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+75,"CPU IDU reg__io_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+68,"CPU IDU reg__io_rd_data", false,-1, 63,0);
        tracep->declQuad(c+70,"CPU IDU reg__io_rs1_data", false,-1, 63,0);
        tracep->declBus(c+65,"CPU IDU immgen_io_inst", false,-1, 31,0);
        tracep->declQuad(c+72,"CPU IDU immgen_io_imm", false,-1, 63,0);
        tracep->declBit(c+63,"CPU IDU reg_ clock", false,-1);
        tracep->declBit(c+64,"CPU IDU reg_ reset", false,-1);
        tracep->declBus(c+74,"CPU IDU reg_ io_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+75,"CPU IDU reg_ io_rd_addr", false,-1, 4,0);
        tracep->declQuad(c+68,"CPU IDU reg_ io_rd_data", false,-1, 63,0);
        tracep->declQuad(c+70,"CPU IDU reg_ io_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+1,"CPU IDU reg_ reg_1", false,-1, 63,0);
        tracep->declQuad(c+3,"CPU IDU reg_ reg_2", false,-1, 63,0);
        tracep->declQuad(c+5,"CPU IDU reg_ reg_3", false,-1, 63,0);
        tracep->declQuad(c+7,"CPU IDU reg_ reg_4", false,-1, 63,0);
        tracep->declQuad(c+9,"CPU IDU reg_ reg_5", false,-1, 63,0);
        tracep->declQuad(c+11,"CPU IDU reg_ reg_6", false,-1, 63,0);
        tracep->declQuad(c+13,"CPU IDU reg_ reg_7", false,-1, 63,0);
        tracep->declQuad(c+15,"CPU IDU reg_ reg_8", false,-1, 63,0);
        tracep->declQuad(c+17,"CPU IDU reg_ reg_9", false,-1, 63,0);
        tracep->declQuad(c+19,"CPU IDU reg_ reg_10", false,-1, 63,0);
        tracep->declQuad(c+21,"CPU IDU reg_ reg_11", false,-1, 63,0);
        tracep->declQuad(c+23,"CPU IDU reg_ reg_12", false,-1, 63,0);
        tracep->declQuad(c+25,"CPU IDU reg_ reg_13", false,-1, 63,0);
        tracep->declQuad(c+27,"CPU IDU reg_ reg_14", false,-1, 63,0);
        tracep->declQuad(c+29,"CPU IDU reg_ reg_15", false,-1, 63,0);
        tracep->declQuad(c+31,"CPU IDU reg_ reg_16", false,-1, 63,0);
        tracep->declQuad(c+33,"CPU IDU reg_ reg_17", false,-1, 63,0);
        tracep->declQuad(c+35,"CPU IDU reg_ reg_18", false,-1, 63,0);
        tracep->declQuad(c+37,"CPU IDU reg_ reg_19", false,-1, 63,0);
        tracep->declQuad(c+39,"CPU IDU reg_ reg_20", false,-1, 63,0);
        tracep->declQuad(c+41,"CPU IDU reg_ reg_21", false,-1, 63,0);
        tracep->declQuad(c+43,"CPU IDU reg_ reg_22", false,-1, 63,0);
        tracep->declQuad(c+45,"CPU IDU reg_ reg_23", false,-1, 63,0);
        tracep->declQuad(c+47,"CPU IDU reg_ reg_24", false,-1, 63,0);
        tracep->declQuad(c+49,"CPU IDU reg_ reg_25", false,-1, 63,0);
        tracep->declQuad(c+51,"CPU IDU reg_ reg_26", false,-1, 63,0);
        tracep->declQuad(c+53,"CPU IDU reg_ reg_27", false,-1, 63,0);
        tracep->declQuad(c+55,"CPU IDU reg_ reg_28", false,-1, 63,0);
        tracep->declQuad(c+57,"CPU IDU reg_ reg_29", false,-1, 63,0);
        tracep->declQuad(c+59,"CPU IDU reg_ reg_30", false,-1, 63,0);
        tracep->declQuad(c+61,"CPU IDU reg_ reg_31", false,-1, 63,0);
        tracep->declBus(c+65,"CPU IDU immgen io_inst", false,-1, 31,0);
        tracep->declQuad(c+72,"CPU IDU immgen io_imm", false,-1, 63,0);
        tracep->declBus(c+76,"CPU IDU immgen io_imm_hi", false,-1, 19,0);
        tracep->declBus(c+77,"CPU IDU immgen io_imm_lo", false,-1, 11,0);
        tracep->declQuad(c+70,"CPU EXU io_rs1", false,-1, 63,0);
        tracep->declQuad(c+72,"CPU EXU io_rs2", false,-1, 63,0);
        tracep->declQuad(c+68,"CPU EXU io_dest", false,-1, 63,0);
        tracep->declQuad(c+70,"CPU EXU ALU_io_src1", false,-1, 63,0);
        tracep->declQuad(c+72,"CPU EXU ALU_io_src2", false,-1, 63,0);
        tracep->declQuad(c+68,"CPU EXU ALU_io_dest", false,-1, 63,0);
        tracep->declQuad(c+70,"CPU EXU ALU io_src1", false,-1, 63,0);
        tracep->declQuad(c+72,"CPU EXU ALU io_src2", false,-1, 63,0);
        tracep->declQuad(c+68,"CPU EXU ALU io_dest", false,-1, 63,0);
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
        tracep->fullQData(oldp+1,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1),64);
        tracep->fullQData(oldp+3,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2),64);
        tracep->fullQData(oldp+5,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3),64);
        tracep->fullQData(oldp+7,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4),64);
        tracep->fullQData(oldp+9,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5),64);
        tracep->fullQData(oldp+11,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6),64);
        tracep->fullQData(oldp+13,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7),64);
        tracep->fullQData(oldp+15,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8),64);
        tracep->fullQData(oldp+17,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9),64);
        tracep->fullQData(oldp+19,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10),64);
        tracep->fullQData(oldp+21,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11),64);
        tracep->fullQData(oldp+23,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12),64);
        tracep->fullQData(oldp+25,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13),64);
        tracep->fullQData(oldp+27,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14),64);
        tracep->fullQData(oldp+29,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15),64);
        tracep->fullQData(oldp+31,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16),64);
        tracep->fullQData(oldp+33,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17),64);
        tracep->fullQData(oldp+35,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18),64);
        tracep->fullQData(oldp+37,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19),64);
        tracep->fullQData(oldp+39,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20),64);
        tracep->fullQData(oldp+41,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21),64);
        tracep->fullQData(oldp+43,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22),64);
        tracep->fullQData(oldp+45,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23),64);
        tracep->fullQData(oldp+47,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24),64);
        tracep->fullQData(oldp+49,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25),64);
        tracep->fullQData(oldp+51,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26),64);
        tracep->fullQData(oldp+53,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27),64);
        tracep->fullQData(oldp+55,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28),64);
        tracep->fullQData(oldp+57,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29),64);
        tracep->fullQData(oldp+59,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30),64);
        tracep->fullQData(oldp+61,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31),64);
        tracep->fullBit(oldp+63,(vlSelf->clock));
        tracep->fullBit(oldp+64,(vlSelf->reset));
        tracep->fullIData(oldp+65,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+66,(vlSelf->io_out),64);
        tracep->fullQData(oldp+68,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest),64);
        tracep->fullQData(oldp+70,(((0x1fU == (0x1fU 
                                               & (vlSelf->io_inst 
                                                  >> 0xfU)))
                                     ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31
                                     : ((0x1eU == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU)))
                                         ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30
                                         : ((0x1dU 
                                             == (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0xfU)))
                                             ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29
                                             : ((0x1cU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28
                                                 : 
                                                ((0x1bU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27
                                                  : vlSelf->CPU__DOT__IDU__DOT__reg___DOT___GEN_26)))))),64);
        tracep->fullQData(oldp+72,((QData)((IData)(
                                                   ((((vlSelf->io_inst 
                                                       >> 0x1fU)
                                                       ? 0xfffffU
                                                       : 0U) 
                                                     << 0xcU) 
                                                    | (vlSelf->io_inst 
                                                       >> 0x14U))))),64);
        tracep->fullCData(oldp+74,((0x1fU & (vlSelf->io_inst 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+75,((0x1fU & (vlSelf->io_inst 
                                             >> 7U))),5);
        tracep->fullIData(oldp+76,(((vlSelf->io_inst 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U)),20);
        tracep->fullSData(oldp+77,((vlSelf->io_inst 
                                    >> 0x14U)),12);
    }
}
