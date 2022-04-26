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
            tracep->chgQData(oldp+0,(vlSelf->CPU__DOT__pc),64);
            tracep->chgIData(oldp+2,((IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                              >> 0x20U))),32);
            tracep->chgCData(oldp+3,((0x1fU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 0x2fU)))),5);
            tracep->chgCData(oldp+4,((0x1fU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 0x34U)))),5);
            tracep->chgCData(oldp+5,((0x1fU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 0x27U)))),5);
            tracep->chgQData(oldp+6,((QData)((IData)(
                                                     ((0x13U 
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
            tracep->chgCData(oldp+8,((0x13U == (0x707fU 
                                                & (IData)(
                                                          (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                           >> 0x20U))))),4);
            tracep->chgBit(oldp+9,((0x13U == (0x707fU 
                                              & (IData)(
                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                         >> 0x20U))))));
            tracep->chgQData(oldp+10,(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata),64);
            tracep->chgIData(oldp+12,(((1U & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x3fU)))
                                        ? 0xfffffU : 0U)),20);
            tracep->chgSData(oldp+13,((0xfffU & (IData)(
                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                         >> 0x34U)))),12);
            tracep->chgIData(oldp+14,(((0x13U == (0x707fU 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                             >> 0x20U))))
                                        ? ((((1U & (IData)(
                                                           (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                            >> 0x3fU)))
                                              ? 0xfffffU
                                              : 0U) 
                                            << 0xcU) 
                                           | (0xfffU 
                                              & (IData)(
                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                         >> 0x34U))))
                                        : 0U)),32);
            tracep->chgQData(oldp+15,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5),64);
            tracep->chgQData(oldp+17,(vlSelf->CPU__DOT__EXU__DOT__regs_io_out_rs1_data),64);
            tracep->chgQData(oldp+19,(((0x1fU == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                             >> 0x34U))))
                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31
                                        : ((0x1eU == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0x34U))))
                                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30
                                            : ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                            >> 0x34U))))
                                                ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29
                                                : (
                                                   (0x1cU 
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
            tracep->chgQData(oldp+21,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2),64);
            tracep->chgQData(oldp+23,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1),64);
            tracep->chgQData(oldp+25,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2),64);
            tracep->chgQData(oldp+27,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3),64);
            tracep->chgQData(oldp+29,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4),64);
            tracep->chgQData(oldp+31,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5),64);
            tracep->chgQData(oldp+33,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6),64);
            tracep->chgQData(oldp+35,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7),64);
            tracep->chgQData(oldp+37,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8),64);
            tracep->chgQData(oldp+39,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9),64);
            tracep->chgQData(oldp+41,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10),64);
            tracep->chgQData(oldp+43,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11),64);
            tracep->chgQData(oldp+45,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12),64);
            tracep->chgQData(oldp+47,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13),64);
            tracep->chgQData(oldp+49,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14),64);
            tracep->chgQData(oldp+51,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15),64);
            tracep->chgQData(oldp+53,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16),64);
            tracep->chgQData(oldp+55,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17),64);
            tracep->chgQData(oldp+57,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18),64);
            tracep->chgQData(oldp+59,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19),64);
            tracep->chgQData(oldp+61,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20),64);
            tracep->chgQData(oldp+63,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21),64);
            tracep->chgQData(oldp+65,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22),64);
            tracep->chgQData(oldp+67,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23),64);
            tracep->chgQData(oldp+69,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24),64);
            tracep->chgQData(oldp+71,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25),64);
            tracep->chgQData(oldp+73,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26),64);
            tracep->chgQData(oldp+75,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27),64);
            tracep->chgQData(oldp+77,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28),64);
            tracep->chgQData(oldp+79,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29),64);
            tracep->chgQData(oldp+81,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30),64);
            tracep->chgQData(oldp+83,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31),64);
        }
        tracep->chgBit(oldp+85,(vlSelf->clock));
        tracep->chgBit(oldp+86,(vlSelf->reset));
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
