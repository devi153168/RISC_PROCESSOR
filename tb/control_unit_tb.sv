module control_unit_tb;

    logic [6:0] opcode;

    logic reg_write;
    logic alu_src;

    control_unit dut (
        .opcode(opcode),
        .reg_write(reg_write),
        .alu_src(alu_src)
    );

    initial begin

        // R-type instruction
        // ADD, SUB, AND, OR
        opcode = 7'b0110011;
        #1;

        $display("R-type:");
        $display("Reg Write = %b", reg_write);
        $display("ALU Source = %b", alu_src);

        // I-type instruction
        // ADDI
        opcode = 7'b0010011;
        #1;

        $display("\nADDI:");
        $display("Reg Write = %b", reg_write);
        $display("ALU Source = %b", alu_src);

        // Unknown instruction
        opcode = 7'b0000000;
        #1;

        $display("\nUnknown:");
        $display("Reg Write = %b", reg_write);
        $display("ALU Source = %b", alu_src);

        $finish;

    end

endmodule