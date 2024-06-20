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
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"rst", false,-1);
    tracep->declBit(c+39,"ps2_clk", false,-1);
    tracep->declBit(c+40,"ps2_data", false,-1);
    tracep->declBus(c+41,"seg0", false,-1, 7,0);
    tracep->declBus(c+42,"seg1", false,-1, 7,0);
    tracep->declBus(c+43,"seg2", false,-1, 7,0);
    tracep->declBus(c+44,"seg3", false,-1, 7,0);
    tracep->declBus(c+45,"seg4", false,-1, 7,0);
    tracep->declBus(c+46,"seg5", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+38,"rst", false,-1);
    tracep->declBit(c+39,"ps2_clk", false,-1);
    tracep->declBit(c+40,"ps2_data", false,-1);
    tracep->declBus(c+41,"seg0", false,-1, 7,0);
    tracep->declBus(c+42,"seg1", false,-1, 7,0);
    tracep->declBus(c+43,"seg2", false,-1, 7,0);
    tracep->declBus(c+44,"seg3", false,-1, 7,0);
    tracep->declBus(c+45,"seg4", false,-1, 7,0);
    tracep->declBus(c+46,"seg5", false,-1, 7,0);
    tracep->declBit(c+1,"host_valid_n", false,-1);
    tracep->declBit(c+2,"overflow", false,-1);
    tracep->declBit(c+3,"device_ready", false,-1);
    tracep->declBus(c+4,"data", false,-1, 7,0);
    tracep->declBus(c+5,"count", false,-1, 7,0);
    tracep->declBit(c+47,"rst_n", false,-1);
    tracep->declBus(c+6,"r_data", false,-1, 7,0);
    tracep->declBus(c+48,"INIT", false,-1, 3,0);
    tracep->declBus(c+49,"ERR", false,-1, 3,0);
    tracep->declBus(c+50,"GET", false,-1, 3,0);
    tracep->declBus(c+51,"RELEASE", false,-1, 3,0);
    tracep->declBus(c+52,"FULL", false,-1, 3,0);
    tracep->declBus(c+7,"state", false,-1, 3,0);
    tracep->declBus(c+8,"next_state", false,-1, 3,0);
    tracep->declBus(c+9,"ascii_data", false,-1, 7,0);
    tracep->declBus(c+6,"key_data", false,-1, 7,0);
    tracep->declBit(c+10,"ena", false,-1);
    tracep->pushNamePrefix("inst ");
    tracep->declBit(c+37,"clk", false,-1);
    tracep->declBit(c+47,"rst_n", false,-1);
    tracep->declBit(c+39,"ps2_clk", false,-1);
    tracep->declBit(c+40,"ps2_data", false,-1);
    tracep->declBit(c+1,"host_valid_n", false,-1);
    tracep->declBus(c+4,"data", false,-1, 7,0);
    tracep->declBit(c+2,"overflow", false,-1);
    tracep->declBit(c+3,"device_ready", false,-1);
    tracep->declBit(c+11,"sample", false,-1);
    tracep->declBus(c+12,"ps2_clk_sync", false,-1, 1,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+13+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+21,"w_point", false,-1, 2,0);
    tracep->declBus(c+22,"r_point", false,-1, 2,0);
    tracep->declBus(c+23,"count", false,-1, 3,0);
    tracep->declBus(c+24,"r_data", false,-1, 10,0);
    tracep->declBus(c+53,"last_data", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst0 ");
    tracep->declBit(c+10,"ena", false,-1);
    tracep->declBus(c+25,"data", false,-1, 3,0);
    tracep->declBus(c+41,"seg", false,-1, 7,0);
    tracep->declBus(c+26,"dout", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst1 ");
    tracep->declBit(c+10,"ena", false,-1);
    tracep->declBus(c+27,"data", false,-1, 3,0);
    tracep->declBus(c+42,"seg", false,-1, 7,0);
    tracep->declBus(c+28,"dout", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst2 ");
    tracep->declBit(c+10,"ena", false,-1);
    tracep->declBus(c+29,"data", false,-1, 3,0);
    tracep->declBus(c+43,"seg", false,-1, 7,0);
    tracep->declBus(c+30,"dout", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst3 ");
    tracep->declBit(c+10,"ena", false,-1);
    tracep->declBus(c+31,"data", false,-1, 3,0);
    tracep->declBus(c+44,"seg", false,-1, 7,0);
    tracep->declBus(c+32,"dout", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst4 ");
    tracep->declBit(c+54,"ena", false,-1);
    tracep->declBus(c+33,"data", false,-1, 3,0);
    tracep->declBus(c+45,"seg", false,-1, 7,0);
    tracep->declBus(c+34,"dout", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("inst5 ");
    tracep->declBit(c+54,"ena", false,-1);
    tracep->declBus(c+35,"data", false,-1, 3,0);
    tracep->declBus(c+46,"seg", false,-1, 7,0);
    tracep->declBus(c+36,"dout", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lookup_table_inst ");
    tracep->declBus(c+6,"data", false,-1, 7,0);
    tracep->declBus(c+9,"ascii_data", false,-1, 7,0);
    tracep->declBus(c+6,"key_data", false,-1, 7,0);
    tracep->popNamePrefix(2);
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
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__host_valid_n));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__overflow));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__device_ready));
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__data),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__count),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__r_data),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__state),4);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__next_state),4);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__ascii_data),8);
    bufp->fullBit(oldp+10,(vlSelf->top__DOT__ena));
    bufp->fullBit(oldp+11,((IData)((2U == (IData)(vlSelf->top__DOT__inst__DOT__ps2_clk_sync)))));
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__inst__DOT__ps2_clk_sync),2);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__inst__DOT__fifo[0]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__inst__DOT__fifo[1]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__inst__DOT__fifo[2]),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__inst__DOT__fifo[3]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__inst__DOT__fifo[4]),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__inst__DOT__fifo[5]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__inst__DOT__fifo[6]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__inst__DOT__fifo[7]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__inst__DOT__w_point),3);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__inst__DOT__r_point),3);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__inst__DOT__count),4);
    bufp->fullSData(oldp+24,(vlSelf->top__DOT__inst__DOT__r_data),11);
    bufp->fullCData(oldp+25,((0xfU & (IData)(vlSelf->top__DOT__r_data))),4);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__inst0__DOT__dout),8);
    bufp->fullCData(oldp+27,((0xfU & ((IData)(vlSelf->top__DOT__r_data) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__inst1__DOT__dout),8);
    bufp->fullCData(oldp+29,((0xfU & (IData)(vlSelf->top__DOT__ascii_data))),4);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__inst2__DOT__dout),8);
    bufp->fullCData(oldp+31,((0xfU & ((IData)(vlSelf->top__DOT__ascii_data) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__inst3__DOT__dout),8);
    bufp->fullCData(oldp+33,((0xfU & (IData)(vlSelf->top__DOT__count))),4);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__inst4__DOT__dout),8);
    bufp->fullCData(oldp+35,((0xfU & ((IData)(vlSelf->top__DOT__count) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__inst5__DOT__dout),8);
    bufp->fullBit(oldp+37,(vlSelf->clk));
    bufp->fullBit(oldp+38,(vlSelf->rst));
    bufp->fullBit(oldp+39,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+40,(vlSelf->ps2_data));
    bufp->fullCData(oldp+41,(vlSelf->seg0),8);
    bufp->fullCData(oldp+42,(vlSelf->seg1),8);
    bufp->fullCData(oldp+43,(vlSelf->seg2),8);
    bufp->fullCData(oldp+44,(vlSelf->seg3),8);
    bufp->fullCData(oldp+45,(vlSelf->seg4),8);
    bufp->fullCData(oldp+46,(vlSelf->seg5),8);
    bufp->fullBit(oldp+47,((1U & (~ (IData)(vlSelf->rst)))));
    bufp->fullCData(oldp+48,(1U),4);
    bufp->fullCData(oldp+49,(0U),4);
    bufp->fullCData(oldp+50,(2U),4);
    bufp->fullCData(oldp+51,(4U),4);
    bufp->fullCData(oldp+52,(8U),4);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__inst__DOT__last_data),8);
    bufp->fullBit(oldp+54,(1U));
}
