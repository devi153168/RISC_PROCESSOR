module pc_tb;

    logic clk;
    logic reset;
    logic enable;

    logic [31:0] pc;

    pc dut (
        .clk(clk),
        .reset(reset),
        .enable(enable),
        .pc(pc)
    );

    always #5 clk = ~clk;

    initial begin

        clk = 0;
        reset = 1;
        enable = 0;

        #10;

        reset = 0;
        enable = 1;

        #10;
        $display("PC = %d", pc);

        #10;
        $display("PC = %d", pc);

        #10;
        $display("PC = %d", pc);

        #10;
        $display("PC = %d", pc);

        enable = 0;

        #10;
        $display("PC after disable = %d", pc);

        $finish;

    end

endmodule