// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtest.h for the primary calling header

#ifndef VERILATED_VTEST___024ROOT_H_
#define VERILATED_VTEST___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtest__Syms;

//----------

VL_MODULE(Vtest___024root) {
  public:

    // PORTS
    VL_IN8(a,0,0);
    VL_IN8(b,0,0);
    VL_OUT8(f,0,0);

    // INTERNAL VARIABLES
    Vtest__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtest___024root);  ///< Copying not allowed
  public:
    Vtest___024root(const char* name);
    ~Vtest___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtest__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
