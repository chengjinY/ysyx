// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VCPU__Syms;
class VCPU_VerilatedVcd;
class VCPU___024unit;


//----------

VL_MODULE(VCPU___024root) {
  public:
    // CELLS
    VCPU___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);

    // LOCAL SIGNALS
    QData/*63:0*/ CPU__DOT__pc;
    QData/*63:0*/ CPU__DOT___pc_T_1;
    QData/*63:0*/ CPU__DOT__IFU__DOT__fetchmem_rdata;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    VCPU__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCPU___024root);  ///< Copying not allowed
  public:
    VCPU___024root(const char* name);
    ~VCPU___024root();

    // INTERNAL METHODS
    void __Vconfigure(VCPU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
