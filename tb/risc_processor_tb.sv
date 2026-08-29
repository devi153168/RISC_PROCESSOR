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

        $display("");
        $display("========================================");
        $display("        RISC-V PROCESSOR TEST");
        $display("========================================");

        #10;

        reset = 0;

        // Allow pipeline to execute
        #120;

        $display("");
        $display("========================================");
        $display("       REGISTER FILE RESULTS");
        $display("========================================");

        $display("x1 = %d", dut.registers.registers[1]);
        $display("x2 = %d", dut.registers.registers[2]);
        $display("x3 = %d", dut.registers.registers[3]);
        $display("x4 = %d", dut.registers.registers[4]);
        $display("x5 = %d", dut.registers.registers[5]);
        $display("x6 = %d", dut.registers.registers[6]);
        $display("x7 = %d", dut.registers.registers[7]);

        $display("");
        $display("========================================");
        $display("          TEST COMPLETE");
        $display("========================================");

        $finish;

    end

endmodule