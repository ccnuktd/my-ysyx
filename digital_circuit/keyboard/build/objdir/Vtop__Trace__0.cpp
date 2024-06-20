// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__host_valid_n));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__overflow));
        bufp->chgBit(oldp+2,(vlSelf->top__DOT__device_ready));
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__data),8);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__count),8);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__r_data),8);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__state),4);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__next_state),4);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__ascii_data),8);
        bufp->chgBit(oldp+9,(vlSelf->top__DOT__ena));
        bufp->chgBit(oldp+10,((IData)((2U == (IData)(vlSelf->top__DOT__inst__DOT__ps2_clk_sync)))));
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__inst__DOT__ps2_clk_sync),2);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__inst__DOT__fifo[0]),8);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__inst__DOT__fifo[1]),8);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__inst__DOT__fifo[2]),8);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__inst__DOT__fifo[3]),8);
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__inst__DOT__fifo[4]),8);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__inst__DOT__fifo[5]),8);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__inst__DOT__fifo[6]),8);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__inst__DOT__fifo[7]),8);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__inst__DOT__w_point),3);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__inst__DOT__r_point),3);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__inst__DOT__count),4);
        bufp->chgSData(oldp+23,(vlSelf->top__DOT__inst__DOT__r_data),11);
        bufp->chgCData(oldp+24,((0xfU & (IData)(vlSelf->top__DOT__r_data))),4);
        bufp->chgCData(oldp+25,(vlSelf->top__DOT__inst0__DOT__dout),8);
        bufp->chgCData(oldp+26,((0xfU & ((IData)(vlSelf->top__DOT__r_data) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+27,(vlSelf->top__DOT__inst1__DOT__dout),8);
        bufp->chgCData(oldp+28,((0xfU & (IData)(vlSelf->top__DOT__ascii_data))),4);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__inst2__DOT__dout),8);
        bufp->chgCData(oldp+30,((0xfU & ((IData)(vlSelf->top__DOT__ascii_data) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__inst3__DOT__dout),8);
        bufp->chgCData(oldp+32,((0xfU & (IData)(vlSelf->top__DOT__count))),4);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__inst4__DOT__dout),8);
        bufp->chgCData(oldp+34,((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                         >> 4U))),4);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__inst5__DOT__dout),8);
    }
    bufp->chgBit(oldp+36,(vlSelf->clk));
    bufp->chgBit(oldp+37,(vlSelf->rst));
    bufp->chgBit(oldp+38,(vlSelf->ps2_clk));
    bufp->chgBit(oldp+39,(vlSelf->ps2_data));
    bufp->chgCData(oldp+40,(vlSelf->seg0),8);
    bufp->chgCData(oldp+41,(vlSelf->seg1),8);
    bufp->chgCData(oldp+42,(vlSelf->seg2),8);
    bufp->chgCData(oldp+43,(vlSelf->seg3),8);
    bufp->chgCData(oldp+44,(vlSelf->seg4),8);
    bufp->chgCData(oldp+45,(vlSelf->seg5),8);
    bufp->chgBit(oldp+46,((1U & (~ (IData)(vlSelf->rst)))));
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
