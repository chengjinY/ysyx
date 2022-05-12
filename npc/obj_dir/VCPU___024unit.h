// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VCPU.h for the primary calling header

#ifndef VERILATED_VCPU___024UNIT_H_
#define VERILATED_VCPU___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class VCPU__Syms;
class VCPU_VerilatedVcd;


//----------

VL_MODULE(VCPU___024unit) {
  public:

    // INTERNAL VARIABLES
    VCPU__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VCPU___024unit);  ///< Copying not allowed
  public:
    VCPU___024unit(const char* name);
    ~VCPU___024unit();

    // INTERNAL METHODS
    void __Vconfigure(VCPU__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
