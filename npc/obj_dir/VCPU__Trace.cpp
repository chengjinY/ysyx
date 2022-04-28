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
            tracep->chgCData(oldp+8,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op),4);
            tracep->chgBit(oldp+9,(((0x33U != (0xfe00707fU 
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
                                                   & ((0x17U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                      | (0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))));
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
                                                        != 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                       & ((0x6fU 
                                                           != 
                                                           (0x7fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                          & ((0x67U 
                                                              == 
                                                              (0x707fU 
                                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                             | ((0x37U 
                                                                 == 
                                                                 (0x7fU 
                                                                  & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                | (0x1013U 
                                                                   == 
                                                                   (0xfc00707fU 
                                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))))))))))))));
            tracep->chgBit(oldp+11,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write));
            tracep->chgBit(oldp+12,(((0x33U != (0xfe00707fU 
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
                                                    & ((0x17U 
                                                        != 
                                                        (0x7fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                       & (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))));
            tracep->chgBit(oldp+13,(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_jalr));
            tracep->chgQData(oldp+14,((4ULL + vlSelf->CPU__DOT__pc)),64);
            tracep->chgQData(oldp+16,((((QData)((IData)(
                                                        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_21[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_21[0U])))),64);
            tracep->chgQData(oldp+18,(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata),64);
            tracep->chgQData(oldp+20,(((1U & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x1fU)))
                                        ? 0xfffffffffffffULL
                                        : 0ULL)),52);
            tracep->chgSData(oldp+22,((0xfffU & (IData)(
                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                         >> 0x14U)))),12);
            tracep->chgIData(oldp+23,(((1U & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x1fU)))
                                        ? 0xffffffffU
                                        : 0U)),32);
            tracep->chgIData(oldp+24,((0xfffffU & (IData)(
                                                          (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                           >> 0xcU)))),20);
            tracep->chgBit(oldp+25,((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 7U)))));
            tracep->chgCData(oldp+26,((0x3fU & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0x19U)))),6);
            tracep->chgCData(oldp+27,((0xfU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 8U)))),4);
            tracep->chgQData(oldp+28,(((1U & (IData)(
                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                      >> 0x1fU)))
                                        ? 0xfffffffffffULL
                                        : 0ULL)),44);
            tracep->chgCData(oldp+30,((0xffU & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0xcU)))),8);
            tracep->chgBit(oldp+31,((1U & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0x14U)))));
            tracep->chgSData(oldp+32,((0x3ffU & (IData)(
                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                         >> 0x15U)))),10);
            tracep->chgCData(oldp+33,((0x7fU & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0x19U)))),7);
            tracep->chgQData(oldp+34,(vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data),64);
            tracep->chgQData(oldp+36,(((0x1fU == (0x1fU 
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
            tracep->chgQData(oldp+38,(((0x1fU == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                             >> 0x14U))))
                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31
                                        : ((0x1eU == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0x14U))))
                                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30
                                            : ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                            >> 0x14U))))
                                                ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29
                                                : (
                                                   (0x1cU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0x14U))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0x14U))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27
                                                     : vlSelf->CPU__DOT__EXU__DOT__regs__DOT___GEN_58)))))),64);
            tracep->chgQData(oldp+40,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1),64);
            tracep->chgQData(oldp+42,(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2),64);
            tracep->chgQData(oldp+44,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1),64);
            tracep->chgQData(oldp+46,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2),64);
            tracep->chgQData(oldp+48,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3),64);
            tracep->chgQData(oldp+50,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4),64);
            tracep->chgQData(oldp+52,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5),64);
            tracep->chgQData(oldp+54,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6),64);
            tracep->chgQData(oldp+56,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7),64);
            tracep->chgQData(oldp+58,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8),64);
            tracep->chgQData(oldp+60,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9),64);
            tracep->chgQData(oldp+62,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10),64);
            tracep->chgQData(oldp+64,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11),64);
            tracep->chgQData(oldp+66,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12),64);
            tracep->chgQData(oldp+68,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13),64);
            tracep->chgQData(oldp+70,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14),64);
            tracep->chgQData(oldp+72,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15),64);
            tracep->chgQData(oldp+74,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16),64);
            tracep->chgQData(oldp+76,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17),64);
            tracep->chgQData(oldp+78,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18),64);
            tracep->chgQData(oldp+80,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19),64);
            tracep->chgQData(oldp+82,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20),64);
            tracep->chgQData(oldp+84,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21),64);
            tracep->chgQData(oldp+86,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22),64);
            tracep->chgQData(oldp+88,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23),64);
            tracep->chgQData(oldp+90,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24),64);
            tracep->chgQData(oldp+92,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25),64);
            tracep->chgQData(oldp+94,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26),64);
            tracep->chgQData(oldp+96,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27),64);
            tracep->chgQData(oldp+98,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28),64);
            tracep->chgQData(oldp+100,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29),64);
            tracep->chgQData(oldp+102,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30),64);
            tracep->chgQData(oldp+104,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31),64);
            tracep->chgQData(oldp+106,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0]),64);
            tracep->chgQData(oldp+108,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[1]),64);
            tracep->chgQData(oldp+110,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[2]),64);
            tracep->chgQData(oldp+112,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[3]),64);
            tracep->chgQData(oldp+114,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[4]),64);
            tracep->chgQData(oldp+116,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[5]),64);
            tracep->chgQData(oldp+118,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[6]),64);
            tracep->chgQData(oldp+120,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[7]),64);
            tracep->chgQData(oldp+122,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[8]),64);
            tracep->chgQData(oldp+124,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[9]),64);
            tracep->chgQData(oldp+126,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[10]),64);
            tracep->chgQData(oldp+128,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[11]),64);
            tracep->chgQData(oldp+130,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[12]),64);
            tracep->chgQData(oldp+132,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[13]),64);
            tracep->chgQData(oldp+134,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[14]),64);
            tracep->chgQData(oldp+136,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[15]),64);
            tracep->chgQData(oldp+138,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[16]),64);
            tracep->chgQData(oldp+140,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[17]),64);
            tracep->chgQData(oldp+142,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[18]),64);
            tracep->chgQData(oldp+144,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[19]),64);
            tracep->chgQData(oldp+146,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[20]),64);
            tracep->chgQData(oldp+148,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[21]),64);
            tracep->chgQData(oldp+150,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[22]),64);
            tracep->chgQData(oldp+152,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[23]),64);
            tracep->chgQData(oldp+154,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[24]),64);
            tracep->chgQData(oldp+156,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[25]),64);
            tracep->chgQData(oldp+158,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[26]),64);
            tracep->chgQData(oldp+160,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[27]),64);
            tracep->chgQData(oldp+162,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[28]),64);
            tracep->chgQData(oldp+164,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[29]),64);
            tracep->chgQData(oldp+166,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[30]),64);
            tracep->chgQData(oldp+168,(vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[31]),64);
            tracep->chgIData(oldp+170,(((1U & (IData)(
                                                      (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_3 
                                                       >> 0x1fU)))
                                         ? 0xffffffffU
                                         : 0U)),32);
        }
        tracep->chgBit(oldp+171,(vlSelf->clock));
        tracep->chgBit(oldp+172,(vlSelf->reset));
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
