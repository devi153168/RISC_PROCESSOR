module ex_mem_tb;

    logic clk;
    logic reset;

    logic [31:0] alu_result_in;
    logic [31:0] write_data_in;

    logic [4:0] rd_in;

    logic reg_write_in;
    logic mem_read_in;
    logic mem_write_in;

    logic [31:0] alu_result_out;
    logic [31:0] write_data_out;

    logic [4:0] rd_out;

    logic reg_write_out;
    logic mem_read_out;
    logic mem_write_out;


    ex_mem dut (
        .clk(clk),
        .reset(reset),

        .alu_result_in(alu_result_in),
        .write_data_in(write_data_in),

        .rd_in(rd_in),

        .reg_write_in(reg_write_in),
        .mem_read_in(mem_read_in),
        .mem_write_in(mem_write_in),

        .alu_result_out(alu_result_out),
        .write_data_out(write_data_out),

        .rd_out(rd_out),

        .reg_write_out(reg_write_out),
        .mem_read_out(mem_read_out),
        .mem_write_out(mem_write_out)
    );


    always #5 clk = ~clk;


    initial begin

        clk = 0;
        reset = 1;

        alu_result_in = 0;
        write_data_in = 0;

        rd_in = 0;

        reg_write_in = 0;
        mem_read_in = 0;
        mem_write_in = 0;

        #10;

        reset = 0;

        alu_result_in = 32'd15;
        write_data_in = 32'd5;

        rd_in = 5'd6;

        reg_write_in = 1;
        mem_read_in = 0;
        mem_write_in = 0;

        #10;

        $display("================================");
        $display("        EX/MEM TEST");
        $display("================================");

        $display("ALU Result      = %d", alu_result_out);
        $display("Write Data      = %d", write_data_out);
        $display("RD              = %d", rd_out);
        $display("Reg Write       = %b", reg_write_out);
        $display("Mem Read        = %b", mem_read_out);
        $display("Mem Write       = %b", mem_write_out);

        $display("================================");
        $display("        TEST COMPLETE");
        $display("================================");

        $finish;

    end

endmodule