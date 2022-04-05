// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU___024root.h"
#include "VCPU__Syms.h"

#include "verilated_dpi.h"

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

void VCPU___024unit____Vdpiimwrap_get_inst_TOP____024unit(IData/*31:0*/ &get_inst__Vfuncrtn);

void VCPU___024root___settle__TOP__2(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___settle__TOP__2\n"); );
    // Variables
    IData/*31:0*/ __Vfunc_get_inst__0__Vfuncout;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT___GEN_13;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT___GEN_26;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT___GEN_45;
    // Body
    VCPU___024unit____Vdpiimwrap_get_inst_TOP____024unit(__Vfunc_get_inst__0__Vfuncout);
    vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst 
        = __Vfunc_get_inst__0__Vfuncout;
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

void VCPU___024root___eval_initial(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

void VCPU___024root___eval_settle(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_settle\n"); );
    // Body
    VCPU___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
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
    vlSelf->io_in_inst = VL_RAND_RESET_I(32);
    vlSelf->io_out_result = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IDU_io_out_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT___pc_T_1 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__IFU__DOT__fetchinst_out_inst = VL_RAND_RESET_I(32);
    vlSelf->CPU__DOT__IDU__DOT__reg___05Fio_out_rs1_data = VL_RAND_RESET_Q(64);
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
    vlSelf->CPU__DOT__IDU__DOT__reg___DOT___GEN_58 = VL_RAND_RESET_Q(64);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5 = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
