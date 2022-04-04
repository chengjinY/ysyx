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
    VlWide<3>/*95:0*/ __Vtemp3;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgBit(oldp+0,(vlSelf->clock));
        tracep->chgBit(oldp+1,(vlSelf->reset));
        tracep->chgIData(oldp+2,(vlSelf->io_inst),32);
        tracep->chgQData(oldp+3,(vlSelf->io_out),64);
        tracep->chgQData(oldp+5,((QData)((IData)(((
                                                   ((vlSelf->io_inst 
                                                     >> 0x1fU)
                                                     ? 0xfffffU
                                                     : 0U) 
                                                   << 0xcU) 
                                                  | (vlSelf->io_inst 
                                                     >> 0x14U))))),64);
        VL_EXTEND_WI(65,32, __Vtemp3, ((((vlSelf->io_inst 
                                          >> 0x1fU)
                                          ? 0xfffffU
                                          : 0U) << 0xcU) 
                                       | (vlSelf->io_inst 
                                          >> 0x14U)));
        tracep->chgQData(oldp+7,((((QData)((IData)(
                                                   __Vtemp3[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               __Vtemp3[0U])))),64);
        tracep->chgIData(oldp+9,(((vlSelf->io_inst 
                                   >> 0x1fU) ? 0xfffffU
                                   : 0U)),20);
        tracep->chgSData(oldp+10,((vlSelf->io_inst 
                                   >> 0x14U)),12);
    }
}

void VCPU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    VCPU___024root* const __restrict vlSelf = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        __Vm_traceActivity[0U] = 0U;
    }
}
