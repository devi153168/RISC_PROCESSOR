// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_processor_tb.h for the primary calling header

#include "Vrisc_processor_tb__pch.h"

VL_ATTR_COLD void Vrisc_processor_tb___024root___eval_static(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval_static\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__risc_processor_tb__DOT__clk__0 
        = vlSelfRef.risc_processor_tb__DOT__clk;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vrisc_processor_tb___024root___eval_final(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval_final\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_processor_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrisc_processor_tb___024root___eval_phase__stl(Vrisc_processor_tb___024root* vlSelf);

VL_ATTR_COLD void Vrisc_processor_tb___024root___eval_settle(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval_settle\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vrisc_processor_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/risc_processor_tb.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vrisc_processor_tb___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vrisc_processor_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_processor_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vrisc_processor_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vrisc_processor_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vrisc_processor_tb___024root___stl_sequent__TOP__0(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_reg_write) 
                                                & (0U 
                                                   != (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_rd)));
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__control_stall 
        = ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_mem_read) 
           & ((0U != (IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rd)) 
              & (((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rd) 
                  == (0x0000001fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                     >> 0x0000000fU))) 
                 | ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__id_ex_rd) 
                    == (0x0000001fU & (vlSelfRef.risc_processor_tb__DOT__dut__DOT__if_id_instruction 
                                       >> 0x00000014U))))));
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
    vlSelfRef.risc_processor_tb__DOT__dut__DOT__write_data 
        = ((IData)(vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_mem_to_reg)
            ? vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_mem_data
            : vlSelfRef.risc_processor_tb__DOT__dut__DOT__mem_wb_alu_result);
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
}

VL_ATTR_COLD bool Vrisc_processor_tb___024root___eval_phase__stl(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___eval_phase__stl\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrisc_processor_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vrisc_processor_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vrisc_processor_tb___024root___stl_sequent__TOP__0(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool Vrisc_processor_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_processor_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vrisc_processor_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge risc_processor_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrisc_processor_tb___024root___ctor_var_reset(Vrisc_processor_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_processor_tb___024root___ctor_var_reset\n"); );
    Vrisc_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->risc_processor_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13121700145116158896ull);
    vlSelf->risc_processor_tb__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 275841190938946976ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8362410813265048148ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__if_id_instruction = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11751579010517489746ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__alu_control = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 10217095839936056292ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12130727433984107629ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11425937421427965154ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14461723024730204897ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18116026835122987852ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__mem_to_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6345581426496676973ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__mem_wb_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1299098779647936178ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__mem_wb_mem_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3075099262183481411ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__mem_wb_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11556296858146729917ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__mem_wb_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12586367464774543834ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__mem_wb_mem_to_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6420854976213573594ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9901311984481709933ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_read_data1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17522968463327508076ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_read_data2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2504103892937384557ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_immediate = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4097071126226524639ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_rs1 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1707303383942061186ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_rs2 = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1489280573326542470ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13822129557491999122ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_alu_control = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4000409957441262565ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_alu_src = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8509567056900395111ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13328695764383402600ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4675380960462969861ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1158359331033135137ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__id_ex_mem_to_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12629853466411691176ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__control_stall = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3910864739532976225ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__ex_mem_alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16182122728320155613ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__ex_mem_write_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11101477593622500368ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__ex_mem_rd = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17536709299602491302ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__ex_mem_reg_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5127250057914488949ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__ex_mem_mem_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17417571955713896505ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__ex_mem_mem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17326279805645654468ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__ex_mem_mem_to_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18442126881048719844ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__alu_input_a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8302168783883252188ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__alu_input_b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16574087743593403704ull);
    vlSelf->risc_processor_tb__DOT__dut__DOT__store_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17384786836655929516ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->risc_processor_tb__DOT__dut__DOT__data_mem__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11655311866785005846ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->risc_processor_tb__DOT__dut__DOT__registers__DOT__registers[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18064887176864051046ull);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->risc_processor_tb__DOT__dut__DOT__imem__DOT__memory[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13295937891173749779ull);
    }
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__risc_processor_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
