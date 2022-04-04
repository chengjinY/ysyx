// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VCPU__Syms.h"


void VCPU___024root__traceInitSub0(VCPU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VCPU___024root__traceInitTop(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VCPU___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VCPU___024root__traceInitSub0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"clock", false,-1);
        tracep->declBit(c+2,"reset", false,-1);
        tracep->declBus(c+3,"io_inst", false,-1, 31,0);
        tracep->declQuad(c+4,"io_out", false,-1, 63,0);
        tracep->declBit(c+1,"CPU clock", false,-1);
        tracep->declBit(c+2,"CPU reset", false,-1);
        tracep->declBus(c+3,"CPU io_inst", false,-1, 31,0);
        tracep->declQuad(c+4,"CPU io_out", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IDU_io_inst", false,-1, 31,0);
        tracep->declQuad(c+6,"CPU IDU_io_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+6,"CPU EXU_io_rs2", false,-1, 63,0);
        tracep->declQuad(c+8,"CPU EXU_io_dest", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IDU io_inst", false,-1, 31,0);
        tracep->declQuad(c+6,"CPU IDU io_rs2_data", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IDU immgen_io_inst", false,-1, 31,0);
        tracep->declQuad(c+6,"CPU IDU immgen_io_imm", false,-1, 63,0);
        tracep->declBus(c+3,"CPU IDU immgen io_inst", false,-1, 31,0);
        tracep->declQuad(c+6,"CPU IDU immgen io_imm", false,-1, 63,0);
        tracep->declBus(c+10,"CPU IDU immgen io_imm_hi", false,-1, 19,0);
        tracep->declBus(c+11,"CPU IDU immgen io_imm_lo", false,-1, 11,0);
        tracep->declQuad(c+6,"CPU EXU io_rs2", false,-1, 63,0);
        tracep->declQuad(c+8,"CPU EXU io_dest", false,-1, 63,0);
        tracep->declQuad(c+6,"CPU EXU ALU_io_src2", false,-1, 63,0);
        tracep->declQuad(c+8,"CPU EXU ALU_io_dest", false,-1, 63,0);
        tracep->declQuad(c+6,"CPU EXU ALU io_src2", false,-1, 63,0);
        tracep->declQuad(c+8,"CPU EXU ALU io_dest", false,-1, 63,0);
    }
}

void VCPU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VCPU___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VCPU___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VCPU___024root__traceRegister(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VCPU___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VCPU___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VCPU___024root__traceCleanup, vlSelf);
    }
}

void VCPU___024root__traceFullSub0(VCPU___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VCPU___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VCPU___024root* const __restrict vlSelf = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VCPU___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VCPU___024root__traceFullSub0(VCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp2;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->clock));
        tracep->fullBit(oldp+2,(vlSelf->reset));
        tracep->fullIData(oldp+3,(vlSelf->io_inst),32);
        tracep->fullQData(oldp+4,(vlSelf->io_out),64);
        tracep->fullQData(oldp+6,((QData)((IData)((
                                                   (((vlSelf->io_inst 
                                                      >> 0x1fU)
                                                      ? 0xfffffU
                                                      : 0U) 
                                                    << 0xcU) 
                                                   | (vlSelf->io_inst 
                                                      >> 0x14U))))),64);
        VL_EXTEND_WI(65,32, __Vtemp2, ((((vlSelf->io_inst 
                                          >> 0x1fU)
                                          ? 0xfffffU
                                          : 0U) << 0xcU) 
                                       | (vlSelf->io_inst 
                                          >> 0x14U)));
        tracep->fullQData(oldp+8,((((QData)((IData)(
                                                    __Vtemp2[1U])) 
                                    << 0x20U) | (QData)((IData)(
                                                                __Vtemp2[0U])))),64);
        tracep->fullIData(oldp+10,(((vlSelf->io_inst 
                                     >> 0x1fU) ? 0xfffffU
                                     : 0U)),20);
        tracep->fullSData(oldp+11,((vlSelf->io_inst 
                                    >> 0x14U)),12);
    }
}
