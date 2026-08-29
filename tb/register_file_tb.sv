module risc_processor_tb;

    logic clk;
    logic reset;

    risc_processor dut (
        .clk(clk),
        .reset(reset)
    );

    always #5 clk = ~clk;

    initial begin

        clk = 0;
        reset = 1;

        $display("====================================");
        $display("       RISC-V PROCESSOR TEST");
        $display("====================================");

        #10;

        reset = 0;

        // Observe processor execution
        #10;
        $display("Cycle 1: PC = %d, Instruction = %h",
                 dut.pc,
                 dut.instruction);

        #10;
        $display("Cycle 2: PC = %d, Instruction = %h",
                 dut.pc,
                 dut.instruction);

        #10;
        $display("Cycle 3: PC = %d, Instruction = %h",
                 dut.pc,
                 dut.instruction);

        #10;
        $display("Cycle 4: PC = %d, Instruction = %h",
                 dut.pc,
                 dut.instruction);

        #10;
        $display("Cycle 5: PC = %d, Instruction = %h",
                 dut.pc,
                 dut.instruction);

        #10;

        $display("====================================");
        $display("          TEST COMPLETE");
        $display("====================================");

        $finish;

    end

endmodule