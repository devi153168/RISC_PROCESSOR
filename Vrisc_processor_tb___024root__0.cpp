// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_processor_tb.h for the primary calling header

#include "Vrisc_processor_tb__pch.h"

VlCoroutine Vrisc_processor_tb___024root___eval_initial__TOP__Vtiming__0(Vrisc_processor_tb___024root* vlSelf);
VlCoroutine Vrisc_processor_tb___024root___eval_initial__TOP__Vtiming__1(Vrisc_processor_tb___024root* vlSelf);

void Vrisc_processor_tb___024root___eval_initial(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval_initial\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        IData/*31:0*/ __Vinline_0__eval_initial__TOP_risc_processor_tb__DOT__dut__DOT__data_mem__DOT__i;
        __Vinline_0__eval_initial__TOP_risc_processor_tb__DOT__dut__DOT__data_mem__DOT__i = 0;
        __Vinline_0__eval_initial__TOP_risc_processor_tb__DOT__dut__DOT__data_mem__DOT__i = 0U;
        while (VL_GTS_III(32, 0x00000100U, __Vinline_0__eval_initial__TOP_risc_processor_tb__DOT__dut__DOT__data_mem__DOT__i)) {
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory[(0x000000ffU 
                                                                               & __Vinline_0__eval_initial__TOP_risc_processor_tb__DOT__dut__DOT__data_mem__DOT__i)] = 0U;
            __Vinline_0__eval_initial__TOP_risc_processor_tb__DOT__dut__DOT__data_mem__DOT__i 
                = ((IData)(1U) + __Vinline_0__eval_initial__TOP_risc_processor_tb__DOT__dut__DOT__data_mem__DOT__i);
        }
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[0U] = 0x00a00093U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[1U] = 0x00500113U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[2U] = 0x002081b3U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[3U] = 0x40118233U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[4U] = 0x0020f2b3U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[5U] = 0x0020e333U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[6U] = 0x00102023U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[7U] = 0x00002383U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[8U] = 0x00000013U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[9U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[10U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[11U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[12U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[13U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[14U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[15U] = 0U;
    }
    Vrisc_processor_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vrisc_processor_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vrisc_processor_tb___024root___eval_initial__TOP__Vtiming__0(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_processor_tb__DOT__clk = 0U;
    vlSelfRef.risc_processor_tb__DOT__reset = 1U;
    VL_WRITEF_NX("\n========================================\n        RISC-V PROCESSOR TEST\n========================================\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                         nullptr, "tb/risc_processor_tb.sv", 
                                         24);
    vlSelfRef.risc_processor_tb__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000078ULL, 
                                         nullptr, "tb/risc_processor_tb.sv", 
                                         29);
    VL_WRITEF_NX("\n========================================\n       REGISTER FILE RESULTS\n========================================\nx1 = %d\nx2 = %d\nx3 = %d\nx4 = %d\nx5 = %d\nx6 = %d\nx7 = %d\n\n========================================\n          TEST COMPLETE\n========================================\n",7
                 , '#',32,vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[1U]
                 , '#',32,vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[2U]
                 , '#',32,vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[3U]
                 , '#',32,vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[4U]
                 , '#',32,vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[5U]
                 , '#',32,vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[6U]
                 , '#',32,vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[7U]);
    VL_FINISH_MT("tb/risc_processor_tb.sv", 49, "");
    co_return;
}

VlCoroutine Vrisc_processor_tb___024root___eval_initial__TOP__Vtiming__1(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/risc_processor_tb.sv", 
                                             11);
        vlSelfRef.risc_processor_tb__DOT__clk = (1U 
                                                 & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__clk)));
    }
    co_return;
}

bool Vrisc_processor_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vrisc_processor_tb___024root___nba_sequent__TOP__0(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___nba_sequent__TOP__0\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ risc_processor_tb__DOT__dut__DOT__forward_a;
    risc_processor_tb__DOT__dut__DOT__forward_a = 0;
    CData/*1:0*/ risc_processor_tb__DOT__dut__DOT__forward_b;
    risc_processor_tb__DOT__dut__DOT__forward_b = 0;
    CData/*6:0*/ risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode;
    risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode = 0;
    CData/*2:0*/ risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct3;
    risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct3 = 0;
    CData/*0:0*/ risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct7;
    risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct7 = 0;
    IData/*31:0*/ __Vdly__risc_processor_tb__DOT__dut__DOT__pc;
    __Vdly__risc_processor_tb__DOT__dut__DOT__pc = 0;
    IData/*31:0*/ __VdlyVal__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0;
    __VdlyVal__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0 = 0;
    CData/*7:0*/ __VdlyDim0__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0;
    __VdlyDim0__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0;
    __VdlySet__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0 = 0;
    CData/*0:0*/ __VdlySet__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v0;
    __VdlySet__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v0 = 0;
    IData/*31:0*/ __VdlyVal__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32;
    __VdlyVal__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32 = 0;
    CData/*4:0*/ __VdlyDim0__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32;
    __VdlyDim0__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32 = 0;
    CData/*0:0*/ __VdlySet__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32;
    __VdlySet__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32 = 0;
    // Body
    __Vdly__risc_processor_tb__DOT__dut__DOT__pc = vlSelfRef.risc_processor_tb__DOT__dut__DOT__pc;
    __VdlySet__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0 = 0U;
    __VdlySet__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v0 = 0U;
    __VdlySet__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32 = 0U;
    if (vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_mem_write) {
        __VdlyVal__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0 
            = vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_write_data;
        __VdlyDim0__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0 
            = (0x000000ffU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_alu_result 
                              >> 2U));
        __VdlySet__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0 = 1U;
    }
    if (vlSelfRef.risc_processor_tb__DOT__reset) {
        __Vdly__risc_processor_tb__DOT__dut__DOT__pc = 0U;
        __VdlySet__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v0 = 1U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_immediate = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rs1 = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rs2 = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_alu_result = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_mem_data = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_read_data1 = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_read_data2 = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_write_data = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_alu_result = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_control = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_rd = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rd = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction = 0U;
    } else {
        if (((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_reg_write) 
             & (0U != (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd)))) {
            __VdlyVal__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32 
                = vlSelfRef.risc_processor_tb__DOT__dut__DOT__write_data;
            __VdlyDim0__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32 
                = vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd;
            __VdlySet__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32 = 1U;
        }
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_alu_result 
            = vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_alu_result;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_mem_data 
            = (vlSelfRef.risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory
               [(0x000000ffU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_alu_result 
                                >> 2U))] & (- (IData)((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_mem_read))));
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_write_data 
            = vlSelfRef.risc_processor_tb__DOT__dut__DOT__store_data;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_alu_result 
            = (((4U & (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_control))
                 ? ((2U & (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_control))
                     ? ((1U & (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_control))
                         ? (1U & (- (IData)(VL_LTS_III(32, vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_a, vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_b))))
                         : (vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_a 
                            >> (0x0000001fU & vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_b)))
                     : ((1U & (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_control))
                         ? (vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_a 
                            << (0x0000001fU & vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_b))
                         : (vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_a 
                            ^ vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_b)))
                 : ((2U & (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_control))
                     ? ((1U & (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_control))
                         ? (vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_a 
                            | vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_b)
                         : (vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_a 
                            & vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_b))
                     : ((1U & (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_control))
                         ? (vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_a 
                            - vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_b)
                         : (vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_a 
                            + vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_b)))) 
               & (- (IData)((1U & (~ ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_control) 
                                      >> 3U))))));
        if (vlSelfRef.risc_processor_tb__DOT__dut__DOT__control_stall) {
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_immediate = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rs1 = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rs2 = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_read_data1 = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_read_data2 = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd 
                = vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_rd;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_rd 
                = vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rd;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_control = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rd = 0U;
        } else {
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_immediate 
                = (((0x13U == (0x0000007fU & vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction)) 
                    | (3U == (0x0000007fU & vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction)))
                    ? (((- (IData)((vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                    >> 0x0000001fU))) 
                        << 0x0000000cU) | (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                           >> 0x00000014U))
                    : ((((- (IData)((vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                     >> 0x0000001fU))) 
                         << 0x0000000cU) | ((0x00000fe0U 
                                             & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                                >> 0x00000014U)) 
                                            | (0x0000001fU 
                                               & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                                  >> 7U)))) 
                       & (- (IData)((0x23U == (0x0000007fU 
                                               & vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction))))));
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rs1 
                = (0x0000001fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                  >> 0x0000000fU));
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rs2 
                = (0x0000001fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                  >> 0x00000014U));
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_read_data1 
                = (((((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd) 
                      == (0x0000001fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                         >> 0x0000000fU))) 
                     & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                     ? vlSelfRef.risc_processor_tb__DOT__dut__DOT__write_data
                     : vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers
                    [(0x0000001fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                     >> 0x0000000fU))]) 
                   & (- (IData)((0U != (0x0000001fU 
                                        & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                           >> 0x0000000fU))))));
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_read_data2 
                = (((((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd) 
                      == (0x0000001fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                         >> 0x00000014U))) 
                     & (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1))
                     ? vlSelfRef.risc_processor_tb__DOT__dut__DOT__write_data
                     : vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers
                    [(0x0000001fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                     >> 0x00000014U))]) 
                   & (- (IData)((0U != (0x0000001fU 
                                        & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                           >> 0x00000014U))))));
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd 
                = vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_rd;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_rd 
                = vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rd;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_control 
                = vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rd 
                = (0x0000001fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                  >> 7U));
        }
        if ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__control_stall)))) {
            __Vdly__risc_processor_tb__DOT__dut__DOT__pc 
                = ((IData)(4U) + vlSelfRef.risc_processor_tb__DOT__dut__DOT__pc);
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                = vlSelfRef.risc_processor_tb__DOT__dut__DOT__imem__DOT__memory
                [(0x0000000fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__pc 
                                 >> 2U))];
        }
    }
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_src 
        = ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__reset))) 
           && ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__control_stall))) 
               && (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src)));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_mem_to_reg 
        = ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__reset))) 
           && (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_mem_to_reg));
    if (__VdlySet__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0) {
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory[__VdlyDim0__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0] 
            = __VdlyVal__risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory__v0;
    }
    if (__VdlySet__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v0) {
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[0U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[1U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[2U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[3U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[4U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[5U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[6U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[7U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[8U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[9U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[10U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[11U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[12U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[13U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[14U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[15U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[16U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[17U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[18U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[19U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[20U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[21U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[22U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[23U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[24U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[25U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[26U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[27U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[28U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[29U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[30U] = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[31U] = 0U;
    }
    if (__VdlySet__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32) {
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[__VdlyDim0__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32] 
            = __VdlyVal__risc_processor_tb__DOT__dut__DOT__registers__DOT__registers__v32;
    }
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_mem_write 
        = ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__reset))) 
           && (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_mem_write));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_reg_write 
        = ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__reset))) 
           && (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_reg_write));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_mem_to_reg 
        = ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__reset))) 
           && (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_mem_to_reg));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__write_data 
        = ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_mem_to_reg)
            ? vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_mem_data
            : vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_alu_result);
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_mem_read 
        = ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__reset))) 
           && (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_mem_read));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_mem_write 
        = ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__reset))) 
           && ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__control_stall))) 
               && (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write)));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_reg_write 
        = ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__reset))) 
           && (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_reg_write));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_mem_to_reg 
        = ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__reset))) 
           && ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__control_stall))) 
               && (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg)));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_mem_read 
        = ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__reset))) 
           && ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__control_stall))) 
               && (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_reg_write) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd)));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_reg_write 
        = ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__reset))) 
           && ((1U & (~ (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__control_stall))) 
               && (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write)));
    risc_processor_tb__DOT__dut__DOT__forward_a = 0U;
    if ((((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_reg_write) 
          & (0U != (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_rd))) 
         & ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_rd) 
            == (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rs1)))) {
        risc_processor_tb__DOT__dut__DOT__forward_a = 2U;
    }
    if (((((0U == (IData)(risc_processor_tb__DOT__dut__DOT__forward_a)) 
           & (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_reg_write)) 
          & (0U != (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd))) 
         & ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd) 
            == (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rs1)))) {
        risc_processor_tb__DOT__dut__DOT__forward_a = 1U;
    }
    risc_processor_tb__DOT__dut__DOT__forward_b = 0U;
    if ((((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_reg_write) 
          & (0U != (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_rd))) 
         & ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_rd) 
            == (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rs2)))) {
        risc_processor_tb__DOT__dut__DOT__forward_b = 2U;
    }
    if (((((0U == (IData)(risc_processor_tb__DOT__dut__DOT__forward_b)) 
           & (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_reg_write)) 
          & (0U != (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd))) 
         & ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd) 
            == (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rs2)))) {
        risc_processor_tb__DOT__dut__DOT__forward_b = 1U;
    }
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_a 
        = ((0U == (IData)(risc_processor_tb__DOT__dut__DOT__forward_a))
            ? vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_read_data1
            : ((2U == (IData)(risc_processor_tb__DOT__dut__DOT__forward_a))
                ? vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_alu_result
                : ((1U == (IData)(risc_processor_tb__DOT__dut__DOT__forward_a))
                    ? vlSelfRef.risc_processor_tb__DOT__dut__DOT__write_data
                    : vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_read_data1)));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__store_data 
        = ((0U == (IData)(risc_processor_tb__DOT__dut__DOT__forward_b))
            ? vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_read_data2
            : ((2U == (IData)(risc_processor_tb__DOT__dut__DOT__forward_b))
                ? vlSelfRef.risc_processor_tb__DOT__dut__DOT__ex_mem_alu_result
                : ((1U == (IData)(risc_processor_tb__DOT__dut__DOT__forward_b))
                    ? vlSelfRef.risc_processor_tb__DOT__dut__DOT__write_data
                    : vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_read_data2)));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_input_b 
        = ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_alu_src)
            ? vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_immediate
            : vlSelfRef.risc_processor_tb__DOT__dut__DOT__store_data);
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__pc 
        = __Vdly__risc_processor_tb__DOT__dut__DOT__pc;
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__control_stall 
        = ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_mem_read) 
           & ((0U != (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rd)) 
              & (((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rd) 
                  == (0x0000001fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                     >> 0x0000000fU))) 
                 | ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rd) 
                    == (0x0000001fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                       >> 0x00000014U))))));
    risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode 
        = (0x0000007fU & vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction);
    risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct3 
        = (7U & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                 >> 0x0cU));
    risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct7 
        = (1U & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                 >> 0x1eU));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
    if ((0x00000040U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
    } else if ((0x00000020U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
        if ((0x00000010U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
            if ((8U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
            } else if ((4U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
            } else if ((2U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
                if ((1U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
                    vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 1U;
                    vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
                    vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control 
                        = ((4U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct3))
                            ? ((2U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct3))
                                ? ((1U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct3))
                                    ? 2U : 3U) : ((1U 
                                                   & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct3))
                                                   ? 0U
                                                   : 4U))
                            : ((2U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct3))
                                ? 0U : ((1U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct3))
                                         ? 0U : ((IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__funct7)
                                                  ? 1U
                                                  : 0U))));
                } else {
                    vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
                    vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
                    vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
                    vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
                    vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
                    vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
                }
            } else {
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
            }
        } else if ((8U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
        } else if ((4U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
        } else if ((2U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
            if ((1U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 1U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 1U;
            } else {
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
            }
        } else {
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
        }
    } else if ((0x00000010U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
        if ((8U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
        } else if ((4U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
        } else if ((2U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
            if ((1U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 1U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 1U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
            } else {
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
                vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
            }
        } else {
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
        }
    } else if ((8U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
    } else if ((4U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
    } else if ((2U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
        if ((1U & (IData)(risc_processor_tb__DOT__dut__DOT__decoder_unit__DOT__opcode))) {
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 1U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 1U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 1U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 1U;
        } else {
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
            vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
        }
    } else {
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_control = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__alu_src = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__reg_write = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_read = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_write = 0U;
        vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_to_reg = 0U;
    }
}

void Vrisc_processor_tb___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_processor_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vrisc_processor_tb___024root___eval_phase__act(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval_phase__act\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.risc_processor_tb__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_processor_tb__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__risc_processor_tb__DOT__clk__0 
            = vlSelfRef.risc_processor_tb__DOT__clk;
    }
    Vrisc_processor_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrisc_processor_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vrisc_processor_tb___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vrisc_processor_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
    }
    return (__VactExecute);
}

bool Vrisc_processor_tb___024root___eval_phase__inact(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval_phase__inact\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/risc_processor_tb.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vrisc_processor_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vrisc_processor_tb___024root___eval_phase__nba(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval_phase__nba\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vrisc_processor_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vrisc_processor_tb___024root___nba_sequent__TOP__0(vlSelf);
            }
        }
        Vrisc_processor_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vrisc_processor_tb___024root___eval(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vrisc_processor_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/risc_processor_tb.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/risc_processor_tb.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vrisc_processor_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/risc_processor_tb.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vrisc_processor_tb___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vrisc_processor_tb___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vrisc_processor_tb___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vrisc_processor_tb___024root___eval_debug_assertions(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval_debug_assertions\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
