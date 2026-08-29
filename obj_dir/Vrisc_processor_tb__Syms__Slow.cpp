// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrisc_processor_tb__pch.h"

Vrisc_processor_tb__Syms::Vrisc_processor_tb__Syms(VerilatedContext* contextp, const char* namep, Vrisc_processor_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(314);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
}

Vrisc_processor_tb__Syms::~Vrisc_processor_tb__Syms() {
    // Tear down scopes
    // Tear down sub module instances
}
