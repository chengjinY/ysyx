// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU___024root.h"
#include "VCPU__Syms.h"

#include "verilated_dpi.h"

//==========

void VCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void VCPU___024unit____Vdpiimwrap_ebreak_TOP____024unit();

VL_INLINE_OPT void VCPU___024root___sequent__TOP__1(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->CPU__DOT__pc = ((IData)(vlSelf->reset) ? 0x80000000ULL
                             : vlSelf->CPU__DOT___pc_T_1);
    vlSelf->CPU__DOT___pc_T_1 = (4ULL + vlSelf->CPU__DOT__pc);
    VCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CPU__DOT__pc, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    if ((0x100073U == (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                               >> 0x20U)))) {
        VCPU___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
}

void VCPU___024root___eval(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VCPU___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VCPU___024root___change_request_1(VCPU___024root* vlSelf);

VL_INLINE_OPT QData VCPU___024root___change_request(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___change_request\n"); );
    // Body
    return (VCPU___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VCPU___024root___change_request_1(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCPU___024root___eval_debug_assertions(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
