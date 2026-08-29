module hazard_unit (

    input logic [4:0] id_rs1,
    input logic [4:0] id_rs2,

    input logic [4:0] id_ex_rd,
    input logic       id_ex_mem_read,

    output logic       pc_write,
    output logic       if_id_write,
    output logic       control_stall

);

    always_comb begin

        // Normal operation
        pc_write      = 1'b1;
        if_id_write   = 1'b1;
        control_stall = 1'b0;

        // =====================================
        // LOAD-USE HAZARD
        // =====================================

        if (id_ex_mem_read &&
            (id_ex_rd != 5'd0) &&
            ((id_ex_rd == id_rs1) ||
             (id_ex_rd == id_rs2))) begin

            pc_write      = 1'b0;
            if_id_write   = 1'b0;
            control_stall = 1'b1;

        end

    end

endmodule