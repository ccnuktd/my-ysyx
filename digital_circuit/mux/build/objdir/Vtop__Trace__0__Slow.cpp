// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+15,"Y", false,-1, 1,0);
    tracep->declBus(c+16,"X0", false,-1, 1,0);
    tracep->declBus(c+17,"X1", false,-1, 1,0);
    tracep->declBus(c+18,"X2", false,-1, 1,0);
    tracep->declBus(c+19,"X3", false,-1, 1,0);
    tracep->declBus(c+20,"F", false,-1, 1,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+15,"Y", false,-1, 1,0);
    tracep->declBus(c+16,"X0", false,-1, 1,0);
    tracep->declBus(c+17,"X1", false,-1, 1,0);
    tracep->declBus(c+18,"X2", false,-1, 1,0);
    tracep->declBus(c+19,"X3", false,-1, 1,0);
    tracep->declBus(c+20,"F", false,-1, 1,0);
    tracep->pushNamePrefix("u_mux2to4 ");
    tracep->declBus(c+22,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+23,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+23,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 1,0);
    tracep->declBus(c+15,"key", false,-1, 1,0);
    tracep->declBus(c+21,"lut", false,-1, 15,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+22,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+23,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+23,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+24,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+20,"out", false,-1, 1,0);
    tracep->declBus(c+15,"key", false,-1, 1,0);
    tracep->declBus(c+25,"default_out", false,-1, 1,0);
    tracep->declBus(c+21,"lut", false,-1, 15,0);
    tracep->declBus(c+22,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+5+i*1,"pair_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 1,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+9+i*1,"data_list", true,(i+0), 1,0);
    }
    tracep->declBus(c+13,"lut_out", false,-1, 1,0);
    tracep->declBit(c+14,"hit", false,-1);
    tracep->declBus(c+26,"i", false,-1, 31,0);
    tracep->pushNamePrefix("genblk1 ");
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__key_list[0]),2);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__key_list[1]),2);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__key_list[2]),2);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__key_list[3]),2);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__pair_list[0]),4);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__pair_list[1]),4);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__pair_list[2]),4);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__pair_list[3]),4);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__data_list[0]),2);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__data_list[1]),2);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__data_list[2]),2);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__data_list[3]),2);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__lut_out),2);
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__u_mux2to4__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+15,(vlSelf->Y),2);
    bufp->fullCData(oldp+16,(vlSelf->X0),2);
    bufp->fullCData(oldp+17,(vlSelf->X1),2);
    bufp->fullCData(oldp+18,(vlSelf->X2),2);
    bufp->fullCData(oldp+19,(vlSelf->X3),2);
    bufp->fullCData(oldp+20,(vlSelf->F),2);
    bufp->fullSData(oldp+21,((0x48cU | (((IData)(vlSelf->X0) 
                                         << 0xcU) | 
                                        (((IData)(vlSelf->X1) 
                                          << 8U) | 
                                         (((IData)(vlSelf->X2) 
                                           << 4U) | (IData)(vlSelf->X3)))))),16);
    bufp->fullIData(oldp+22,(4U),32);
    bufp->fullIData(oldp+23,(2U),32);
    bufp->fullIData(oldp+24,(0U),32);
    bufp->fullCData(oldp+25,(0U),2);
    bufp->fullIData(oldp+26,(4U),32);
}
