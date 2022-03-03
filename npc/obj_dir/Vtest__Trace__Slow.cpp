// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtest__Syms.h"


void Vtest___024root__traceInitSub0(Vtest___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void Vtest___024root__traceInitTop(Vtest___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtest___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtest___024root__traceInitSub0(Vtest___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"f",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+1,"test a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+2,"test b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
        tracep->declBit(c+3,"test f",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    }
}

void Vtest___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) VL_ATTR_COLD;
void Vtest___024root__traceChgTop0(void* voidSelf, VerilatedFst* tracep);
void Vtest___024root__traceCleanup(void* voidSelf, VerilatedFst* /*unused*/);

void Vtest___024root__traceRegister(Vtest___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtest___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtest___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtest___024root__traceCleanup, vlSelf);
    }
}

void Vtest___024root__traceFullSub0(Vtest___024root* vlSelf, VerilatedFst* tracep) VL_ATTR_COLD;

void Vtest___024root__traceFullTop0(void* voidSelf, VerilatedFst* tracep) {
    Vtest___024root* const __restrict vlSelf = static_cast<Vtest___024root*>(voidSelf);
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtest___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtest___024root__traceFullSub0(Vtest___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtest__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->a));
        tracep->fullBit(oldp+2,(vlSelf->b));
        tracep->fullBit(oldp+3,(vlSelf->f));
    }
}
