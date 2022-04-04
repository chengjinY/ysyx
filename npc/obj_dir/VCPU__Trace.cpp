// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


void VCPU___024root__traceChgSub0(VCPU___024root* vlSelf, VerilatedVcd* tracep);

void VCPU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VCPU___024root* const __restrict vlSelf = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VCPU___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VCPU___024root__traceChgSub0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1),64);
            tracep->chgQData(oldp+2,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2),64);
            tracep->chgQData(oldp+4,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3),64);
            tracep->chgQData(oldp+6,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4),64);
            tracep->chgQData(oldp+8,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5),64);
            tracep->chgQData(oldp+10,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6),64);
            tracep->chgQData(oldp+12,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7),64);
            tracep->chgQData(oldp+14,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8),64);
            tracep->chgQData(oldp+16,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9),64);
            tracep->chgQData(oldp+18,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10),64);
            tracep->chgQData(oldp+20,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11),64);
            tracep->chgQData(oldp+22,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12),64);
            tracep->chgQData(oldp+24,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13),64);
            tracep->chgQData(oldp+26,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14),64);
            tracep->chgQData(oldp+28,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15),64);
            tracep->chgQData(oldp+30,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16),64);
            tracep->chgQData(oldp+32,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17),64);
            tracep->chgQData(oldp+34,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18),64);
            tracep->chgQData(oldp+36,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19),64);
            tracep->chgQData(oldp+38,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20),64);
            tracep->chgQData(oldp+40,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21),64);
            tracep->chgQData(oldp+42,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22),64);
            tracep->chgQData(oldp+44,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23),64);
            tracep->chgQData(oldp+46,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24),64);
            tracep->chgQData(oldp+48,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25),64);
            tracep->chgQData(oldp+50,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26),64);
            tracep->chgQData(oldp+52,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27),64);
            tracep->chgQData(oldp+54,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28),64);
            tracep->chgQData(oldp+56,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29),64);
            tracep->chgQData(oldp+58,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30),64);
            tracep->chgQData(oldp+60,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31),64);
        }
        tracep->chgBit(oldp+62,(vlSelf->clock));
        tracep->chgBit(oldp+63,(vlSelf->reset));
        tracep->chgIData(oldp+64,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+65,(vlSelf->io_out),64);
        tracep->chgQData(oldp+67,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest),64);
        tracep->chgQData(oldp+69,(((0x1fU == (0x1fU 
                                              & (vlSelf->io_inst 
                                                 >> 0xfU)))
                                    ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31
                                    : ((0x1eU == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0xfU)))
                                        ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30
                                        : ((0x1dU == 
                                            (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 0xfU)))
                                            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29
                                            : ((0x1cU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0xfU)))
                                                ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27
                                                    : vlSelf->CPU__DOT__IDU__DOT__reg___DOT___GEN_26)))))),64);
        tracep->chgQData(oldp+71,((QData)((IData)((
                                                   (((vlSelf->io_inst 
                                                      >> 0x1fU)
                                                      ? 0xfffffU
                                                      : 0U) 
                                                    << 0xcU) 
                                                   | (vlSelf->io_inst 
                                                      >> 0x14U))))),64);
        tracep->chgCData(oldp+73,((0x1fU & (vlSelf->io_inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+74,((0x1fU & (vlSelf->io_inst 
                                            >> 7U))),5);
        tracep->chgIData(oldp+75,(((vlSelf->io_inst 
                                    >> 0x1fU) ? 0xfffffU
                                    : 0U)),20);
        tracep->chgSData(oldp+76,((vlSelf->io_inst 
                                   >> 0x14U)),12);
    }
}

void VCPU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VCPU___024root* const __restrict vlSelf = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
