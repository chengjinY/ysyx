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
            tracep->chgIData(oldp+2,((IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)),32);
            tracep->chgCData(oldp+3,((0x1fU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 0xfU)))),5);
            tracep->chgCData(oldp+4,((0x1fU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 0x14U)))),5);
            tracep->chgCData(oldp+5,((0x1fU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 7U)))),5);
            tracep->chgQData(oldp+6,(vlSelf->CPU__DOT__IDU__DOT__immgen_io_out_imm),64);
            tracep->chgCData(oldp+8,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op),5);
            tracep->chgBit(oldp+9,(((0x33U != (0xfe00707fU 
                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                    & ((0x13U != (0x707fU 
                                                  & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                       & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_196)))));
            tracep->chgBit(oldp+10,(((0x33U != (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                     & ((0x13U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                        | ((0x1bU == 
                                            (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                           | ((0x3bU 
                                               != (0xfe00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                              & ((0x7033U 
                                                  != 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                 & ((0x7013U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                    | ((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                       | ((0x63U 
                                                           != 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                          & ((0x5063U 
                                                              != 
                                                              (0x707fU 
                                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                             & ((0x7063U 
                                                                 != 
                                                                 (0x707fU 
                                                                  & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                & ((0x4063U 
                                                                    != 
                                                                    (0x707fU 
                                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                   & ((0x6063U 
                                                                       != 
                                                                       (0x707fU 
                                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                      & ((0x1063U 
                                                                          != 
                                                                          (0x707fU 
                                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                         & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_234))))))))))))))));
            tracep->chgBit(oldp+11,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write));
            tracep->chgBit(oldp+12,(((0x33U != (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                     & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_344))));
            tracep->chgBit(oldp+13,(((0x33U != (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                     & ((0x13U != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                        & ((0x1bU != 
                                            (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                           & ((0x3bU 
                                               != (0xfe00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                              & ((0x7033U 
                                                  != 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                 & ((0x7013U 
                                                     != 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                    & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_388)))))))));
            tracep->chgBit(oldp+14,(((0x33U != (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                     & ((0x13U != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                        & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_490)))));
            tracep->chgBit(oldp+15,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_jalr));
            tracep->chgCData(oldp+16,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch),3);
            tracep->chgCData(oldp+17,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth),3);
            tracep->chgQData(oldp+18,((4ULL + vlSelf->CPU__DOT__pc)),64);
            tracep->chgQData(oldp+20,((((QData)((IData)(
                                                        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[0U])))),64);
            tracep->chgBit(oldp+22,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_out_cmp));
            tracep->chgQData(oldp+23,(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata),64);
            tracep->chgQData(oldp+25,(((1U & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x1fU)))
                                        ? 0xfffffffffffffULL
                                        : 0ULL)),52);
            tracep->chgSData(oldp+27,((0xfffU & (IData)(
                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                         >> 0x14U)))),12);
            tracep->chgIData(oldp+28,(((1U & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x1fU)))
                                        ? 0xffffffffU
                                        : 0U)),32);
            tracep->chgIData(oldp+29,((0xfffffU & (IData)(
                                                          (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                           >> 0xcU)))),20);
            tracep->chgBit(oldp+30,((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 7U)))));
            tracep->chgCData(oldp+31,((0x3fU & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0x19U)))),6);
            tracep->chgCData(oldp+32,((0xfU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 8U)))),4);
            tracep->chgQData(oldp+33,(((1U & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x1fU)))
                                        ? 0xfffffffffffULL
                                        : 0ULL)),44);
            tracep->chgCData(oldp+35,((0xffU & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0xcU)))),8);
            tracep->chgBit(oldp+36,((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0x14U)))));
            tracep->chgSData(oldp+37,((0x3ffU & (IData)(
                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                         >> 0x15U)))),10);
            tracep->chgCData(oldp+38,((0x7fU & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0x19U)))),7);
            tracep->chgQData(oldp+39,(vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data),64);
            tracep->chgQData(oldp+41,(((0x1fU == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                             >> 0xfU))))
                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31
                                        : ((0x1eU == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0xfU))))
                                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30
                                            : ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                            >> 0xfU))))
                                                ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29
                                                : (
                                                   (0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27
                                                     : vlSelf->CPU__DOT__EXU__DOT__regs__DOT___GEN_26)))))),64);
            tracep->chgQData(oldp+43,(vlSelf->CPU__DOT__EXU__DOT__regs_io_out_rs2_data),64);
            tracep->chgQData(oldp+45,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1),64);
            tracep->chgQData(oldp+47,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2),64);
            tracep->chgQData(oldp+49,(vlSelf->CPU__DOT__EXU__DOT__mem_rdata),64);
            tracep->chgCData(oldp+51,(((3U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                        ? 0xffU : (
                                                   (2U 
                                                    == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                    ? 0xfU
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                     ? 3U
                                                     : 
                                                    (0U 
                                                     == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth)))))),8);
            tracep->chgQData(oldp+52,(((4U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                        ? (((QData)((IData)(
                                                            vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_97[0U])))
                                        : (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_out_cmp)))),64);
            tracep->chgCData(oldp+54,((0xffU & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))),8);
            tracep->chgSData(oldp+55,((0xffffU & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))),16);
            tracep->chgIData(oldp+56,((IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)),32);
            tracep->chgQData(oldp+57,(((1U & (IData)(
                                                     (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                      >> 7U)))
                                        ? 0xffffffffffffffULL
                                        : 0ULL)),56);
            tracep->chgQData(oldp+59,(((1U & (IData)(
                                                     (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                      >> 0xfU)))
                                        ? 0xffffffffffffULL
                                        : 0ULL)),48);
            tracep->chgIData(oldp+61,(((1U & (IData)(
                                                     (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                      >> 0x1fU)))
                                        ? 0xffffffffU
                                        : 0U)),32);
            tracep->chgQData(oldp+62,(((6U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                        ? (((QData)((IData)(
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                                         >> 0x1fU)))
                                                              ? 0xffffffffU
                                                              : 0U))) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))
                                        : ((5U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                            ? ((((1U 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                             >> 0xfU)))
                                                  ? 0xffffffffffffULL
                                                  : 0ULL) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))))
                                            : ((4U 
                                                == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                ? (
                                                   (((1U 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                                 >> 7U)))
                                                      ? 0xffffffffffffffULL
                                                      : 0ULL) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))))
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                    ? (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))
                                                     : 
                                                    ((0U 
                                                      == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                      ? (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))
                                                      : vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))))),64);
            tracep->chgQData(oldp+64,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1),64);
            tracep->chgQData(oldp+66,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2),64);
            tracep->chgQData(oldp+68,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3),64);
            tracep->chgQData(oldp+70,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4),64);
            tracep->chgQData(oldp+72,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5),64);
            tracep->chgQData(oldp+74,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6),64);
            tracep->chgQData(oldp+76,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7),64);
            tracep->chgQData(oldp+78,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8),64);
            tracep->chgQData(oldp+80,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9),64);
            tracep->chgQData(oldp+82,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10),64);
            tracep->chgQData(oldp+84,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11),64);
            tracep->chgQData(oldp+86,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12),64);
            tracep->chgQData(oldp+88,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13),64);
            tracep->chgQData(oldp+90,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14),64);
            tracep->chgQData(oldp+92,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15),64);
            tracep->chgQData(oldp+94,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16),64);
            tracep->chgQData(oldp+96,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17),64);
            tracep->chgQData(oldp+98,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18),64);
            tracep->chgQData(oldp+100,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19),64);
            tracep->chgQData(oldp+102,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20),64);
            tracep->chgQData(oldp+104,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21),64);
            tracep->chgQData(oldp+106,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22),64);
            tracep->chgQData(oldp+108,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23),64);
            tracep->chgQData(oldp+110,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24),64);
            tracep->chgQData(oldp+112,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25),64);
            tracep->chgQData(oldp+114,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26),64);
            tracep->chgQData(oldp+116,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27),64);
            tracep->chgQData(oldp+118,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28),64);
            tracep->chgQData(oldp+120,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29),64);
            tracep->chgQData(oldp+122,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30),64);
            tracep->chgQData(oldp+124,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31),64);
            tracep->chgIData(oldp+126,((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4)),32);
            tracep->chgIData(oldp+127,(((1U & (IData)(
                                                      (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+128,((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14)),32);
            tracep->chgIData(oldp+129,(((1U & (IData)(
                                                      (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+130,((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25)),32);
            tracep->chgIData(oldp+131,(((1U & (IData)(
                                                      (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+132,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U]),32);
            tracep->chgIData(oldp+133,(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+134,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_37[0U]),32);
            tracep->chgIData(oldp+135,(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_37[0U] 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+136,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5),32);
            tracep->chgIData(oldp+137,(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
            tracep->chgIData(oldp+138,(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6),32);
            tracep->chgIData(oldp+139,(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6 
                                         >> 0x1fU) ? 0xffffffffU
                                         : 0U)),32);
        }
        tracep->chgBit(oldp+140,(vlSelf->clock));
        tracep->chgBit(oldp+141,(vlSelf->reset));
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
