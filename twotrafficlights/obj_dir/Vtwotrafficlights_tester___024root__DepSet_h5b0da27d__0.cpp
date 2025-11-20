// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwotrafficlights_tester.h for the primary calling header

#include "Vtwotrafficlights_tester__pch.h"
#include "Vtwotrafficlights_tester___024root.h"

VlCoroutine Vtwotrafficlights_tester___024root___eval_initial__TOP__Vtiming__0(Vtwotrafficlights_tester___024root* vlSelf);
VlCoroutine Vtwotrafficlights_tester___024root___eval_initial__TOP__Vtiming__1(Vtwotrafficlights_tester___024root* vlSelf);

void Vtwotrafficlights_tester___024root___eval_initial(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___eval_initial\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtwotrafficlights_tester___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtwotrafficlights_tester___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtwotrafficlights_tester___024root___eval_initial__TOP__Vtiming__0(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.clk = 1U;
    vlSelfRef.rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "twotrafficlights_tester.sv", 
                                         15);
    vlSelfRef.rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0xa5ULL, nullptr, 
                                         "twotrafficlights_tester.sv", 
                                         16);
    VL_FINISH_MT("twotrafficlights_tester.sv", 16, "");
}

void Vtwotrafficlights_tester___024root___eval_act(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___eval_act\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtwotrafficlights_tester___024root___nba_sequent__TOP__0(Vtwotrafficlights_tester___024root* vlSelf);
void Vtwotrafficlights_tester___024root___nba_sequent__TOP__1(Vtwotrafficlights_tester___024root* vlSelf);

void Vtwotrafficlights_tester___024root___eval_nba(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___eval_nba\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtwotrafficlights_tester___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtwotrafficlights_tester___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtwotrafficlights_tester___024root___nba_sequent__TOP__1(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___nba_sequent__TOP__1\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__clk__v0) {
        vlSelfRef.__VdlySet__clk__v0 = 0U;
        vlSelfRef.clk = vlSelfRef.__VdlyVal__clk__v0;
    }
}

void Vtwotrafficlights_tester___024root___timing_resume(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___timing_resume\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtwotrafficlights_tester___024root___eval_triggers__act(Vtwotrafficlights_tester___024root* vlSelf);

bool Vtwotrafficlights_tester___024root___eval_phase__act(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___eval_phase__act\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtwotrafficlights_tester___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtwotrafficlights_tester___024root___timing_resume(vlSelf);
        Vtwotrafficlights_tester___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtwotrafficlights_tester___024root___eval_phase__nba(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___eval_phase__nba\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtwotrafficlights_tester___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwotrafficlights_tester___024root___dump_triggers__nba(Vtwotrafficlights_tester___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwotrafficlights_tester___024root___dump_triggers__act(Vtwotrafficlights_tester___024root* vlSelf);
#endif  // VL_DEBUG

void Vtwotrafficlights_tester___024root___eval(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___eval\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtwotrafficlights_tester___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("twotrafficlights_tester.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtwotrafficlights_tester___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("twotrafficlights_tester.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtwotrafficlights_tester___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtwotrafficlights_tester___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtwotrafficlights_tester___024root___eval_debug_assertions(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___eval_debug_assertions\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
