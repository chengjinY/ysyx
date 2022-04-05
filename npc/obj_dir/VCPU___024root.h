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
    VL_IN(io_in_inst,31,0);
    VL_OUT64(io_out_result,63,0);

    // LOCAL SIGNALS
    IData/*31:0*/ CPU__DOT__IFU__DOT__fetchinst_out_inst;
    QData/*63:0*/ CPU__DOT__IDU_io_out_rs2_data;
    QData/*63:0*/ CPU__DOT__pc;
    QData/*63:0*/ CPU__DOT___pc_T_1;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___05Fio_out_rs1_data;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_1;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_2;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_3;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_4;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_5;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_6;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_7;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_8;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_9;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_10;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_11;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_12;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_13;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_14;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_15;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_16;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_17;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_18;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_19;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_20;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_21;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_22;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_23;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_24;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_25;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_26;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_27;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_28;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_29;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_30;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT__reg_31;
    QData/*63:0*/ CPU__DOT__IDU__DOT__reg___DOT___GEN_58;
    QData/*63:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_5;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clock;
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
