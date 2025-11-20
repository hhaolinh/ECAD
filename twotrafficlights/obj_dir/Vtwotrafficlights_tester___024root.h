// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtwotrafficlights_tester.h for the primary calling header

#ifndef VERILATED_VTWOTRAFFICLIGHTS_TESTER___024ROOT_H_
#define VERILATED_VTWOTRAFFICLIGHTS_TESTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtwotrafficlights_tester__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtwotrafficlights_tester___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(clk,0,0);
    VL_OUT8(rst,0,0);
    VL_OUT8(lightsA,2,0);
    VL_OUT8(lightsB,2,0);
    CData/*2:0*/ twotrafficlights_tester__DOT__dut__DOT__state;
    CData/*0:0*/ __VdlyVal__clk__v0;
    CData/*0:0*/ __VdlySet__clk__v0;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtwotrafficlights_tester__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtwotrafficlights_tester___024root(Vtwotrafficlights_tester__Syms* symsp, const char* v__name);
    ~Vtwotrafficlights_tester___024root();
    VL_UNCOPYABLE(Vtwotrafficlights_tester___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
