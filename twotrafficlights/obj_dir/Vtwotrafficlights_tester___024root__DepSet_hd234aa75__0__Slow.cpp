// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwotrafficlights_tester.h for the primary calling header

#include "Vtwotrafficlights_tester__pch.h"
#include "Vtwotrafficlights_tester__Syms.h"
#include "Vtwotrafficlights_tester___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtwotrafficlights_tester___024root___dump_triggers__stl(Vtwotrafficlights_tester___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtwotrafficlights_tester___024root___eval_triggers__stl(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___eval_triggers__stl\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtwotrafficlights_tester___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtwotrafficlights_tester___024root___stl_sequent__TOP__0(Vtwotrafficlights_tester___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtwotrafficlights_tester___024root___stl_sequent__TOP__0\n"); );
    Vtwotrafficlights_tester__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ VL_ONEHOT_I((((((7U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                 << 7U) | ((6U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                           << 6U)) 
                               | (((5U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                   << 5U) | ((4U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                             << 4U))) 
                              | ((((3U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                   << 3U) | ((2U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                             << 2U)) 
                                 | (((1U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                     << 1U) | (0U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))))))))) {
        if ((0U == (((((7U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                       << 7U) | ((6U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                 << 6U)) | (((5U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                             << 5U) 
                                            | ((4U 
                                                == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                               << 4U))) 
                    | ((((3U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                         << 3U) | ((2U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                   << 2U)) | (((1U 
                                                == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
                                               << 1U) 
                                              | (0U 
                                                 == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: twotrafficlights.sv:23: Assertion failed in %Ntwotrafficlights_tester.dut: unique case, but none matched for '32'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),32,
                             (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state));
                VL_STOP_MT("twotrafficlights.sv", 23, "");
            }
        } else if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
            VL_WRITEF_NX("[%0t] %%Error: twotrafficlights.sv:23: Assertion failed in %Ntwotrafficlights_tester.dut: unique case, but multiple matches found for '32'h%x'\n",0,
                         64,VL_TIME_UNITED_Q(1),-12,
                         vlSymsp->name(),32,(IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state));
            VL_STOP_MT("twotrafficlights.sv", 23, "");
        }
    }
    vlSelfRef.lightsA = 4U;
    vlSelfRef.lightsB = 4U;
    if (((((((((0U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)) 
               | (1U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))) 
              | (2U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))) 
             | (3U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))) 
            | (4U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))) 
           | (5U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))) 
          | (6U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))) 
         | (7U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state)))) {
        if ((0U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))) {
            vlSelfRef.lightsA = 6U;
            vlSelfRef.lightsB = 4U;
        } else if ((1U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))) {
            vlSelfRef.lightsA = 1U;
            vlSelfRef.lightsB = 4U;
        } else if ((2U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))) {
            vlSelfRef.lightsA = 2U;
            vlSelfRef.lightsB = 4U;
        } else {
            vlSelfRef.lightsA = 4U;
            vlSelfRef.lightsB = ((3U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))
                                  ? 4U : ((4U == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))
                                           ? 6U : (
                                                   (5U 
                                                    == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))
                                                    ? 1U
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelfRef.twotrafficlights_tester__DOT__dut__DOT__state))
                                                     ? 2U
                                                     : 4U))));
        }
    }
}
