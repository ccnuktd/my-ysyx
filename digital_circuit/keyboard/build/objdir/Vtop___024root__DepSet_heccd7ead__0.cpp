// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h32ba5deb_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_h181586bb_0;
extern const VlUnpacked<CData/*3:0*/, 4096> Vtop__ConstPool__TABLE_h60f8434a_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*11:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*7:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*3:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*1:0*/ __Vdly__top__DOT__inst__DOT__ps2_clk_sync;
    __Vdly__top__DOT__inst__DOT__ps2_clk_sync = 0;
    CData/*2:0*/ __Vdly__top__DOT__inst__DOT__r_point;
    __Vdly__top__DOT__inst__DOT__r_point = 0;
    CData/*0:0*/ __Vdly__top__DOT__device_ready;
    __Vdly__top__DOT__device_ready = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__inst__DOT__fifo__v0;
    __Vdlyvdim0__top__DOT__inst__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__inst__DOT__fifo__v0;
    __Vdlyvval__top__DOT__inst__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__inst__DOT__fifo__v0;
    __Vdlyvset__top__DOT__inst__DOT__fifo__v0 = 0;
    CData/*2:0*/ __Vdly__top__DOT__inst__DOT__w_point;
    __Vdly__top__DOT__inst__DOT__w_point = 0;
    CData/*3:0*/ __Vdly__top__DOT__inst__DOT__count;
    __Vdly__top__DOT__inst__DOT__count = 0;
    // Body
    __Vdly__top__DOT__inst__DOT__ps2_clk_sync = vlSelf->top__DOT__inst__DOT__ps2_clk_sync;
    __Vdly__top__DOT__inst__DOT__count = vlSelf->top__DOT__inst__DOT__count;
    __Vdly__top__DOT__inst__DOT__w_point = vlSelf->top__DOT__inst__DOT__w_point;
    __Vdly__top__DOT__device_ready = vlSelf->top__DOT__device_ready;
    __Vdly__top__DOT__inst__DOT__r_point = vlSelf->top__DOT__inst__DOT__r_point;
    __Vdlyvset__top__DOT__inst__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__inst__DOT__ps2_clk_sync = ((2U 
                                                  & ((IData)(vlSelf->top__DOT__inst__DOT__ps2_clk_sync) 
                                                     << 1U)) 
                                                 | (IData)(vlSelf->ps2_clk));
    if ((1U & (~ (IData)(vlSelf->rst_n)))) {
        __Vdly__top__DOT__inst__DOT__ps2_clk_sync = 0U;
    }
    if (vlSelf->rst_n) {
        vlSelf->top__DOT__count = (0xffU & ((((~ (IData)(vlSelf->top__DOT__host_valid_n)) 
                                              & ((2U 
                                                  == (IData)(vlSelf->top__DOT__next_state)) 
                                                 | (4U 
                                                    == (IData)(vlSelf->top__DOT__next_state)))) 
                                             & (IData)(vlSelf->top__DOT__device_ready))
                                             ? ((IData)(1U) 
                                                + (IData)(vlSelf->top__DOT__count))
                                             : (IData)(vlSelf->top__DOT__count)));
        if (((~ (IData)(vlSelf->top__DOT__host_valid_n)) 
             & (IData)(vlSelf->top__DOT__device_ready))) {
            vlSelf->top__DOT__state = vlSelf->top__DOT__next_state;
            vlSelf->top__DOT__r_data = vlSelf->top__DOT__data;
        } else {
            vlSelf->top__DOT__state = vlSelf->top__DOT__state;
            vlSelf->top__DOT__r_data = vlSelf->top__DOT__r_data;
        }
        if (((IData)(vlSelf->top__DOT__device_ready) 
             & (~ (IData)(vlSelf->top__DOT__host_valid_n)))) {
            __Vdly__top__DOT__inst__DOT__r_point = 
                (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__inst__DOT__r_point)));
            if (((IData)(vlSelf->top__DOT__inst__DOT__w_point) 
                 == (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__inst__DOT__r_point))))) {
                __Vdly__top__DOT__device_ready = 0U;
            }
        }
        if ((IData)((2U == (IData)(vlSelf->top__DOT__inst__DOT__ps2_clk_sync)))) {
            if ((0xaU == (IData)(vlSelf->top__DOT__inst__DOT__count))) {
                if (((VL_REDXOR_32((0x1ffU & ((IData)(vlSelf->top__DOT__inst__DOT__r_data) 
                                              >> 1U))) 
                      & (~ (IData)(vlSelf->top__DOT__inst__DOT__r_data))) 
                     & (IData)(vlSelf->ps2_data))) {
                    __Vdlyvval__top__DOT__inst__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->top__DOT__inst__DOT__r_data) 
                                    >> 1U));
                    __Vdlyvset__top__DOT__inst__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__top__DOT__inst__DOT__fifo__v0 
                        = vlSelf->top__DOT__inst__DOT__w_point;
                    __Vdly__top__DOT__device_ready = 1U;
                    __Vdly__top__DOT__inst__DOT__w_point 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__inst__DOT__w_point)));
                    vlSelf->top__DOT__overflow = ((IData)(vlSelf->top__DOT__overflow) 
                                                  | ((7U 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->top__DOT__inst__DOT__w_point))) 
                                                     == (IData)(vlSelf->top__DOT__inst__DOT__r_point)));
                }
                __Vdly__top__DOT__inst__DOT__count = 0U;
            } else {
                vlSelf->top__DOT__inst__DOT____Vlvbound_h7d70c1d3__0 
                    = vlSelf->ps2_data;
                if ((0xaU >= (IData)(vlSelf->top__DOT__inst__DOT__count))) {
                    vlSelf->top__DOT__inst__DOT__r_data 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__inst__DOT__count))) 
                            & (IData)(vlSelf->top__DOT__inst__DOT__r_data)) 
                           | (0x7ffU & ((IData)(vlSelf->top__DOT__inst__DOT____Vlvbound_h7d70c1d3__0) 
                                        << (IData)(vlSelf->top__DOT__inst__DOT__count))));
                }
                __Vdly__top__DOT__inst__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__inst__DOT__count)));
            }
        }
    } else {
        vlSelf->top__DOT__count = 0U;
        vlSelf->top__DOT__state = 1U;
        vlSelf->top__DOT__r_data = 0U;
        __Vdly__top__DOT__inst__DOT__count = 0U;
        __Vdly__top__DOT__inst__DOT__w_point = 0U;
        __Vdly__top__DOT__inst__DOT__r_point = 0U;
        vlSelf->top__DOT__overflow = 0U;
        __Vdly__top__DOT__device_ready = 0U;
    }
    vlSelf->top__DOT__inst__DOT__ps2_clk_sync = __Vdly__top__DOT__inst__DOT__ps2_clk_sync;
    vlSelf->top__DOT__inst__DOT__w_point = __Vdly__top__DOT__inst__DOT__w_point;
    vlSelf->top__DOT__inst__DOT__count = __Vdly__top__DOT__inst__DOT__count;
    vlSelf->top__DOT__inst__DOT__r_point = __Vdly__top__DOT__inst__DOT__r_point;
    if (__Vdlyvset__top__DOT__inst__DOT__fifo__v0) {
        vlSelf->top__DOT__inst__DOT__fifo[__Vdlyvdim0__top__DOT__inst__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__inst__DOT__fifo__v0;
    }
    __Vtableidx7 = (0xfU & (IData)(vlSelf->top__DOT__count));
    vlSelf->top__DOT__inst4__DOT__dout = Vtop__ConstPool__TABLE_h32ba5deb_0
        [__Vtableidx7];
    __Vtableidx8 = (0xfU & ((IData)(vlSelf->top__DOT__count) 
                            >> 4U));
    vlSelf->top__DOT__inst5__DOT__dout = Vtop__ConstPool__TABLE_h32ba5deb_0
        [__Vtableidx8];
    vlSelf->top__DOT__ena = ((2U == (IData)(vlSelf->top__DOT__state)) 
                             | (8U == (IData)(vlSelf->top__DOT__state)));
    __Vtableidx3 = (0xfU & (IData)(vlSelf->top__DOT__r_data));
    vlSelf->top__DOT__inst0__DOT__dout = Vtop__ConstPool__TABLE_h32ba5deb_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->top__DOT__r_data) 
                            >> 4U));
    vlSelf->top__DOT__inst1__DOT__dout = Vtop__ConstPool__TABLE_h32ba5deb_0
        [__Vtableidx4];
    __Vtableidx2 = vlSelf->top__DOT__r_data;
    vlSelf->top__DOT__ascii_data = Vtop__ConstPool__TABLE_h181586bb_0
        [__Vtableidx2];
    vlSelf->top__DOT__data = vlSelf->top__DOT__inst__DOT__fifo
        [vlSelf->top__DOT__inst__DOT__r_point];
    vlSelf->top__DOT__host_valid_n = (1U & ((~ (IData)(vlSelf->rst_n)) 
                                            | (~ (IData)(vlSelf->top__DOT__device_ready))));
    vlSelf->seg4 = (0xffU & (~ (IData)(vlSelf->top__DOT__inst4__DOT__dout)));
    vlSelf->seg5 = (0xffU & (~ (IData)(vlSelf->top__DOT__inst5__DOT__dout)));
    __Vtableidx5 = (0xfU & (IData)(vlSelf->top__DOT__ascii_data));
    vlSelf->top__DOT__inst2__DOT__dout = Vtop__ConstPool__TABLE_h32ba5deb_0
        [__Vtableidx5];
    __Vtableidx6 = (0xfU & ((IData)(vlSelf->top__DOT__ascii_data) 
                            >> 4U));
    vlSelf->top__DOT__inst3__DOT__dout = Vtop__ConstPool__TABLE_h32ba5deb_0
        [__Vtableidx6];
    if (vlSelf->top__DOT__ena) {
        vlSelf->seg0 = (0xffU & (~ (IData)(vlSelf->top__DOT__inst0__DOT__dout)));
        vlSelf->seg1 = (0xffU & (~ (IData)(vlSelf->top__DOT__inst1__DOT__dout)));
        vlSelf->seg2 = (0xffU & (~ (IData)(vlSelf->top__DOT__inst2__DOT__dout)));
        vlSelf->seg3 = (0xffU & (~ (IData)(vlSelf->top__DOT__inst3__DOT__dout)));
    } else {
        vlSelf->seg0 = 0xffU;
        vlSelf->seg1 = 0xffU;
        vlSelf->seg2 = 0xffU;
        vlSelf->seg3 = 0xffU;
    }
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__data) 
                     << 4U) | (IData)(vlSelf->top__DOT__state));
    vlSelf->top__DOT__next_state = Vtop__ConstPool__TABLE_h60f8434a_0
        [__Vtableidx1];
    vlSelf->top__DOT__device_ready = __Vdly__top__DOT__device_ready;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/ketted/Desktop/my-ysyx/digital_circuit/keyboard/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/ketted/Desktop/my-ysyx/digital_circuit/keyboard/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
