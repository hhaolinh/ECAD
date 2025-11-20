// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTWOTRAFFICLIGHTS_TESTER__SYMS_H_
#define VERILATED_VTWOTRAFFICLIGHTS_TESTER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtwotrafficlights_tester.h"

// INCLUDE MODULE CLASSES
#include "Vtwotrafficlights_tester___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtwotrafficlights_tester__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtwotrafficlights_tester* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtwotrafficlights_tester___024root TOP;

    // CONSTRUCTORS
    Vtwotrafficlights_tester__Syms(VerilatedContext* contextp, const char* namep, Vtwotrafficlights_tester* modelp);
    ~Vtwotrafficlights_tester__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
