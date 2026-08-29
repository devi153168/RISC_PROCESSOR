module immediate_gen_tb;

    logic [31:0] instruction;
    logic [31:0] immediate;

    immediate_gen dut (
        .instruction(instruction),
        .immediate(immediate)
    );

    initial begin

        // ADDI x7, x0, 10
        instruction = 32'b000000001010_00000_000_00111_0010011;
        #1;

        $display("ADDI immediate = %d", immediate);

        // ADDI x5, x1, 20
        instruction = 32'b000000010100_00001_000_00101_0010011;
        #1;

        $display("ADDI immediate = %d", immediate);

        // ADDI x6, x2, -5
        instruction = 32'b111111111011_00010_000_00110_0010011;
        #1;

        $display("ADDI immediate = %d", $signed(immediate));

        // R-type instruction
        instruction = 32'b0000000_00010_00001_000_00011_0110011;
        #1;

        $display("R-type immediate = %d", immediate);

        $finish;

    end

endmodule