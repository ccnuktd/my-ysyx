// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/ketted/Desktop/my-ysyx/digital_circuit/keyboard/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_h32ba5deb_0;
extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_h181586bb_0;
extern const VlUnpacked<CData/*3:0*/, 4096> Vtop__ConstPool__TABLE_h60f8434a_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    __Vtableidx7 = (0xfU & (IData)(vlSelf->top__DOT__count));
    vlSelf->top__DOT__inst4__DOT__dout = Vtop__ConstPool__TABLE_h32ba5deb_0
        [__Vtableidx7];
    __Vtableidx8 = (0xfU & ((IData)(vlSelf->top__DOT__count) 
                            >> 4U));
    vlSelf->top__DOT__inst5__DOT__dout = Vtop__ConstPool__TABLE_h32ba5deb_0
        [__Vtableidx8];
    __Vtableidx3 = (0xfU & (IData)(vlSelf->top__DOT__r_data));
    vlSelf->top__DOT__inst0__DOT__dout = Vtop__ConstPool__TABLE_h32ba5deb_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->top__DOT__r_data) 
                            >> 4U));
    vlSelf->top__DOT__inst1__DOT__dout = Vtop__ConstPool__TABLE_h32ba5deb_0
        [__Vtableidx4];
    vlSelf->top__DOT__data = vlSelf->top__DOT__inst__DOT__fifo
        [vlSelf->top__DOT__inst__DOT__r_point];
    vlSelf->top__DOT__ena = ((2U == (IData)(vlSelf->top__DOT__state)) 
                             | (8U == (IData)(vlSelf->top__DOT__state)));
    __Vtableidx2 = vlSelf->top__DOT__r_data;
    vlSelf->top__DOT__ascii_data = Vtop__ConstPool__TABLE_h181586bb_0
        [__Vtableidx2];
    vlSelf->seg4 = (0xffU & (~ (IData)(vlSelf->top__DOT__inst4__DOT__dout)));
    vlSelf->seg5 = (0xffU & (~ (IData)(vlSelf->top__DOT__inst5__DOT__dout)));
    __Vtableidx1 = (((IData)(vlSelf->top__DOT__data) 
                     << 4U) | (IData)(vlSelf->top__DOT__state));
    vlSelf->top__DOT__next_state = Vtop__ConstPool__TABLE_h60f8434a_0
        [__Vtableidx1];
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
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst_n = 0;
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
    vlSelf->seg0 = 0;
    vlSelf->seg1 = 0;
    vlSelf->seg2 = 0;
    vlSelf->seg3 = 0;
    vlSelf->seg4 = 0;
    vlSelf->seg5 = 0;
    vlSelf->top__DOT__host_valid_n = 0;
    vlSelf->top__DOT__overflow = 0;
    vlSelf->top__DOT__device_ready = 0;
    vlSelf->top__DOT__data = 0;
    vlSelf->top__DOT__count = 0;
    vlSelf->top__DOT__r_data = 0;
    vlSelf->top__DOT__state = 0;
    vlSelf->top__DOT__next_state = 0;
    vlSelf->top__DOT__ascii_data = 0;
    vlSelf->top__DOT__ena = 0;
    vlSelf->top__DOT__inst__DOT__ps2_clk_sync = 0;
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__inst__DOT__fifo[__Vi0] = 0;
    }
    vlSelf->top__DOT__inst__DOT__w_point = 0;
    vlSelf->top__DOT__inst__DOT__r_point = 0;
    vlSelf->top__DOT__inst__DOT__count = 0;
    vlSelf->top__DOT__inst__DOT__r_data = 0;
    vlSelf->top__DOT__inst__DOT__last_data = 0;
    vlSelf->top__DOT__inst__DOT____Vlvbound_h7d70c1d3__0 = 0;
    vlSelf->top__DOT__inst0__DOT__dout = 0;
    vlSelf->top__DOT__inst1__DOT__dout = 0;
    vlSelf->top__DOT__inst2__DOT__dout = 0;
    vlSelf->top__DOT__inst3__DOT__dout = 0;
    vlSelf->top__DOT__inst4__DOT__dout = 0;
    vlSelf->top__DOT__inst5__DOT__dout = 0;
    vlSelf->__Vtrigrprev__TOP__clk = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
