module if_id_tb;

    logic clk;
    logic reset;

    logic [31:0] pc_in;
    logic [31:0] instruction_in;

    logic [31:0] pc_out;
    logic [31:0] instruction_out;


    if_id dut (
        .clk(clk),
        .reset(reset),
        .pc_in(pc_in),
        .instruction_in(instruction_in),
        .pc_out(pc_out),
        .instruction_out(instruction_out)
    );


    always #5 clk = ~clk;


    initial begin

        clk = 0;
        reset = 1;

        pc_in = 0;
        instruction_in = 0;

        #10;

        reset = 0;

        pc_in = 32'd4;
        instruction_in = 32'h002081B3;

        #10;

        $display("================================");
        $display("        IF/ID TEST");
        $display("================================");

        $display("PC Out          = %d", pc_out);
        $display("Instruction Out = %h", instruction_out);

        #10;

        pc_in = 32'd8;
        instruction_in = 32'h40118233;

        #10;

        $display("PC Out          = %d", pc_out);
        $display("Instruction Out = %h", instruction_out);

        $display("================================");
        $display("        TEST COMPLETE");
        $display("================================");

        $finish;

    end

endmodule