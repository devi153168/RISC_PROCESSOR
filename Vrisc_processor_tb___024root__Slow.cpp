// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_processor_tb.h for the primary calling header

#include "Vrisc_processor_tb__pch.h"

void Vrisc_processor_tb___024root___ctor_var_reset(Vrisc_processor_tb___024root* vlSelf);

Vrisc_processor_tb___024root::Vrisc_processor_tb___024root(Vrisc_processor_tb__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vrisc_processor_tb___024root___ctor_var_reset(this);
}

void Vrisc_processor_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vrisc_processor_tb___024root::~Vrisc_processor_tb___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
