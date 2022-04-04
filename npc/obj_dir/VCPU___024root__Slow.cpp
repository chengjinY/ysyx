// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU___024root.h"
#include "VCPU__Syms.h"

//==========


void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf);

VCPU___024root::VCPU___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VCPU___024root___ctor_var_reset(this);
}

void VCPU___024root::__Vconfigure(VCPU__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VCPU___024root::~VCPU___024root() {
}

void VCPU___024root___eval_initial(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VCPU___024root___settle__TOP__2(VCPU___024root* vlSelf);

void VCPU___024root___eval_settle(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_settle\n"); );
    // Body
    VCPU___024root___settle__TOP__2(vlSelf);
}

void VCPU___024root___final(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___final\n"); );
}

void VCPU___024root___ctor_var_reset(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_inst = VL_RAND_RESET_I(32);
    vlSelf->io_out = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT___GEN_26 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
