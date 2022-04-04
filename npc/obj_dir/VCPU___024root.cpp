// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU___024root.h"
#include "VCPU__Syms.h"

//==========

VL_INLINE_OPT void VCPU___024root___sequent__TOP__1(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___sequent__TOP__1\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27 = 0ULL;
    } else if ((0x1bU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31 = 0ULL;
    } else if ((0x1fU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30 = 0ULL;
    } else if ((0x1eU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28 = 0ULL;
    } else if ((0x1cU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29 = 0ULL;
    } else if ((0x1dU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22 = 0ULL;
    } else if ((0x16U == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21 = 0ULL;
    } else if ((0x15U == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20 = 0ULL;
    } else if ((0x14U == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24 = 0ULL;
    } else if ((0x18U == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23 = 0ULL;
    } else if ((0x17U == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25 = 0ULL;
    } else if ((0x19U == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26 = 0ULL;
    } else if ((0x1aU == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14 = 0ULL;
    } else if ((0xeU == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15 = 0ULL;
    } else if ((0xfU == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16 = 0ULL;
    } else if ((0x10U == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17 = 0ULL;
    } else if ((0x11U == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18 = 0ULL;
    } else if ((0x12U == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19 = 0ULL;
    } else if ((0x13U == (0x1fU & (vlSelf->io_inst 
                                   >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9 = 0ULL;
    } else if ((9U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8 = 0ULL;
    } else if ((8U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7 = 0ULL;
    } else if ((7U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5 = 0ULL;
    } else if ((5U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10 = 0ULL;
    } else if ((0xaU == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1 = 0ULL;
    } else if ((1U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6 = 0ULL;
    } else if ((6U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11 = 0ULL;
    } else if ((0xbU == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4 = 0ULL;
    } else if ((4U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2 = 0ULL;
    } else if ((2U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3 = 0ULL;
    } else if ((3U == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12 = 0ULL;
    } else if ((0xcU == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13 = 0ULL;
    } else if ((0xdU == (0x1fU & (vlSelf->io_inst >> 7U)))) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13 
            = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
    }
}

VL_INLINE_OPT void VCPU___024root___settle__TOP__2(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___settle__TOP__2\n"); );
    // Variables
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT___GEN_13;
    // Body
    CPU__DOT__IDU__DOT__reg___DOT___GEN_13 = ((0xdU 
                                               == (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU)))
                                               ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13
                                               : ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->io_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->io_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->io_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->io_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->io_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->io_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->io_inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->io_inst 
                                                                  >> 0xfU)))
                                                              ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1
                                                              : 0ULL)))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT___GEN_26 
        = ((0x1aU == (0x1fU & (vlSelf->io_inst >> 0xfU)))
            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26
            : ((0x19U == (0x1fU & (vlSelf->io_inst 
                                   >> 0xfU))) ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25
                : ((0x18U == (0x1fU & (vlSelf->io_inst 
                                       >> 0xfU))) ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24
                    : ((0x17U == (0x1fU & (vlSelf->io_inst 
                                           >> 0xfU)))
                        ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23
                        : ((0x16U == (0x1fU & (vlSelf->io_inst 
                                               >> 0xfU)))
                            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22
                            : ((0x15U == (0x1fU & (vlSelf->io_inst 
                                                   >> 0xfU)))
                                ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->io_inst 
                                                 >> 0xfU)))
                                    ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0xfU)))
                                        ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->io_inst 
                                                >> 0xfU)))
                                            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->io_inst 
                                                    >> 0xfU)))
                                                ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->io_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->io_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->io_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14
                                                      : CPU__DOT__IDU__DOT__reg___DOT___GEN_13)))))))))))));
    vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest = (((0x1fU 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->io_inst 
                                                     >> 0xfU)))
                                                 ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31
                                                 : 
                                                ((0x1eU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->io_inst 
                                                      >> 0xfU)))
                                                  ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30
                                                  : 
                                                 ((0x1dU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->io_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29
                                                   : 
                                                  ((0x1cU 
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
                                                     : vlSelf->CPU__DOT__IDU__DOT__reg___DOT___GEN_26))))) 
                                               + (QData)((IData)(
                                                                 ((((vlSelf->io_inst 
                                                                     >> 0x1fU)
                                                                     ? 0xfffffU
                                                                     : 0U) 
                                                                   << 0xcU) 
                                                                  | (vlSelf->io_inst 
                                                                     >> 0x14U)))));
    vlSelf->io_out = vlSelf->CPU__DOT__EXU__DOT__ALU_io_dest;
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
    VCPU___024root___settle__TOP__2(vlSelf);
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
