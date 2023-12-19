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
    tracep->declBus(c+1,"A", false,-1, 3,0);
    tracep->declBus(c+2,"B", false,-1, 3,0);
    tracep->declBus(c+3,"shamt", false,-1, 2,0);
    tracep->declBus(c+4,"S", false,-1, 3,0);
    tracep->declBit(c+5,"Z", false,-1);
    tracep->declBit(c+6,"O", false,-1);
    tracep->declBit(c+7,"C", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+1,"A", false,-1, 3,0);
    tracep->declBus(c+2,"B", false,-1, 3,0);
    tracep->declBus(c+3,"shamt", false,-1, 2,0);
    tracep->declBus(c+4,"S", false,-1, 3,0);
    tracep->declBit(c+5,"Z", false,-1);
    tracep->declBit(c+6,"O", false,-1);
    tracep->declBit(c+7,"C", false,-1);
    tracep->pushNamePrefix("u_alu ");
    tracep->declBus(c+1,"A", false,-1, 3,0);
    tracep->declBus(c+2,"B", false,-1, 3,0);
    tracep->declBus(c+3,"shamt", false,-1, 2,0);
    tracep->declBus(c+4,"S", false,-1, 3,0);
    tracep->declBit(c+5,"Z", false,-1);
    tracep->declBit(c+6,"O", false,-1);
    tracep->declBit(c+7,"C", false,-1);
    tracep->declBus(c+10,"ALU_ADD", false,-1, 2,0);
    tracep->declBus(c+11,"ALU_SUB", false,-1, 2,0);
    tracep->declBus(c+12,"ALU_NOT", false,-1, 2,0);
    tracep->declBus(c+13,"ALU_AND", false,-1, 2,0);
    tracep->declBus(c+14,"ALU_OR", false,-1, 2,0);
    tracep->declBus(c+15,"ALU_XOR", false,-1, 2,0);
    tracep->declBus(c+16,"ALU_SLT", false,-1, 2,0);
    tracep->declBus(c+17,"ALU_EQU", false,-1, 2,0);
    tracep->declBus(c+8,"com_B", false,-1, 3,0);
    tracep->declBus(c+9,"sum", false,-1, 3,0);
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
    bufp->fullCData(oldp+1,(vlSelf->A),4);
    bufp->fullCData(oldp+2,(vlSelf->B),4);
    bufp->fullCData(oldp+3,(vlSelf->shamt),3);
    bufp->fullCData(oldp+4,(vlSelf->S),4);
    bufp->fullBit(oldp+5,(vlSelf->Z));
    bufp->fullBit(oldp+6,(vlSelf->O));
    bufp->fullBit(oldp+7,(vlSelf->C));
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__u_alu__DOT__com_B),4);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__u_alu__DOT__sum),4);
    bufp->fullCData(oldp+10,(0U),3);
    bufp->fullCData(oldp+11,(1U),3);
    bufp->fullCData(oldp+12,(2U),3);
    bufp->fullCData(oldp+13,(3U),3);
    bufp->fullCData(oldp+14,(4U),3);
    bufp->fullCData(oldp+15,(5U),3);
    bufp->fullCData(oldp+16,(6U),3);
    bufp->fullCData(oldp+17,(7U),3);
}
