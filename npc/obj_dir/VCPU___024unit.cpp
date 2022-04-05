// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU___024unit.h"
#include "VCPU__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" int get_inst();

VL_INLINE_OPT void VCPU___024unit____Vdpiimwrap_get_inst_TOP____024unit(IData/*31:0*/ &get_inst__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VCPU___024unit____Vdpiimwrap_get_inst_TOP____024unit\n"); );
    // Body
    int get_inst__Vfuncrtn__Vcvt;
    get_inst__Vfuncrtn__Vcvt = get_inst();
    get_inst__Vfuncrtn = get_inst__Vfuncrtn__Vcvt;
}
