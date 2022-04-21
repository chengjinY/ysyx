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
            tracep->chgQData(oldp+2,(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata),64);
            tracep->chgIData(oldp+4,((IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                              >> 0x20U))),32);
        }
        tracep->chgBit(oldp+5,(vlSelf->clock));
        tracep->chgBit(oldp+6,(vlSelf->reset));
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
