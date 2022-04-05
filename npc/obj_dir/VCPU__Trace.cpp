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
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst),32);
            tracep->chgCData(oldp+1,((0x13U == (0x7fU 
                                                & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))),4);
            tracep->chgCData(oldp+2,((0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst)),7);
            tracep->chgBit(oldp+3,((0x13U == (0x7fU 
                                              & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))));
            tracep->chgCData(oldp+4,((0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+5,((0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                               >> 0x14U))),5);
            tracep->chgCData(oldp+6,((0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                               >> 7U))),5);
            tracep->chgQData(oldp+7,((QData)((IData)(
                                                     ((0x13U 
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
            tracep->chgIData(oldp+9,(((vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                       >> 0x1fU) ? 0xfffffU
                                       : 0U)),20);
            tracep->chgSData(oldp+10,((vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                       >> 0x14U)),12);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+11,(vlSelf->CPU__DOT__pc),64);
            tracep->chgQData(oldp+13,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5),64);
            tracep->chgQData(oldp+15,(vlSelf->CPU__DOT__IDU__DOT__reg___05Fio_out_rs1_data),64);
            tracep->chgQData(oldp+17,(vlSelf->CPU__DOT__IDU_io_out_rs2_data),64);
            tracep->chgQData(oldp+19,(((0x1fU == (0x1fU 
                                                  & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                     >> 0x14U)))
                                        ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31
                                        : ((0x1eU == 
                                            (0x1fU 
                                             & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                >> 0x14U)))
                                            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30
                                            : ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                    >> 0x14U)))
                                                ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29
                                                : (
                                                   (0x1cU 
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
            tracep->chgQData(oldp+21,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1),64);
            tracep->chgQData(oldp+23,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2),64);
            tracep->chgQData(oldp+25,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3),64);
            tracep->chgQData(oldp+27,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4),64);
            tracep->chgQData(oldp+29,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5),64);
            tracep->chgQData(oldp+31,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6),64);
            tracep->chgQData(oldp+33,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7),64);
            tracep->chgQData(oldp+35,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8),64);
            tracep->chgQData(oldp+37,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9),64);
            tracep->chgQData(oldp+39,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10),64);
            tracep->chgQData(oldp+41,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11),64);
            tracep->chgQData(oldp+43,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12),64);
            tracep->chgQData(oldp+45,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13),64);
            tracep->chgQData(oldp+47,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14),64);
            tracep->chgQData(oldp+49,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15),64);
            tracep->chgQData(oldp+51,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16),64);
            tracep->chgQData(oldp+53,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17),64);
            tracep->chgQData(oldp+55,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18),64);
            tracep->chgQData(oldp+57,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19),64);
            tracep->chgQData(oldp+59,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20),64);
            tracep->chgQData(oldp+61,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21),64);
            tracep->chgQData(oldp+63,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22),64);
            tracep->chgQData(oldp+65,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23),64);
            tracep->chgQData(oldp+67,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24),64);
            tracep->chgQData(oldp+69,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25),64);
            tracep->chgQData(oldp+71,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26),64);
            tracep->chgQData(oldp+73,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27),64);
            tracep->chgQData(oldp+75,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28),64);
            tracep->chgQData(oldp+77,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29),64);
            tracep->chgQData(oldp+79,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30),64);
            tracep->chgQData(oldp+81,(vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31),64);
        }
        tracep->chgBit(oldp+83,(vlSelf->clock));
        tracep->chgBit(oldp+84,(vlSelf->reset));
        tracep->chgIData(oldp+85,(vlSelf->io_in_inst),32);
        tracep->chgQData(oldp+86,(vlSelf->io_out_result),64);
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
