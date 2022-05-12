// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VCPU.h for the primary calling header

#include "VCPU___024root.h"
#include "VCPU__Syms.h"

#include "verilated_dpi.h"

//==========

void VCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit(QData/*63:0*/ raddr, QData/*63:0*/ &rdata);
void VCPU___024unit____Vdpiimwrap_ebreak_TOP____024unit();
void VCPU___024unit____Vdpiimwrap_pmem_write_TOP____024unit(QData/*63:0*/ waddr, QData/*63:0*/ wdata, CData/*7:0*/ mask);

VL_INLINE_OPT void VCPU___024root___sequent__TOP__2(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_125;
    CData/*4:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_136;
    CData/*4:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_147;
    CData/*4:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_158;
    CData/*4:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_169;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_217;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_241;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_254;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_270;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_307;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_332;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_387;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_399;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_432;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_444;
    CData/*0:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_622;
    CData/*2:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_650;
    CData/*2:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_661;
    CData/*2:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_672;
    CData/*2:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_683;
    CData/*1:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_715;
    CData/*2:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_725;
    CData/*2:0*/ CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_736;
    CData/*0:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_7;
    CData/*0:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_14;
    VlWide<4>/*127:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143;
    VlWide<4>/*127:0*/ __Vtemp63;
    VlWide<4>/*127:0*/ __Vtemp64;
    VlWide<4>/*127:0*/ __Vtemp66;
    VlWide<4>/*127:0*/ __Vtemp67;
    VlWide<4>/*127:0*/ __Vtemp68;
    VlWide<4>/*127:0*/ __Vtemp69;
    VlWide<4>/*127:0*/ __Vtemp70;
    VlWide<4>/*127:0*/ __Vtemp71;
    VlWide<4>/*127:0*/ __Vtemp72;
    VlWide<4>/*127:0*/ __Vtemp73;
    VlWide<4>/*127:0*/ __Vtemp74;
    VlWide<4>/*127:0*/ __Vtemp75;
    VlWide<3>/*95:0*/ __Vtemp78;
    VlWide<3>/*95:0*/ __Vtemp79;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp83;
    VlWide<3>/*95:0*/ __Vtemp84;
    VlWide<4>/*127:0*/ __Vtemp85;
    VlWide<4>/*127:0*/ __Vtemp86;
    VlWide<4>/*127:0*/ __Vtemp87;
    VlWide<4>/*127:0*/ __Vtemp108;
    VlWide<4>/*127:0*/ __Vtemp109;
    VlWide<4>/*127:0*/ __Vtemp110;
    VlWide<4>/*127:0*/ __Vtemp111;
    VlWide<4>/*127:0*/ __Vtemp112;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_11;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_224;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_235;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_246;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_255;
    QData/*63:0*/ CPU__DOT__IDU__DOT__immgen__DOT___imm_T_266;
    QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT___GEN_13;
    QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT___GEN_45;
    QData/*63:0*/ CPU__DOT__EXU__DOT__regs__DOT___GEN_58;
    QData/*63:0*/ CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_123;
    // Body
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x1fU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x1dU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x1eU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x1bU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x1cU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x13U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x12U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x11U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x10U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x1aU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x19U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x18U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0xeU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                       >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x17U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0xfU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                       >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x15U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x14U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0x16U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                        >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((5U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                     >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0xdU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                       >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((4U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                     >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((1U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                     >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((9U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                     >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((7U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                     >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((6U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                     >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((2U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                     >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0xbU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                       >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((3U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                     >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0xcU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                       >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((8U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                     >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    if (vlSelf->reset) {
        vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10 = 0ULL;
    } else if (vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write) {
        if ((0xaU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                       >> 7U))))) {
            vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10 
                = vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data;
        }
    }
    vlSelf->CPU__DOT__pc = ((IData)(vlSelf->reset) ? 0x80000000ULL
                             : (((0x33U != (0xfe00707fU 
                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                 & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_571))
                                 ? (((4U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch)) 
                                     | (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_out_cmp))
                                     ? vlSelf->CPU__DOT___pc_T_3
                                     : vlSelf->CPU__DOT__snpc)
                                 : ((IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_jalr)
                                     ? (0xfffffffffffffffeULL 
                                        & (((QData)((IData)(
                                                            vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[0U]))))
                                     : vlSelf->CPU__DOT__snpc)));
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1fU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1dU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1eU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1bU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1cU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x13U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x12U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x11U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x10U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x1aU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x19U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x18U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xeU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x17U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xfU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x15U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x14U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x16U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[5U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xdU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[4U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[1U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[9U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[7U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[6U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[2U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xbU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[3U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xcU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[8U] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8;
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0xaU] 
        = vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10;
    vlSelf->CPU__DOT__snpc = (4ULL + vlSelf->CPU__DOT__pc);
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT__trace_regs__DOT__regs[0x20U] 
        = vlSelf->CPU__DOT__pc;
    VCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit(vlSelf->CPU__DOT__pc, vlSelf->__Vtask_pmem_read__0__rdata);
    vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata = vlSelf->__Vtask_pmem_read__0__rdata;
    if ((0x100073U == (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) {
        VCPU___024unit____Vdpiimwrap_ebreak_TOP____024unit();
    }
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_307 
        = ((0x2023U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x1033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((0x1013U == (0xfc00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x101bU == (0xfc00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    | ((0x103bU == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       | ((0x2033U == (0xfe00707fU 
                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x2013U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x3013U == (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x3033U == (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x40005033U 
                                       == (0xfe00707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x40005013U 
                                          == (0xfc00707fU 
                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | ((0x4000501bU 
                                             == (0xfc00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            | ((0x4000503bU 
                                                == 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                               | ((0x5033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                  | ((0x5013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                     | ((0x501bU 
                                                         == 
                                                         (0xfc00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                        | ((0x503bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                           | ((0x40000033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                              | ((0x4000003bU 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                 | ((0x4033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                    | (0x4013U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))))))))))))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_622 
        = ((0x63U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x5063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x7063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x4063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x6063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x1063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x2004033U != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x2005033U != (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x200503bU != (0xfe00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x200403bU != 
                                       (0xfe00707fU 
                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x6fU == 
                                          (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | (0x67U == 
                                            (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_432 
        = ((0x37U != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x2000033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x200003bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x6033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x2006033U != (0xfe00707fU 
                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x2007033U != (0xfe00707fU 
                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x200703bU != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x200603bU != (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x23U == (0x707fU 
                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x3023U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x1023U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | (0x2023U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_387 
        = ((0x2005033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x200503bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x200403bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x6fU != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x67U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((3U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x4003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x3003U == (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x1003U == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x5003U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x2003U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | (0x6003U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_715 
        = ((0x200003bU == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 3U : ((0x6033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 3U : ((0x2006033U == (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 3U : ((0x2007033U == 
                                       (0xfe00707fU 
                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 3U : ((0x200703bU 
                                                == 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 3U
                                                : (
                                                   (0x200603bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 3U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 3U
                                                      : 
                                                     ((0x1023U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 1U
                                                       : 
                                                      ((0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 2U
                                                        : 3U))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_650 
        = ((0x1023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 4U : ((0x2023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 4U : ((0x1033U == (0xfe00707fU 
                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 4U : ((0x1013U == (0xfc00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 4U : ((0x101bU 
                                                == 
                                                (0xfc00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 4U
                                                : (
                                                   (0x103bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 4U
                                                    : 
                                                   ((0x2033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 5U
                                                     : 
                                                    ((0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 5U
                                                      : 
                                                     ((0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 6U
                                                       : 
                                                      ((0x3033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 6U
                                                        : 4U))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_125 
        = ((0x4000501bU == (0xfc00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 0x1cU : ((0x4000503bU == (0xfe00707fU 
                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                        ? 0x1cU : ((0x5033U == (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                    ? 0x1fU : ((0x5013U 
                                                == 
                                                (0xfc00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 0x1fU
                                                : (
                                                   (0x501bU 
                                                    == 
                                                    (0xfc00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 0x1eU
                                                    : 
                                                   ((0x503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0x1eU
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 0xbU
                                                      : 
                                                     ((0x4000003bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 0xaU
                                                       : 
                                                      ((0x4033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 3U
                                                        : 
                                                       ((0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 3U
                                                         : 0U))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_217 
        = ((0x2004033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x2005033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x200503bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x200403bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & (0x6fU == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))))));
    CPU__DOT__EXU__DOT__regs__DOT___GEN_13 = ((0xdU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0xfU))))
                                               ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13
                                               : ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                               >> 0xfU))))
                                                   ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                   >> 0xfU))))
                                                       ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                    >> 0xfU))))
                                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                     >> 0xfU))))
                                                         ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                      >> 0xfU))))
                                                          ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                       >> 0xfU))))
                                                           ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                        >> 0xfU))))
                                                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                         >> 0xfU))))
                                                             ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                          >> 0xfU))))
                                                              ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1
                                                              : 0ULL)))))))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14 = ((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0x1fU)))
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 7U)) 
                                                                         << 0xbU)) 
                                                                     | ((0x7e0U 
                                                                         & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0x19U)) 
                                                                            << 5U)) 
                                                                        | (0x1eU 
                                                                           & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 8U)) 
                                                                              << 1U)))))));
    CPU__DOT__EXU__DOT__regs__DOT___GEN_45 = ((0xdU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0x14U))))
                                               ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_13
                                               : ((0xcU 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                               >> 0x14U))))
                                                   ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_12
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0x14U))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_11
                                                    : 
                                                   ((0xaU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0x14U))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_10
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0x14U))))
                                                      ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_9
                                                      : 
                                                     ((8U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                   >> 0x14U))))
                                                       ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_8
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                    >> 0x14U))))
                                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_7
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                     >> 0x14U))))
                                                         ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_6
                                                         : 
                                                        ((5U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                      >> 0x14U))))
                                                          ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_5
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                       >> 0x14U))))
                                                           ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_4
                                                           : 
                                                          ((3U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                        >> 0x14U))))
                                                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_3
                                                            : 
                                                           ((2U 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                         >> 0x14U))))
                                                             ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_2
                                                             : 
                                                            ((1U 
                                                              == 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                          >> 0x14U))))
                                                              ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_1
                                                              : 0ULL)))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_241 
        = ((0x40005033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x40005013U == (0xfc00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((0x4000501bU == (0xfc00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x4000503bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x5033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x5013U == (0xfc00707fU 
                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x501bU == (0xfc00707fU 
                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x503bU != (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x40000033U != 
                                    (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x4000003bU 
                                       != (0xfe00707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x4033U != 
                                          (0xfe00707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & (0x4013U 
                                            == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))))))))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_11 = (((QData)((IData)(
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0x1fU)))
                                                                     ? 0xffffffffU
                                                                     : 0U))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((IData)(
                                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                              >> 0xcU)) 
                                                                     << 0xcU))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62 = ((
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0x1fU)))
                                                     ? 0xfffffffffffffULL
                                                     : 0ULL) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0x19U)) 
                                                                         << 5U)) 
                                                                     | (0x1fU 
                                                                        & (IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 7U)))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2 = (((
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                               >> 0x1fU)))
                                                    ? 0xfffffffffffffULL
                                                    : 0ULL) 
                                                  << 0xcU) 
                                                 | (QData)((IData)(
                                                                   (0xfffU 
                                                                    & (IData)(
                                                                              (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                               >> 0x14U))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_332 
        = ((0x1063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x2004033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((0x2005033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x200503bU == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    | ((0x200403bU == (0xfe00707fU 
                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       | ((0x6fU == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x67U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((3U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x4003U == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x3003U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x1003U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | ((0x5003U 
                                             == (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            | ((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                               | ((0x6003U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                     | ((0x2000033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                        | ((0x200003bU 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                           | ((0x6033U 
                                                               == 
                                                               (0xfe00707fU 
                                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                              | ((0x2006033U 
                                                                  == 
                                                                  (0xfe00707fU 
                                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                 | ((0x2007033U 
                                                                     == 
                                                                     (0xfe00707fU 
                                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                    | ((0x200703bU 
                                                                        == 
                                                                        (0xfe00707fU 
                                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                       | ((0x200603bU 
                                                                           == 
                                                                           (0xfe00707fU 
                                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                          | ((0x23U 
                                                                              != 
                                                                              (0x707fU 
                                                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                             & ((0x3023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                                & ((0x1023U 
                                                                                != 
                                                                                (0x707fU 
                                                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                                                & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_307))))))))))))))))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_jalr = 
        ((0x33U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
         & ((0x13U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
            & ((0x1bU != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
               & ((0x3bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                  & ((0x7033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                     & ((0x7013U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                        & ((0x17U != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                           & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_622))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_444 
        = ((0x2005033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x200503bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x200403bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x6fU != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x67U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((3U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x4003U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x3003U != (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x1003U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x5003U != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x2003U != 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & ((0x6003U 
                                             != (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_432)))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_399 
        = ((0x1bU != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x3bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x7033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x7013U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x17U != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x63U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x5063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x7063U != (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x4063U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x6063U != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x1063U != 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & ((0x2004033U 
                                             != (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_387)))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_725 
        = ((0x67U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 3U : ((3U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 4U : ((0x4003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 0U : ((0x3003U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 3U : ((0x1003U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 5U
                                                : (
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 1U
                                                    : 
                                                   ((0x2003U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 6U
                                                     : 
                                                    ((0x6003U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 2U
                                                      : 
                                                     ((0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 3U
                                                       : 
                                                      ((0x2000033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 3U
                                                        : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_715)))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_661 
        = ((0x6003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 4U : ((0x37U == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 4U : ((0x2000033U == (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 4U : ((0x200003bU == 
                                       (0xfe00707fU 
                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 4U : ((0x6033U 
                                                == 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 4U
                                                : (
                                                   (0x2006033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 4U
                                                    : 
                                                   ((0x2007033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 4U
                                                     : 
                                                    ((0x200703bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 4U
                                                      : 
                                                     ((0x200603bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 4U
                                                       : 
                                                      ((0x23U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 4U
                                                        : 
                                                       ((0x3023U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 4U
                                                         : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_650))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_136 
        = ((0x2023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 5U : ((0x1033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 0xdU : ((0x1013U == (0xfc00707fU 
                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                ? 0xdU : ((0x101bU 
                                           == (0xfc00707fU 
                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                           ? 0xcU : 
                                          ((0x103bU 
                                            == (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                            ? 0xcU : 
                                           ((0x2033U 
                                             == (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                             ? 0U : 
                                            ((0x2013U 
                                              == (0x707fU 
                                                  & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                              ? 0U : 
                                             ((0x3013U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                               ? 0U
                                               : ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                   ? 0U
                                                   : 
                                                  ((0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 0x1dU
                                                    : 
                                                   ((0x40005013U 
                                                     == 
                                                     (0xfc00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0x1dU
                                                     : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_125))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_571 
        = ((0x13U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x1bU != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x3bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x7033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x7013U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x17U != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x63U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x5063U == (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x7063U == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x4063U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x6063U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | ((0x1063U 
                                             == (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            | (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_217)))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_229 
        = ((0x13U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x1bU != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x3bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x7033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x7013U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x17U == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x63U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x5063U != (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x7063U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x4063U != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x6063U != 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & ((0x1063U 
                                             != (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_217)))))))))))));
    vlSelf->CPU__DOT__EXU__DOT__regs__DOT___GEN_26 
        = ((0x1aU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                       >> 0xfU)))) ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26
            : ((0x19U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                           >> 0xfU))))
                ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25
                : ((0x18U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                               >> 0xfU))))
                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24
                    : ((0x17U == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0xfU))))
                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23
                        : ((0x16U == (0x1fU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 0xfU))))
                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22
                            : ((0x15U == (0x1fU & (IData)(
                                                          (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                           >> 0xfU))))
                                ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21
                                : ((0x14U == (0x1fU 
                                              & (IData)(
                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                         >> 0xfU))))
                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20
                                    : ((0x13U == (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                             >> 0xfU))))
                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (IData)(
                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                        >> 0xfU))))
                                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                            >> 0xfU))))
                                                ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14
                                                      : CPU__DOT__EXU__DOT__regs__DOT___GEN_13)))))))))))));
    CPU__DOT__EXU__DOT__regs__DOT___GEN_58 = ((0x1aU 
                                               == (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                              >> 0x14U))))
                                               ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_26
                                               : ((0x19U 
                                                   == 
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                               >> 0x14U))))
                                                   ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_25
                                                   : 
                                                  ((0x18U 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0x14U))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_24
                                                    : 
                                                   ((0x17U 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0x14U))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_23
                                                     : 
                                                    ((0x16U 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0x14U))))
                                                      ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_22
                                                      : 
                                                     ((0x15U 
                                                       == 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                   >> 0x14U))))
                                                       ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_21
                                                       : 
                                                      ((0x14U 
                                                        == 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                    >> 0x14U))))
                                                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_20
                                                        : 
                                                       ((0x13U 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                     >> 0x14U))))
                                                         ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_19
                                                         : 
                                                        ((0x12U 
                                                          == 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                      >> 0x14U))))
                                                          ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_18
                                                          : 
                                                         ((0x11U 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                       >> 0x14U))))
                                                           ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_17
                                                           : 
                                                          ((0x10U 
                                                            == 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                        >> 0x14U))))
                                                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_16
                                                            : 
                                                           ((0xfU 
                                                             == 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                         >> 0x14U))))
                                                             ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_15
                                                             : 
                                                            ((0xeU 
                                                              == 
                                                              (0x1fU 
                                                               & (IData)(
                                                                         (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                          >> 0x14U))))
                                                              ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_14
                                                              : CPU__DOT__EXU__DOT__regs__DOT___GEN_45)))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_254 
        = ((0x200603bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x23U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((0x3023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x1023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    | ((0x2023U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       | ((0x1033U != (0xfe00707fU 
                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x1013U == (0xfc00707fU 
                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x101bU == (0xfc00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x103bU != (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x2033U != (0xfe00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x2013U == 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         | ((0x3013U 
                                             == (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            | ((0x3033U 
                                                != 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                               & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_241))))))))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_224 = (
                                                   (0x4000501bU 
                                                    == 
                                                    (0xfc00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                    : 
                                                   ((0x4000503bU 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0ULL
                                                     : 
                                                    ((0x5033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 0ULL
                                                      : 
                                                     ((0x5013U 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                       : 
                                                      ((0x501bU 
                                                        == 
                                                        (0xfc00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                        : 
                                                       ((0x503bU 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 0ULL
                                                         : 
                                                        ((0x40000033U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                          ? 0ULL
                                                          : 
                                                         ((0x4000003bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                           ? 0ULL
                                                           : 
                                                          ((0x4033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                            ? 0ULL
                                                            : 
                                                           ((0x4013U 
                                                             == 
                                                             (0x707fU 
                                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                             ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                             : 0ULL))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_reg_write 
        = ((0x33U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           | ((0x13U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((0x1bU == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x3bU == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    | ((0x7033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       | ((0x7013U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x17U == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x63U != (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x5063U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x7063U != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x4063U != 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & ((0x6063U 
                                             != (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_332)))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_456 
        = ((0x1bU != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x3bU != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              & ((0x7033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 & ((0x7013U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x17U != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x63U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x5063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x7063U != (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x4063U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x6063U != (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x1063U != 
                                          (0x707fU 
                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & ((0x2004033U 
                                             != (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_444)))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_400 
        = ((0x13U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_399));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_736 
        = ((0x63U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 3U : ((0x5063U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 3U : ((0x7063U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 3U : ((0x4063U == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 3U : ((0x6063U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 3U
                                                : (
                                                   (0x1063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 3U
                                                    : 
                                                   ((0x2004033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 3U
                                                     : 
                                                    ((0x2005033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 3U
                                                      : 
                                                     ((0x200503bU 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 3U
                                                       : 
                                                      ((0x200403bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 3U
                                                        : 
                                                       ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 3U
                                                         : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_725))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_672 
        = ((0x2005033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 4U : ((0x200503bU == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 4U : ((0x200403bU == (0xfe00707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 4U : ((0x6fU == (0x7fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 4U : ((0x67U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 4U
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 4U
                                                    : 
                                                   ((0x4003U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 4U
                                                     : 
                                                    ((0x3003U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 4U
                                                      : 
                                                     ((0x1003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 4U
                                                       : 
                                                      ((0x5003U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 4U
                                                        : 
                                                       ((0x2003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 4U
                                                         : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_661))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_147 
        = ((0x37U == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 6U : ((0x2000033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 0x11U : ((0x200003bU == (0xfe00707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                 ? 0x11U : ((0x6033U 
                                             == (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                             ? 2U : 
                                            ((0x2006033U 
                                              == (0xfe00707fU 
                                                  & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                              ? 0x19U
                                              : ((0x2007033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                  ? 0x1bU
                                                  : 
                                                 ((0x200703bU 
                                                   == 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                   ? 0x1aU
                                                   : 
                                                  ((0x200603bU 
                                                    == 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 0x18U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 5U
                                                     : 
                                                    ((0x3023U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 5U
                                                      : 
                                                     ((0x1023U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 5U
                                                       : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_136))))))))))));
    vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 = ((
                                                   (0x33U 
                                                    != 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                   & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_229))
                                                   ? vlSelf->CPU__DOT__pc
                                                   : 
                                                  ((0x1fU 
                                                    == 
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                >> 0xfU))))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                 >> 0xfU))))
                                                     ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30
                                                     : 
                                                    ((0x1dU 
                                                      == 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0xfU))))
                                                      ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29
                                                      : 
                                                     ((0x1cU 
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
                                                        : vlSelf->CPU__DOT__EXU__DOT__regs__DOT___GEN_26))))));
    vlSelf->CPU__DOT__EXU__DOT__regs_io_out_rs2_data 
        = ((0x1fU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                       >> 0x14U))))
            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_31
            : ((0x1eU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                           >> 0x14U))))
                ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_30
                : ((0x1dU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                               >> 0x14U))))
                    ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_29
                    : ((0x1cU == (0x1fU & (IData)((vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                   >> 0x14U))))
                        ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_28
                        : ((0x1bU == (0x1fU & (IData)(
                                                      (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                       >> 0x14U))))
                            ? vlSelf->CPU__DOT__EXU__DOT__regs__DOT__reg_27
                            : CPU__DOT__EXU__DOT__regs__DOT___GEN_58)))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_270 
        = ((0x6fU != (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x67U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((3U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x4003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    | ((0x3003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       | ((0x1003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          | ((0x5003U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             | ((0x2003U == (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                | ((0x6003U == (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   | ((0x37U == (0x7fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      | ((0x2000033U 
                                          != (0xfe00707fU 
                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & ((0x200003bU 
                                             != (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            & ((0x6033U 
                                                != 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                               & ((0x2006033U 
                                                   != 
                                                   (0xfe00707fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                  & ((0x2007033U 
                                                      != 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                     & ((0x200703bU 
                                                         != 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                        & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_254)))))))))))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_235 = (
                                                   (0x2023U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62
                                                    : 
                                                   ((0x1033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0ULL
                                                     : 
                                                    ((0x1013U 
                                                      == 
                                                      (0xfc00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                      : 
                                                     ((0x101bU 
                                                       == 
                                                       (0xfc00707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                       : 
                                                      ((0x103bU 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 0ULL
                                                        : 
                                                       ((0x2033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 0ULL
                                                         : 
                                                        ((0x2013U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                          ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                          : 
                                                         ((0x3013U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                           ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                           : 
                                                          ((0x3033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                            ? 0ULL
                                                            : 
                                                           ((0x40005033U 
                                                             == 
                                                             (0xfe00707fU 
                                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                             ? 0ULL
                                                             : 
                                                            ((0x40005013U 
                                                              == 
                                                              (0xfc00707fU 
                                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                              ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                              : CPU__DOT__IDU__DOT__immgen__DOT___imm_T_224)))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth = 
        ((0x33U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
          ? 3U : ((0x13U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                   ? 3U : ((0x1bU == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                            ? 3U : ((0x3bU == (0xfe00707fU 
                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                     ? 3U : ((0x7033U 
                                              == (0xfe00707fU 
                                                  & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                              ? 3U : 
                                             ((0x7013U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                               ? 3U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                   ? 3U
                                                   : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_736))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_683 
        = ((0x3bU == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 4U : ((0x7033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 4U : ((0x7013U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 4U : ((0x17U == (0x7fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 4U : ((0x63U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 0U
                                                : (
                                                   (0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 1U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 2U
                                                     : 
                                                    ((0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 5U
                                                      : 
                                                     ((0x6063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 6U
                                                       : 
                                                      ((0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 7U
                                                        : 
                                                       ((0x2004033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 4U
                                                         : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_672))))))))))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_158 
        = ((0x200503bU == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 0x16U : ((0x200403bU == (0xfe00707fU 
                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                        ? 0x14U : ((0x6fU == (0x7fU 
                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                    ? 5U : ((0x67U 
                                             == (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                             ? 5U : 
                                            ((3U == 
                                              (0x707fU 
                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                              ? 5U : 
                                             ((0x4003U 
                                               == (0x707fU 
                                                   & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                               ? 5U
                                               : ((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                   ? 5U
                                                   : 
                                                  ((0x1003U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 5U
                                                    : 
                                                   ((0x5003U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 5U
                                                     : 
                                                    ((0x2003U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 5U
                                                      : 
                                                     ((0x6003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 5U
                                                       : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_147))))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_283 
        = ((0x7033U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
           & ((0x7013U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
              | ((0x17U == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                 | ((0x63U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                    & ((0x5063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                       & ((0x7063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                          & ((0x4063U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                             & ((0x6063U != (0x707fU 
                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                & ((0x1063U != (0x707fU 
                                                & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                   & ((0x2004033U != 
                                       (0xfe00707fU 
                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                      & ((0x2005033U 
                                          != (0xfe00707fU 
                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                         & ((0x200503bU 
                                             != (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                            & ((0x200403bU 
                                                != 
                                                (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                               & (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_270))))))))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_246 = (
                                                   (0x37U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_11
                                                    : 
                                                   ((0x2000033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0ULL
                                                     : 
                                                    ((0x200003bU 
                                                      == 
                                                      (0xfe00707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 0ULL
                                                      : 
                                                     ((0x6033U 
                                                       == 
                                                       (0xfe00707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 0ULL
                                                       : 
                                                      ((0x2006033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 0ULL
                                                        : 
                                                       ((0x2007033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 0ULL
                                                         : 
                                                        ((0x200703bU 
                                                          == 
                                                          (0xfe00707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                          ? 0ULL
                                                          : 
                                                         ((0x200603bU 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                           ? 0ULL
                                                           : 
                                                          ((0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                            ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62
                                                            : 
                                                           ((0x3023U 
                                                             == 
                                                             (0x707fU 
                                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                             ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62
                                                             : 
                                                            ((0x1023U 
                                                              == 
                                                              (0x707fU 
                                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                              ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_62
                                                              : CPU__DOT__IDU__DOT__immgen__DOT___imm_T_235)))))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch 
        = ((0x33U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 4U : ((0x13U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 4U : ((0x1bU == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 4U : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_683))));
    CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_169 
        = ((0x7033U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 1U : ((0x7013U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 1U : ((0x17U == (0x7fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 5U : ((0x63U == (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 0U : ((0x5063U 
                                                == 
                                                (0x707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                ? 0U
                                                : (
                                                   (0x7063U 
                                                    == 
                                                    (0x707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 0U
                                                    : 
                                                   ((0x4063U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? 0U
                                                     : 
                                                    ((0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? 0U
                                                      : 
                                                     ((0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? 0U
                                                       : 
                                                      ((0x2004033U 
                                                        == 
                                                        (0xfe00707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? 0x15U
                                                        : 
                                                       ((0x2005033U 
                                                         == 
                                                         (0xfe00707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? 0x17U
                                                         : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_158))))))))))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_255 = (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? 
                                                   ((((1U 
                                                       & (IData)(
                                                                 (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                  >> 0x1fU)))
                                                       ? 0xfffffffffffULL
                                                       : 0ULL) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0xcU)) 
                                                                           << 0xcU)) 
                                                                       | ((0x800U 
                                                                           & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0x14U)) 
                                                                              << 0xbU)) 
                                                                          | (0x7feU 
                                                                             & ((IData)(
                                                                                (vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata 
                                                                                >> 0x15U)) 
                                                                                << 1U)))))))
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                      : 
                                                     ((0x4003U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                       : 
                                                      ((0x3003U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                        : 
                                                       ((0x1003U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                         : 
                                                        ((0x5003U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                          ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                          : 
                                                         ((0x2003U 
                                                           == 
                                                           (0x707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                           ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                           : 
                                                          ((0x6003U 
                                                            == 
                                                            (0x707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                            ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                            : CPU__DOT__IDU__DOT__immgen__DOT___imm_T_246)))))))));
    vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op 
        = ((0x33U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
            ? 5U : ((0x13U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? 5U : ((0x1bU == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                              ? 4U : ((0x3bU == (0xfe00707fU 
                                                 & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                       ? 4U : (IData)(CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_169)))));
    CPU__DOT__IDU__DOT__immgen__DOT___imm_T_266 = (
                                                   (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                    ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_11
                                                    : 
                                                   ((0x63U 
                                                     == 
                                                     (0x707fU 
                                                      & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                     ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                     : 
                                                    ((0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                      ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                      : 
                                                     ((0x7063U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                       ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                       : 
                                                      ((0x4063U 
                                                        == 
                                                        (0x707fU 
                                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                        ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                        : 
                                                       ((0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                         ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                         : 
                                                        ((0x1063U 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                          ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_14
                                                          : 
                                                         ((0x2004033U 
                                                           == 
                                                           (0xfe00707fU 
                                                            & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                           ? 0ULL
                                                           : 
                                                          ((0x2005033U 
                                                            == 
                                                            (0xfe00707fU 
                                                             & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                            ? 0ULL
                                                            : 
                                                           ((0x200503bU 
                                                             == 
                                                             (0xfe00707fU 
                                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                             ? 0ULL
                                                             : 
                                                            ((0x200403bU 
                                                              == 
                                                              (0xfe00707fU 
                                                               & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                              ? 0ULL
                                                              : CPU__DOT__IDU__DOT__immgen__DOT___imm_T_255)))))))))));
    vlSelf->CPU__DOT__IDU__DOT__immgen_io_out_imm = 
        ((0x33U == (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
          ? 0ULL : ((0x13U == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                     ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                     : ((0x1bU == (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                         ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                         : ((0x3bU == (0xfe00707fU 
                                       & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                             ? 0ULL : ((0x7033U == 
                                        (0xfe00707fU 
                                         & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                        ? 0ULL : ((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata)))
                                                   ? CPU__DOT__IDU__DOT__immgen__DOT___imm_T_2
                                                   : CPU__DOT__IDU__DOT__immgen__DOT___imm_T_266))))));
    vlSelf->CPU__DOT___pc_T_3 = (vlSelf->CPU__DOT__pc 
                                 + vlSelf->CPU__DOT__IDU__DOT__immgen_io_out_imm);
    vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2 = ((
                                                   (0x33U 
                                                    != 
                                                    (0xfe00707fU 
                                                     & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                   & ((0x13U 
                                                       == 
                                                       (0x707fU 
                                                        & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                      | ((0x1bU 
                                                          == 
                                                          (0x707fU 
                                                           & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                         | ((0x3bU 
                                                             != 
                                                             (0xfe00707fU 
                                                              & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                            & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_283)))))
                                                   ? vlSelf->CPU__DOT__IDU__DOT__immgen_io_out_imm
                                                   : vlSelf->CPU__DOT__EXU__DOT__regs_io_out_rs2_data);
    if ((0x1fU >= (0x3fU & (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)))) {
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_9 
            = VL_SHIFTRS_III(32,32,6, (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1), 
                             (0x3fU & (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)));
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_10 
            = ((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1) 
               >> (0x3fU & (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)));
    } else {
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_9 
            = (- ((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1) 
                  >> 0x1fU));
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_10 = 0U;
    }
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_40 
        = (0x1ffffffffULL & VL_DIVS_QQQ(33, (0x1ffffffffULL 
                                             & VL_EXTENDS_QI(33,32, (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1))), 
                                        (0x1ffffffffULL 
                                         & VL_EXTENDS_QI(33,32, (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)))));
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5 
        = VL_DIV_III(32, (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1), (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2));
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6 
        = VL_MODDIVS_III(32, (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1), (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2));
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___GEN_1 = 
        VL_MODDIV_III(32, (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1), (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2));
    VL_EXTEND_WQ(127,64, __Vtemp63, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1);
    VL_SHIFTL_WWI(127,127,6, __Vtemp64, __Vtemp63, 
                  (0x3fU & (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)));
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_75[0U] 
        = __Vtemp64[0U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_75[1U] 
        = __Vtemp64[1U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_75[2U] 
        = __Vtemp64[2U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_75[3U] 
        = (0x7fffffffU & __Vtemp64[3U]);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4 
        = (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
           + vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14 
        = (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
           - vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25 
        = (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
           - vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2);
    VL_EXTEND_WQ(128,64, __Vtemp66, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1);
    VL_EXTEND_WQ(128,64, __Vtemp67, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2);
    VL_MUL_W(4, __Vtemp68, __Vtemp66, __Vtemp67);
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U] 
        = __Vtemp68[0U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[1U] 
        = __Vtemp68[1U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[2U] 
        = __Vtemp68[2U];
    vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[3U] 
        = __Vtemp68[3U];
    if (((1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                        >> 0x3fU))) == (1U & (IData)(
                                                     (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2 
                                                      >> 0x3fU))))) {
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_7 
            = (1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25 
                             >> 0x3fU)));
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_14 
            = (1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25 
                             >> 0x3fU)));
    } else {
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_7 
            = (1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                             >> 0x3fU)));
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_14 
            = (1U & (IData)((vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2 
                             >> 0x3fU)));
    }
    CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_123 
        = ((0x10U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
            ? (((QData)((IData)(((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U] 
                                  >> 0x1fU) ? 0xffffffffU
                                  : 0U))) << 0x20U) 
               | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U])))
            : ((0xbU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25
                : ((0xaU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                    ? (((QData)((IData)(((1U & (IData)(
                                                       (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25 
                                                        >> 0x1fU)))
                                          ? 0xffffffffU
                                          : 0U))) << 0x20U) 
                       | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25)))
                    : ((9U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                        ? (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                           - vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)
                        : ((8U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                            ? (((QData)((IData)(((1U 
                                                  & (IData)(
                                                            (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14 
                                                             >> 0x1fU)))
                                                  ? 0xffffffffU
                                                  : 0U))) 
                                << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_14)))
                            : ((5U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                ? vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4
                                : ((4U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                    ? (((QData)((IData)(
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4 
                                                                     >> 0x1fU)))
                                                          ? 0xffffffffU
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_4)))
                                    : ((3U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                        ? (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                                           ^ vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)
                                        : ((2U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                            ? (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                                               | vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)
                                            : ((1U 
                                                == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                ? (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                                                   & vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2)
                                                : (
                                                   (6U 
                                                    == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                    ? vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2
                                                    : 0ULL)))))))))));
    vlSelf->CPU__DOT__EXU__DOT__ALU_io_out_cmp = (1U 
                                                  & ((7U 
                                                      == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                      ? 
                                                     (0U 
                                                      != vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25)
                                                      : 
                                                     ((6U 
                                                       == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                       ? (IData)(CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_14)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                        ? (IData)(CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_7)
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                         ? 
                                                        (~ (IData)(CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_14))
                                                         : 
                                                        ((1U 
                                                          == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                          ? 
                                                         (~ (IData)(CPU__DOT__EXU__DOT__ALU__DOT___io_out_cmp_T_7))
                                                          : 
                                                         ((0U 
                                                           == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch)) 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_25))))))))));
    VL_EXTEND_WQ(128,64, __Vtemp69, (((QData)((IData)(
                                                      ((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_75[0U] 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_75[0U]))));
    VL_EXTEND_WQ(128,64, __Vtemp70, VL_MODDIV_QQQ(64, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2));
    VL_EXTEND_WQ(128,64, __Vtemp71, (((QData)((IData)(
                                                      ((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___GEN_1 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___GEN_1))));
    VL_EXTEND_WQ(128,64, __Vtemp72, VL_MODDIVS_QQQ(64, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2));
    VL_EXTEND_WQ(128,64, __Vtemp73, (((QData)((IData)(
                                                      ((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_6))));
    VL_EXTEND_WQ(128,64, __Vtemp74, VL_DIV_QQQ(64, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2));
    VL_EXTEND_WQ(128,64, __Vtemp75, (((QData)((IData)(
                                                      ((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5 
                                                        >> 0x1fU)
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_5))));
    VL_EXTENDS_WQ(65,64, __Vtemp78, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1);
    __Vtemp79[0U] = __Vtemp78[0U];
    __Vtemp79[1U] = __Vtemp78[1U];
    __Vtemp79[2U] = (1U & __Vtemp78[2U]);
    VL_EXTENDS_WQ(65,64, __Vtemp81, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2);
    __Vtemp82[0U] = __Vtemp81[0U];
    __Vtemp82[1U] = __Vtemp81[1U];
    __Vtemp82[2U] = (1U & __Vtemp81[2U]);
    VL_DIVS_WWW(65, __Vtemp83, __Vtemp79, __Vtemp82);
    __Vtemp84[0U] = __Vtemp83[0U];
    __Vtemp84[1U] = __Vtemp83[1U];
    __Vtemp84[2U] = (1U & __Vtemp83[2U]);
    VL_EXTEND_WW(128,65, __Vtemp85, __Vtemp84);
    VL_EXTEND_WQ(128,64, __Vtemp86, (((QData)((IData)(
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_40 
                                                                   >> 0x1fU)))
                                                        ? 0xffffffffU
                                                        : 0U))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_40))));
    VL_EXTEND_WQ(128,64, __Vtemp87, CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_123);
    if ((0xcU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))) {
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[0U] 
            = __Vtemp69[0U];
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[1U] 
            = __Vtemp69[1U];
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[2U] 
            = __Vtemp69[2U];
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[3U] 
            = __Vtemp69[3U];
    } else {
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[0U] 
            = ((0x1bU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp70[0U] : ((0x1aU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                    ? __Vtemp71[0U]
                                    : ((0x19U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                        ? __Vtemp72[0U]
                                        : ((0x18U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                            ? __Vtemp73[0U]
                                            : ((0x17U 
                                                == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                ? __Vtemp74[0U]
                                                : (
                                                   (0x16U 
                                                    == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                    ? 
                                                   __Vtemp75[0U]
                                                    : 
                                                   ((0x15U 
                                                     == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                     ? 
                                                    __Vtemp85[0U]
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                      ? 
                                                     __Vtemp86[0U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                       ? 
                                                      vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[0U]
                                                       : 
                                                      __Vtemp87[0U])))))))));
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[1U] 
            = ((0x1bU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp70[1U] : ((0x1aU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                    ? __Vtemp71[1U]
                                    : ((0x19U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                        ? __Vtemp72[1U]
                                        : ((0x18U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                            ? __Vtemp73[1U]
                                            : ((0x17U 
                                                == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                ? __Vtemp74[1U]
                                                : (
                                                   (0x16U 
                                                    == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                    ? 
                                                   __Vtemp75[1U]
                                                    : 
                                                   ((0x15U 
                                                     == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                     ? 
                                                    __Vtemp85[1U]
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                      ? 
                                                     __Vtemp86[1U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                       ? 
                                                      vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[1U]
                                                       : 
                                                      __Vtemp87[1U])))))))));
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[2U] 
            = ((0x1bU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp70[2U] : ((0x1aU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                    ? __Vtemp71[2U]
                                    : ((0x19U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                        ? __Vtemp72[2U]
                                        : ((0x18U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                            ? __Vtemp73[2U]
                                            : ((0x17U 
                                                == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                ? __Vtemp74[2U]
                                                : (
                                                   (0x16U 
                                                    == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                    ? 
                                                   __Vtemp75[2U]
                                                    : 
                                                   ((0x15U 
                                                     == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                     ? 
                                                    __Vtemp85[2U]
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                      ? 
                                                     __Vtemp86[2U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                       ? 
                                                      vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[2U]
                                                       : 
                                                      __Vtemp87[2U])))))))));
        CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[3U] 
            = ((0x1bU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp70[3U] : ((0x1aU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                    ? __Vtemp71[3U]
                                    : ((0x19U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                        ? __Vtemp72[3U]
                                        : ((0x18U == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                            ? __Vtemp73[3U]
                                            : ((0x17U 
                                                == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                ? __Vtemp74[3U]
                                                : (
                                                   (0x16U 
                                                    == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                    ? 
                                                   __Vtemp75[3U]
                                                    : 
                                                   ((0x15U 
                                                     == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                     ? 
                                                    __Vtemp85[3U]
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                      ? 
                                                     __Vtemp86[3U]
                                                      : 
                                                     ((0x11U 
                                                       == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                                       ? 
                                                      vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_31[3U]
                                                       : 
                                                      __Vtemp87[3U])))))))));
    }
    VL_EXTEND_WQ(128,64, __Vtemp108, (vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1 
                                      >> (0x3fU & (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2))));
    VL_EXTEND_WQ(128,64, __Vtemp109, (((QData)((IData)(
                                                       ((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_10 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_10))));
    VL_EXTEND_WQ(128,64, __Vtemp110, VL_SHIFTRS_QQI(64,64,6, vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src1, 
                                                    (0x3fU 
                                                     & (IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_in_src2))));
    VL_EXTEND_WQ(128,64, __Vtemp111, (((QData)((IData)(
                                                       ((vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_9 
                                                         >> 0x1fU)
                                                         ? 0xffffffffU
                                                         : 0U))) 
                                       << 0x20U) | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU__DOT__io_out_dest_lo_9))));
    VL_EXTEND_WW(128,127, __Vtemp112, vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_75);
    if ((0x1fU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))) {
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[0U] 
            = __Vtemp108[0U];
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[1U] 
            = __Vtemp108[1U];
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[2U] 
            = __Vtemp108[2U];
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[3U] 
            = __Vtemp108[3U];
    } else {
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[0U] 
            = ((0x1eU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp109[0U] : ((0x1dU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                     ? __Vtemp110[0U]
                                     : ((0x1cU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                         ? __Vtemp111[0U]
                                         : ((0xdU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                             ? __Vtemp112[0U]
                                             : CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[0U]))));
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[1U] 
            = ((0x1eU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp109[1U] : ((0x1dU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                     ? __Vtemp110[1U]
                                     : ((0x1cU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                         ? __Vtemp111[1U]
                                         : ((0xdU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                             ? __Vtemp112[1U]
                                             : CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[1U]))));
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[2U] 
            = ((0x1eU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp109[2U] : ((0x1dU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                     ? __Vtemp110[2U]
                                     : ((0x1cU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                         ? __Vtemp111[2U]
                                         : ((0xdU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                             ? __Vtemp112[2U]
                                             : CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[2U]))));
        vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[3U] 
            = ((0x1eU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                ? __Vtemp109[3U] : ((0x1dU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                     ? __Vtemp110[3U]
                                     : ((0x1cU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                         ? __Vtemp111[3U]
                                         : ((0xdU == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_alu_op))
                                             ? __Vtemp112[3U]
                                             : CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_143[3U]))));
    }
    if (((0x33U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
         & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_400))) {
        VCPU___024unit____Vdpiimwrap_pmem_read_TOP____024unit(
                                                              (((QData)((IData)(
                                                                                vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[0U]))), vlSelf->__Vtask_pmem_read__3__rdata);
        vlSelf->CPU__DOT__EXU__DOT__mem_rdata = vlSelf->__Vtask_pmem_read__3__rdata;
    } else {
        vlSelf->CPU__DOT__EXU__DOT__mem_rdata = 0ULL;
    }
    if (((0x33U != (0xfe00707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
         & ((0x13U != (0x707fU & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
            & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_456)))) {
        VCPU___024unit____Vdpiimwrap_pmem_write_TOP____024unit(
                                                               (((QData)((IData)(
                                                                                vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[0U]))), vlSelf->CPU__DOT__EXU__DOT__regs_io_out_rs2_data, 
                                                               ((3U 
                                                                 == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                                 ? 0xffU
                                                                 : 
                                                                ((2U 
                                                                  == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                                  ? 0xfU
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                                   ? 3U
                                                                   : 
                                                                  (0U 
                                                                   == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))))));
    }
    vlSelf->CPU__DOT__EXU__DOT__regs_io_in_rd_data 
        = ((IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_jalr)
            ? (4ULL + vlSelf->CPU__DOT__pc) : (((0x33U 
                                                 != 
                                                 (0xfe00707fU 
                                                  & (IData)(vlSelf->CPU__DOT__IFU__DOT__fetchmem_rdata))) 
                                                & (IData)(vlSelf->CPU__DOT__IDU__DOT__contr__DOT___iducontr_T_400))
                                                ? (
                                                   (6U 
                                                    == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                                                >> 0x1fU)))
                                                                       ? 0xffffffffU
                                                                       : 0U))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                     ? 
                                                    ((((1U 
                                                        & (IData)(
                                                                  (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                                   >> 0xfU)))
                                                        ? 0xffffffffffffULL
                                                        : 0ULL) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                      ? 
                                                     ((((1U 
                                                         & (IData)(
                                                                   (vlSelf->CPU__DOT__EXU__DOT__mem_rdata 
                                                                    >> 7U)))
                                                         ? 0xffffffffffffffULL
                                                         : 0ULL) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata)))))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                       ? (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                        ? (QData)((IData)(
                                                                          (0xffffU 
                                                                           & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))
                                                        : 
                                                       ((0U 
                                                         == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_wdth))
                                                         ? (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))
                                                         : vlSelf->CPU__DOT__EXU__DOT__mem_rdata))))))
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->CPU__DOT__IDU__DOT__contr_io_out_branch))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->CPU__DOT__EXU__DOT__ALU__DOT___io_out_dest_T_153[0U])))
                                                    : (QData)((IData)(vlSelf->CPU__DOT__EXU__DOT__ALU_io_out_cmp)))));
}

void VCPU___024root___eval(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        VCPU___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

QData VCPU___024root___change_request_1(VCPU___024root* vlSelf);

VL_INLINE_OPT QData VCPU___024root___change_request(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___change_request\n"); );
    // Body
    return (VCPU___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VCPU___024root___change_request_1(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VCPU___024root___eval_debug_assertions(VCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
