// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrisc_processor_tb.h for the primary calling header

#ifndef VERILATED_VRISC_PROCESSOR_TB___024ROOT_H_
#define VERILATED_VRISC_PROCESSOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vrisc_processor_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrisc_processor_tb___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ risc_processor_tb__DOT__clk;
    CData/*0:0*/ risc_processor_tb__DOT__reset;
    CData/*3:0*/ risc_processor_tb__DOT__dut__DOT__alu_control;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__alu_src;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__reg_write;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__mem_read;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__mem_write;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__mem_to_reg;
    CData/*4:0*/ risc_processor_tb__DOT__dut__DOT__mem_wb_rd;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__mem_wb_reg_write;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__mem_wb_mem_to_reg;
    CData/*4:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_rs1;
    CData/*4:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_rs2;
    CData/*4:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_rd;
    CData/*3:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_alu_control;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_alu_src;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_reg_write;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_mem_read;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_mem_write;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_mem_to_reg;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__control_stall;
    CData/*4:0*/ risc_processor_tb__DOT__dut__DOT__ex_mem_rd;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__ex_mem_reg_write;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__ex_mem_mem_read;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__ex_mem_mem_write;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__ex_mem_mem_to_reg;
    CData/*0:0*/ __VdfgRegularize_hebeb780c_0_1;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__risc_processor_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__pc;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__if_id_instruction;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__mem_wb_alu_result;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__mem_wb_mem_data;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__write_data;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_read_data1;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_read_data2;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__id_ex_immediate;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__ex_mem_alu_result;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__ex_mem_write_data;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__alu_input_a;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__alu_input_b;
    IData/*31:0*/ risc_processor_tb__DOT__dut__DOT__store_data;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 256> risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory;
    VlUnpacked<IData/*31:0*/, 32> risc_processor_tb__DOT__dut__DOT__registers__DOT__registers;
    VlUnpacked<IData/*31:0*/, 16> risc_processor_tb__DOT__dut__DOT__imem__DOT__memory;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vrisc_processor_tb__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vrisc_processor_tb___024root(Vrisc_processor_tb__Syms* symsp, const char* namep);
    ~Vrisc_processor_tb___024root();
    VL_UNCOPYABLE(Vrisc_processor_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
