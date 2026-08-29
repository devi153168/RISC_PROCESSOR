module forwarding_unit (

    input logic [4:0] id_ex_rs1,
    input logic [4:0] id_ex_rs2,

    input logic [4:0] ex_mem_rd,
    input logic       ex_mem_reg_write,

    input logic [4:0] mem_wb_rd,
    input logic       mem_wb_reg_write,

    output logic [1:0] forward_a,
    output logic [1:0] forward_b

);

    always_comb begin

        // Default: no forwarding
        forward_a = 2'b00;
        forward_b = 2'b00;


        // =====================================
        // EX/MEM FORWARDING
        // Highest priority
        // =====================================

        if (ex_mem_reg_write &&
            (ex_mem_rd != 5'd0) &&
            (ex_mem_rd == id_ex_rs1)) begin

            forward_a = 2'b10;

        end

        if (ex_mem_reg_write &&
            (ex_mem_rd != 5'd0) &&
            (ex_mem_rd == id_ex_rs2)) begin

            forward_b = 2'b10;

        end


        // =====================================
        // MEM/WB FORWARDING
        // Only if EX/MEM didn't forward
        // =====================================

        if ((forward_a == 2'b00) &&
            mem_wb_reg_write &&
            (mem_wb_rd != 5'd0) &&
            (mem_wb_rd == id_ex_rs1)) begin

            forward_a = 2'b01;

        end

        if ((forward_b == 2'b00) &&
            mem_wb_reg_write &&
            (mem_wb_rd != 5'd0) &&
            (mem_wb_rd == id_ex_rs2)) begin

            forward_b = 2'b01;

        end

    end

endmodule