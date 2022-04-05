// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU___024unit.h"
#include "VCPU__Syms.h"

#include "verilated_dpi.h"

//==========


void VCPU___024unit___ctor_var_reset(VCPU___024unit* vlSelf);

VCPU___024unit::VCPU___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VCPU___024unit___ctor_var_reset(this);
}

void VCPU___024unit::__Vconfigure(VCPU__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VCPU___024unit::~VCPU___024unit() {
}

void VCPU___024unit___ctor_var_reset(VCPU___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU___024unit___ctor_var_reset\n"); );
}
