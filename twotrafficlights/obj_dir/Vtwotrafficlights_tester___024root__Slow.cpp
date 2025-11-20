// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtwotrafficlights_tester.h for the primary calling header

#include "Vtwotrafficlights_tester__pch.h"
#include "Vtwotrafficlights_tester__Syms.h"
#include "Vtwotrafficlights_tester___024root.h"

void Vtwotrafficlights_tester___024root___ctor_var_reset(Vtwotrafficlights_tester___024root* vlSelf);

Vtwotrafficlights_tester___024root::Vtwotrafficlights_tester___024root(Vtwotrafficlights_tester__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtwotrafficlights_tester___024root___ctor_var_reset(this);
}

void Vtwotrafficlights_tester___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtwotrafficlights_tester___024root::~Vtwotrafficlights_tester___024root() {
}
