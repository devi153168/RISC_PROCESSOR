module hazard_unit_tb;

    logic [4:0] id_rs1;
    logic [4:0] id_rs2;

    logic [4:0] id_ex_rd;
    logic       id_ex_mem_read;

    logic       pc_write;
    logic       if_id_write;
    logic       control_stall;

    hazard_unit dut (
        .id_rs1(id_rs1),
        .id_rs2(id_rs2),
        .id_ex_rd(id_ex_rd),
        .id_ex_mem_read(id_ex_mem_read),
        .pc_write(pc_write),
        .if_id_write(if_id_write),
        .control_stall(control_stall)
    );

    initial begin

        // No hazard
        id_rs1 = 5'd1;
        id_rs2 = 5'd2;
        id_ex_rd = 5'd3;
        id_ex_mem_read = 1'b0;

        #1;

        $display("================================");
        $display("       HAZARD UNIT TEST");
        $display("================================");

        $display("No Hazard:");
        $display("PC Write      = %d", pc_write);
        $display("IF/ID Write   = %d", if_id_write);
        $display("Control Stall = %d", control_stall);


        // Load-use hazard
        id_rs1 = 5'd3;
        id_rs2 = 5'd2;
        id_ex_rd = 5'd3;
        id_ex_mem_read = 1'b1;

        #1;

        $display("");
        $display("Load-Use Hazard:");
        $display("PC Write      = %d", pc_write);
        $display("IF/ID Write   = %d", if_id_write);
        $display("Control Stall = %d", control_stall);

        $display("================================");
        $display("        TEST COMPLETE");
        $display("================================");

        $finish;

    end

endmodule