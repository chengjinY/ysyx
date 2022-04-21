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
        tracep->declBit(c+6,"clock", false,-1);
        tracep->declBit(c+7,"reset", false,-1);
        tracep->declBit(c+6,"CPU clock", false,-1);
        tracep->declBit(c+7,"CPU reset", false,-1);
        tracep->declQuad(c+1,"CPU IFU_io_in_addr", false,-1, 63,0);
        tracep->declQuad(c+1,"CPU pc", false,-1, 63,0);
        tracep->declQuad(c+1,"CPU IFU io_in_addr", false,-1, 63,0);
        tracep->declBit(c+8,"CPU IFU fetchmem_wen", false,-1);
        tracep->declQuad(c+1,"CPU IFU fetchmem_raddr", false,-1, 63,0);
        tracep->declQuad(c+3,"CPU IFU fetchmem_rdata", false,-1, 63,0);
        tracep->declQuad(c+9,"CPU IFU fetchmem_waddr", false,-1, 63,0);
        tracep->declQuad(c+9,"CPU IFU fetchmem_wdata", false,-1, 63,0);
        tracep->declBus(c+11,"CPU IFU fetchmem_mask", false,-1, 7,0);
        tracep->declBus(c+5,"CPU IFU ebreak_inst", false,-1, 31,0);
        tracep->declBit(c+8,"CPU IFU fetchmem wen", false,-1);
        tracep->declQuad(c+1,"CPU IFU fetchmem raddr", false,-1, 63,0);
        tracep->declQuad(c+3,"CPU IFU fetchmem rdata", false,-1, 63,0);
        tracep->declQuad(c+9,"CPU IFU fetchmem waddr", false,-1, 63,0);
        tracep->declQuad(c+9,"CPU IFU fetchmem wdata", false,-1, 63,0);
        tracep->declBus(c+11,"CPU IFU fetchmem mask", false,-1, 7,0);
        tracep->declBus(c+5,"CPU IFU ebreak inst", false,-1, 31,0);
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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->CPU__DOT__pc),64);
        tracep->fullQData(oldp+3,(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata),64);
        tracep->fullIData(oldp+5,((IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                           >> 0x20U))),32);
        tracep->fullBit(oldp+6,(vlSelf->clock));
        tracep->fullBit(oldp+7,(vlSelf->reset));
        tracep->fullBit(oldp+8,(0U));
        tracep->fullQData(oldp+9,(0ULL),64);
        tracep->fullCData(oldp+11,(0U),8);
    }
}
