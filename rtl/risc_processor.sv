module risc_processor (
    input logic clk,
    input logic reset
);

    // =====================================================
    // PC
    // =====================================================

    logic [31:0] pc;
    logic        pc_write;

    pc pc_unit (
        .clk(clk),
        .reset(reset),
        .enable(pc_write),
        .pc(pc)
    );


    // =====================================================
    // INSTRUCTION MEMORY
    // =====================================================

    logic [31:0] instruction;

    instruction_memory imem (
        .address(pc),
        .instruction(instruction)
    );


    // =====================================================
    // IF / ID
    // =====================================================

    logic [31:0] if_id_pc;
    logic [31:0] if_id_instruction;
    logic        if_id_write;

    if_id if_id_unit (
        .clk(clk),
        .reset(reset),
        .write_enable(if_id_write),

        .pc_in(pc),
        .instruction_in(instruction),

        .pc_out(if_id_pc),
        .instruction_out(if_id_instruction)
    );


    // =====================================================
    // DECODER
    // =====================================================

    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] rd;

    logic [3:0] alu_control;
    logic       alu_src;
    logic       reg_write;

    logic       mem_read;
    logic       mem_write;
    logic       mem_to_reg;

    decoder decoder_unit (
        .instruction(if_id_instruction),

        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),

        .alu_control(alu_control),
        .alu_src(alu_src),
        .reg_write(reg_write),

        .mem_read(mem_read),
        .mem_write(mem_write),
        .mem_to_reg(mem_to_reg)
    );


    // =====================================================
    // MEM/WB SIGNALS
    // =====================================================

    logic [31:0] mem_wb_alu_result;
    logic [31:0] mem_wb_mem_data;

    logic [4:0] mem_wb_rd;

    logic mem_wb_reg_write;
    logic mem_wb_mem_to_reg;

    logic [31:0] write_data;


    // =====================================================
    // REGISTER FILE
    // =====================================================

    logic [31:0] read_data1;
    logic [31:0] read_data2;

    register_file registers (
        .clk(clk),
        .reset(reset),

        .reg_write(mem_wb_reg_write),

        .rs1(rs1),
        .rs2(rs2),

        .rd(mem_wb_rd),
        .write_data(write_data),

        .read_data1(read_data1),
        .read_data2(read_data2)
    );


    // =====================================================
    // WRITE BACK
    // =====================================================

    always_comb begin

        if (mem_wb_mem_to_reg)
            write_data = mem_wb_mem_data;
        else
            write_data = mem_wb_alu_result;

    end


    // =====================================================
    // IMMEDIATE GENERATOR
    // =====================================================

    logic [31:0] immediate;

    immediate_gen imm_gen (
        .instruction(if_id_instruction),
        .immediate(immediate)
    );


    // =====================================================
    // ID / EX SIGNALS
    // =====================================================

    logic [31:0] id_ex_pc;
    logic [31:0] id_ex_read_data1;
    logic [31:0] id_ex_read_data2;
    logic [31:0] id_ex_immediate;

    logic [4:0] id_ex_rs1;
    logic [4:0] id_ex_rs2;
    logic [4:0] id_ex_rd;

    logic [3:0] id_ex_alu_control;
    logic       id_ex_alu_src;
    logic       id_ex_reg_write;

    logic       id_ex_mem_read;
    logic       id_ex_mem_write;
    logic       id_ex_mem_to_reg;


    // =====================================================
    // HAZARD UNIT
    // =====================================================

    logic control_stall;

    hazard_unit hazard_unit_inst (
        .id_rs1(rs1),
        .id_rs2(rs2),

        .id_ex_rd(id_ex_rd),
        .id_ex_mem_read(id_ex_mem_read),

        .pc_write(pc_write),
        .if_id_write(if_id_write),
        .control_stall(control_stall)
    );


    // =====================================================
    // ID / EX
    // =====================================================

    id_ex id_ex_unit (
        .clk(clk),
        .reset(reset),

        .control_stall(control_stall),

        .pc_in(if_id_pc),

        .read_data1_in(read_data1),
        .read_data2_in(read_data2),

        .immediate_in(immediate),

        .rs1_in(rs1),
        .rs2_in(rs2),
        .rd_in(rd),

        .alu_control_in(alu_control),
        .alu_src_in(alu_src),
        .reg_write_in(reg_write),

        .mem_read_in(mem_read),
        .mem_write_in(mem_write),
        .mem_to_reg_in(mem_to_reg),

        .pc_out(id_ex_pc),

        .read_data1_out(id_ex_read_data1),
        .read_data2_out(id_ex_read_data2),

        .immediate_out(id_ex_immediate),

        .rs1_out(id_ex_rs1),
        .rs2_out(id_ex_rs2),
        .rd_out(id_ex_rd),

        .alu_control_out(id_ex_alu_control),
        .alu_src_out(id_ex_alu_src),
        .reg_write_out(id_ex_reg_write),

        .mem_read_out(id_ex_mem_read),
        .mem_write_out(id_ex_mem_write),
        .mem_to_reg_out(id_ex_mem_to_reg)
    );


    // =====================================================
    // EX/MEM SIGNALS
    // =====================================================

    logic [31:0] ex_mem_alu_result;
    logic [31:0] ex_mem_write_data;

    logic [4:0] ex_mem_rd;

    logic ex_mem_reg_write;
    logic ex_mem_mem_read;
    logic ex_mem_mem_write;
    logic ex_mem_mem_to_reg;


    // =====================================================
    // FORWARDING UNIT
    // =====================================================

    logic [1:0] forward_a;
    logic [1:0] forward_b;

    forwarding_unit forwarding_unit_inst (
        .id_ex_rs1(id_ex_rs1),
        .id_ex_rs2(id_ex_rs2),

        .ex_mem_rd(ex_mem_rd),
        .ex_mem_reg_write(ex_mem_reg_write),

        .mem_wb_rd(mem_wb_rd),
        .mem_wb_reg_write(mem_wb_reg_write),

        .forward_a(forward_a),
        .forward_b(forward_b)
    );


    // =====================================================
    // EX STAGE
    // =====================================================

    logic [31:0] alu_input_a;
    logic [31:0] alu_input_b;

    // NEW:
    // Actual value that must be stored by SW.
    logic [31:0] store_data;


    always_comb begin

        // -------------------------------------------------
        // ALU INPUT A
        // -------------------------------------------------

        case (forward_a)

            2'b00:
                alu_input_a = id_ex_read_data1;

            2'b10:
                alu_input_a = ex_mem_alu_result;

            2'b01:
                alu_input_a = write_data;

            default:
                alu_input_a = id_ex_read_data1;

        endcase


        // -------------------------------------------------
        // ALU INPUT B
        // -------------------------------------------------

        if (id_ex_alu_src) begin

            alu_input_b = id_ex_immediate;

        end

        else begin

            case (forward_b)

                2'b00:
                    alu_input_b = id_ex_read_data2;

                2'b10:
                    alu_input_b = ex_mem_alu_result;

                2'b01:
                    alu_input_b = write_data;

                default:
                    alu_input_b = id_ex_read_data2;

            endcase

        end


        // -------------------------------------------------
        // STORE DATA
        // -------------------------------------------------

        case (forward_b)

            2'b00:
                store_data = id_ex_read_data2;

            2'b10:
                store_data = ex_mem_alu_result;

            2'b01:
                store_data = write_data;

            default:
                store_data = id_ex_read_data2;

        endcase

    end


    // =====================================================
    // ALU
    // =====================================================

    logic [31:0] alu_result;
    logic        zero;

    alu alu_unit (
        .a(alu_input_a),
        .b(alu_input_b),

        .alu_control(id_ex_alu_control),

        .result(alu_result),
        .zero(zero)
    );


    // =====================================================
    // EX / MEM
    // =====================================================

    ex_mem ex_mem_unit (
        .clk(clk),
        .reset(reset),

        .alu_result_in(alu_result),

        // IMPORTANT:
        // Store the forwarded register value,
        // NOT the raw id_ex_read_data2.
        .write_data_in(store_data),

        .rd_in(id_ex_rd),

        .reg_write_in(id_ex_reg_write),

        .mem_read_in(id_ex_mem_read),
        .mem_write_in(id_ex_mem_write),
        .mem_to_reg_in(id_ex_mem_to_reg),

        .alu_result_out(ex_mem_alu_result),
        .write_data_out(ex_mem_write_data),

        .rd_out(ex_mem_rd),

        .reg_write_out(ex_mem_reg_write),

        .mem_read_out(ex_mem_mem_read),
        .mem_write_out(ex_mem_mem_write),
        .mem_to_reg_out(ex_mem_mem_to_reg)
    );


    // =====================================================
    // DATA MEMORY
    // =====================================================

    logic [31:0] memory_data;

    data_memory data_mem (
        .clk(clk),

        .mem_read(ex_mem_mem_read),
        .mem_write(ex_mem_mem_write),

        .address(ex_mem_alu_result),

        .write_data(ex_mem_write_data),

        .read_data(memory_data)
    );


    // =====================================================
    // MEM / WB
    // =====================================================

    mem_wb mem_wb_unit (
        .clk(clk),
        .reset(reset),

        .alu_result_in(ex_mem_alu_result),

        .mem_data_in(memory_data),

        .rd_in(ex_mem_rd),

        .reg_write_in(ex_mem_reg_write),

        .mem_to_reg_in(ex_mem_mem_to_reg),

        .alu_result_out(mem_wb_alu_result),

        .mem_data_out(mem_wb_mem_data),

        .rd_out(mem_wb_rd),

        .reg_write_out(mem_wb_reg_write),

        .mem_to_reg_out(mem_wb_mem_to_reg)
    );

endmodule

