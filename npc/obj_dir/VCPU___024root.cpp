// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU___024root.h"
#include "VCPU__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VCPU___024root___sequent__TOP__1(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___sequent__TOP__1\n"); );
    // Variables
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT___GEN_13;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT___GEN_26;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT___GEN_45;
    // Body
    vlSelf->CPU__DOT__pc = ((IData)(vlSelf->reset) ? 0x80000000ULL
                             : vlSelf->CPU__DOT___pc_T_1);
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x1fU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x1dU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x1eU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x1bU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x1cU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x13U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x12U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x11U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x10U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x1aU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x19U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x18U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0xeU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                               >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x17U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0xfU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                               >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x15U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x14U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0x16U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((5U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                             >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0xdU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                               >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((4U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                             >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((1U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                             >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((9U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                             >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((7U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                             >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((6U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                             >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((2U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                             >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0xbU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                               >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((3U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                             >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0xcU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                               >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((8U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                             >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10 = 0ULL;
    } else if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        if ((0xaU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                               >> 7U)))) {
            vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10 
                = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
        }
    }
    vlSelf->CPU__DOT___pc_T_1 = (4ULL + vlSelf->CPU__DOT__pc);
    CPU__DOT__IDU__DOT__reg___DOT___GEN_13 = ((0xdU 
                                               == (0x1fU 
                                                   & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                      >> 0xfU)))
                                               ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13
                                               : ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                                  >> 0xfU)))
                                                              ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1
                                                              : 0ULL)))))))))))));
    CPU__DOT__IDU__DOT__reg___DOT___GEN_45 = ((0xdU 
                                               == (0x1fU 
                                                   & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                      >> 0x14U)))
                                               ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_13
                                               : ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                           >> 0x14U)))
                                                       ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                            >> 0x14U)))
                                                        ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                             >> 0x14U)))
                                                         ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                              >> 0x14U)))
                                                          ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                               >> 0x14U)))
                                                           ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                                >> 0x14U)))
                                                            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                                 >> 0x14U)))
                                                             ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                                  >> 0x14U)))
                                                              ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_1
                                                              : 0ULL)))))))))))));
    CPU__DOT__IDU__DOT__reg___DOT___GEN_26 = ((0x1aU 
                                               == (0x1fU 
                                                   & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                      >> 0xfU)))
                                               ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26
                                               : ((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                       >> 0xfU)))
                                                   ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25
                                                   : 
                                                  ((0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                        >> 0xfU)))
                                                    ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                         >> 0xfU)))
                                                     ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23
                                                     : 
                                                    ((0x16U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                          >> 0xfU)))
                                                      ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22
                                                      : 
                                                     ((0x15U 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                           >> 0xfU)))
                                                       ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x1fU 
                                                         & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                            >> 0xfU)))
                                                        ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                             >> 0xfU)))
                                                         ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x1fU 
                                                           & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                              >> 0xfU)))
                                                          ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18
                                                          : 
                                                         ((0x11U 
                                                           == 
                                                           (0x1fU 
                                                            & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                               >> 0xfU)))
                                                           ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17
                                                           : 
                                                          ((0x10U 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                                >> 0xfU)))
                                                            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16
                                                            : 
                                                           ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                                 >> 0xfU)))
                                                             ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15
                                                             : 
                                                            ((0xeU 
                                                              == 
                                                              (0x1fU 
                                                               & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                                  >> 0xfU)))
                                                              ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14
                                                              : CPU__DOT__IDU__DOT__reg___DOT___GEN_13)))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT___GEN_58 
        = ((0x1aU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                               >> 0x14U))) ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_26
            : ((0x19U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                   >> 0x14U))) ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_25
                : ((0x18U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                       >> 0x14U))) ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_24
                    : ((0x17U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                           >> 0x14U)))
                        ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_23
                        : ((0x16U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                               >> 0x14U)))
                            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_22
                            : ((0x15U == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                   >> 0x14U)))
                                ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_21
                                : ((0x14U == (0x1fU 
                                              & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                 >> 0x14U)))
                                    ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                     >> 0x14U)))
                                        ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                >> 0x14U)))
                                            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                    >> 0x14U)))
                                                ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                         >> 0x14U)))
                                                     ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                          >> 0x14U)))
                                                      ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_14
                                                      : CPU__DOT__IDU__DOT__reg___DOT___GEN_45)))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__reg___05Fio_out_rs1_data 
        = ((0x1fU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                               >> 0xfU))) ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31
            : ((0x1eU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                   >> 0xfU))) ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30
                : ((0x1dU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                       >> 0xfU))) ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29
                    : ((0x1cU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                           >> 0xfU)))
                        ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_28
                        : ((0x1bU == (0x1fU & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                               >> 0xfU)))
                            ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_27
                            : CPU__DOT__IDU__DOT__reg___DOT___GEN_26)))));
    if ((0x13U == (0x7fU & vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst))) {
        vlSelf->CPU__DOT__IDU_io_out_rs2_data = ((0x1fU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                      >> 0x14U)))
                                                  ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_31
                                                  : 
                                                 ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                       >> 0x14U)))
                                                   ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
                                                        >> 0x14U)))
                                                    ? vlSelf->CPU__DOT__IDU__DOT__reg___DOT__reg_29
                                                    : 
                                                   ((0x1cU 
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
                                                      : vlSelf->CPU__DOT__IDU__DOT__reg___DOT___GEN_58)))));
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5 
            = (vlSelf->CPU__DOT__IDU__DOT__reg___05Fio_out_rs1_data 
               + vlSelf->CPU__DOT__IDU_io_out_rs2_data);
    } else {
        vlSelf->CPU__DOT__IDU_io_out_rs2_data = (QData)((IData)(
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
                                                                  : 0U)));
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5 = 0ULL;
    }
    vlSelf->io_out_result = vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;
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
