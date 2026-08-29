module instruction_memory (
    input  logic [31:0] address,
    output logic [31:0] instruction
);

    logic [31:0] memory [0:15];

    initial begin

        // =========================================
        // Existing ALU tests
        // =========================================

        // ADDI x1, x0, 10
        memory[0] = 32'b000000001010_00000_000_00001_0010011;

        // ADDI x2, x0, 5
        memory[1] = 32'b000000000101_00000_000_00010_0010011;

        // ADD x3, x1, x2
        memory[2] = 32'b0000000_00010_00001_000_00011_0110011;

        // SUB x4, x3, x1
        memory[3] = 32'b0100000_00001_00011_000_00100_0110011;

        // AND x5, x1, x2
        memory[4] = 32'b0000000_00010_00001_111_00101_0110011;

        // OR x6, x1, x2
        memory[5] = 32'b0000000_00010_00001_110_00110_0110011;

        // =========================================
        // STORE / LOAD TEST
        // =========================================

        // SW x1, 0(x0)
        //
        // Store x1 = 10 into memory address 0
        memory[6] = 32'b0000000_00001_00000_010_00000_0100011;

        // LW x7, 0(x0)
        //
        // Load memory[0] into x7
        memory[7] = 32'b000000000000_00000_010_00111_0000011;

        // NOP
        memory[8] = 32'b000000000000_00000_000_00000_0010011;

        memory[9]  = 32'b0;
        memory[10] = 32'b0;
        memory[11] = 32'b0;
        memory[12] = 32'b0;
        memory[13] = 32'b0;
        memory[14] = 32'b0;
        memory[15] = 32'b0;

    end


    always_comb begin

        instruction = memory[address[5:2]];

    end

endmodule