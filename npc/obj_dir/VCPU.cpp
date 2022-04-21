// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VCPU.h"
#include "VCPU__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VCPU::VCPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VCPU__Syms(_vcontextp__, _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
}

VCPU::VCPU(const char* _vcname__)
    : VCPU(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VCPU::~VCPU() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VCPU___024root___eval_initial(VCPU___024root* vlSelf);
void VCPU___024root___eval_settle(VCPU___024root* vlSelf);
void VCPU___024root___eval(VCPU___024root* vlSelf);
QData VCPU___024root___change_request(VCPU___024root* vlSelf);
#ifdef VL_DEBUG
void VCPU___024root___eval_debug_assertions(VCPU___024root* vlSelf);
#endif  // VL_DEBUG
void VCPU___024root___final(VCPU___024root* vlSelf);

static void _eval_initial_loop(VCPU__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VCPU___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VCPU___024root___eval_settle(&(vlSymsp->TOP));
        VCPU___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VCPU___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/CPU.v", 29, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VCPU___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VCPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VCPU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VCPU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VCPU___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VCPU___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/CPU.v", 29, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VCPU___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VCPU::final() {
    VCPU___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VCPU::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VCPU::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VCPU___024root__traceInitTop(VCPU___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VCPU___024root*>(voidSelf);
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VCPU___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VCPU___024root__traceRegister(VCPU___024root* vlSelf, VerilatedVcd* tracep);

void VCPU::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VCPU___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
