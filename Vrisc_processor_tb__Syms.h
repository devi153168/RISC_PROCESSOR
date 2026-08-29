// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISC_PROCESSOR_TB__SYMS_H_
#define VERILATED_VRISC_PROCESSOR_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrisc_processor_tb.h"

// INCLUDE MODULE CLASSES
#include "Vrisc_processor_tb___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vrisc_processor_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrisc_processor_tb* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrisc_processor_tb___024root   TOP;

    // CONSTRUCTORS
    Vrisc_processor_tb__Syms(VerilatedContext* contextp, const char* namep, Vrisc_processor_tb* modelp);
    ~Vrisc_processor_tb__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
