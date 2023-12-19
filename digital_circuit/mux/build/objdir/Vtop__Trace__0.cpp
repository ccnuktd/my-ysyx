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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__key_list[0]),2);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__key_list[1]),2);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__key_list[2]),2);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__key_list[3]),2);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__pair_list[0]),4);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__pair_list[1]),4);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__pair_list[2]),4);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__pair_list[3]),4);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__data_list[0]),2);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__data_list[1]),2);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__data_list[2]),2);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__data_list[3]),2);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__lut_out),2);
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__hit));
    }
    bufp->chgCData(oldp+14,(vlSelf->Y),2);
    bufp->chgCData(oldp+15,(vlSelf->X0),2);
    bufp->chgCData(oldp+16,(vlSelf->X1),2);
    bufp->chgCData(oldp+17,(vlSelf->X2),2);
    bufp->chgCData(oldp+18,(vlSelf->X3),2);
    bufp->chgCData(oldp+19,(vlSelf->F),2);
    bufp->chgSData(oldp+20,((0x48cU | (((IData)(vlSelf->X0) 
                                        << 0xcU) | 
                                       (((IData)(vlSelf->X1) 
                                         << 8U) | (
                                                   ((IData)(vlSelf->X2) 
                                                    << 4U) 
                                                   | (IData)(vlSelf->X3)))))),16);
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
