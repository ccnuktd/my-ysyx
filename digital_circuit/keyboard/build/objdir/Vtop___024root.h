// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(seg0,7,0);
    VL_OUT8(seg1,7,0);
    VL_OUT8(seg2,7,0);
    VL_OUT8(seg3,7,0);
    VL_OUT8(seg4,7,0);
    VL_OUT8(seg5,7,0);
    CData/*0:0*/ top__DOT__host_valid_n;
    CData/*0:0*/ top__DOT__overflow;
    CData/*0:0*/ top__DOT__device_ready;
    CData/*7:0*/ top__DOT__data;
    CData/*7:0*/ top__DOT__count;
    CData/*7:0*/ top__DOT__r_data;
    CData/*3:0*/ top__DOT__state;
    CData/*3:0*/ top__DOT__next_state;
    CData/*7:0*/ top__DOT__ascii_data;
    CData/*0:0*/ top__DOT__ena;
    CData/*1:0*/ top__DOT__inst__DOT__ps2_clk_sync;
    CData/*2:0*/ top__DOT__inst__DOT__w_point;
    CData/*2:0*/ top__DOT__inst__DOT__r_point;
    CData/*3:0*/ top__DOT__inst__DOT__count;
    CData/*7:0*/ top__DOT__inst__DOT__last_data;
    CData/*0:0*/ top__DOT__inst__DOT____Vlvbound_h7d70c1d3__0;
    CData/*7:0*/ top__DOT__inst0__DOT__dout;
    CData/*7:0*/ top__DOT__inst1__DOT__dout;
    CData/*7:0*/ top__DOT__inst2__DOT__dout;
    CData/*7:0*/ top__DOT__inst3__DOT__dout;
    CData/*7:0*/ top__DOT__inst4__DOT__dout;
    CData/*7:0*/ top__DOT__inst5__DOT__dout;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ top__DOT__inst__DOT__r_data;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__inst__DOT__fifo;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
