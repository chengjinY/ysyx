// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU___024ROOT_H_
#define VERILATED_VCPU___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VCPU__Syms;
class VCPU_VerilatedVcd;


//----------

VL_MODULE(VCPU___024root) {
  public:

    // PORTS
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN(io_inst,31,0);
    VL_OUT64(io_out,63,0);

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
