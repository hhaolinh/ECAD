// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtwotrafficlights_tester__pch.h"

//============================================================
// Constructors

Vtwotrafficlights_tester::Vtwotrafficlights_tester(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtwotrafficlights_tester__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , lightsA{vlSymsp->TOP.lightsA}
    , lightsB{vlSymsp->TOP.lightsB}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtwotrafficlights_tester::Vtwotrafficlights_tester(const char* _vcname__)
    : Vtwotrafficlights_tester(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtwotrafficlights_tester::~Vtwotrafficlights_tester() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtwotrafficlights_tester___024root___eval_debug_assertions(Vtwotrafficlights_tester___024root* vlSelf);
#endif  // VL_DEBUG
void Vtwotrafficlights_tester___024root___eval_static(Vtwotrafficlights_tester___024root* vlSelf);
void Vtwotrafficlights_tester___024root___eval_initial(Vtwotrafficlights_tester___024root* vlSelf);
void Vtwotrafficlights_tester___024root___eval_settle(Vtwotrafficlights_tester___024root* vlSelf);
void Vtwotrafficlights_tester___024root___eval(Vtwotrafficlights_tester___024root* vlSelf);

void Vtwotrafficlights_tester::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtwotrafficlights_tester::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtwotrafficlights_tester___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtwotrafficlights_tester___024root___eval_static(&(vlSymsp->TOP));
        Vtwotrafficlights_tester___024root___eval_initial(&(vlSymsp->TOP));
        Vtwotrafficlights_tester___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtwotrafficlights_tester___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtwotrafficlights_tester::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtwotrafficlights_tester::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtwotrafficlights_tester::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtwotrafficlights_tester___024root___eval_final(Vtwotrafficlights_tester___024root* vlSelf);

VL_ATTR_COLD void Vtwotrafficlights_tester::final() {
    Vtwotrafficlights_tester___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtwotrafficlights_tester::hierName() const { return vlSymsp->name(); }
const char* Vtwotrafficlights_tester::modelName() const { return "Vtwotrafficlights_tester"; }
unsigned Vtwotrafficlights_tester::threads() const { return 1; }
void Vtwotrafficlights_tester::prepareClone() const { contextp()->prepareClone(); }
void Vtwotrafficlights_tester::atClone() const {
    contextp()->threadPoolpOnClone();
}
