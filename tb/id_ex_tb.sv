module id_ex_tb;

    logic clk;
    logic reset;

    logic [31:0] pc_in;
    logic [31:0] read_data1_in;
    logic [31:0] read_data2_in;
    logic [31:0] immediate_in;

    logic [4:0] rs1_in;
    logic [4:0] rs2_in;
    logic [4:0] rd_in;

    logic [3:0] alu_control_in;
    logic alu_src_in;
    logic reg_write_in;

    logic [31:0] pc_out;
    logic [31:0] read_data1_out;
    logic [31:0] read_data2_out;
    logic [31:0] immediate_out;

    logic [4:0] rs1_out;
    logic [4:0] rs2_out;
    logic [4:0] rd_out;

    logic [3:0] alu_control_out;
    logic alu_src_out;
    logic reg_write_out;


    id_ex dut (
        .clk(clk),
        .reset(reset),

        .pc_in(pc_in),
        .read_data1_in(read_data1_in),
        .read_data2_in(read_data2_in),
        .immediate_in(immediate_in),

        .rs1_in(rs1_in),
        .rs2_in(rs2_in),
        .rd_in(rd_in),

        .alu_control_in(alu_control_in),
        .alu_src_in(alu_src_in),
        .reg_write_in(reg_write_in),

        .pc_out(pc_out),
        .read_data1_out(read_data1_out),
        .read_data2_out(read_data2_out),
        .immediate_out(immediate_out),

        .rs1_out(rs1_out),
        .rs2_out(rs2_out),
        .rd_out(rd_out),

        .alu_control_out(alu_control_out),
        .alu_src_out(alu_src_out),
        .reg_write_out(reg_write_out)
    );


    always #5 clk = ~clk;


    initial begin

        clk = 0;
        reset = 1;

        pc_in = 0;
        read_data1_in = 0;
        read_data2_in = 0;
        immediate_in = 0;

        rs1_in = 0;
        rs2_in = 0;
        rd_in = 0;

        alu_control_in = 0;
        alu_src_in = 0;
        reg_write_in = 0;

        #10;

        reset = 0;

        pc_in = 32'd4;
        read_data1_in = 32'd10;
        read_data2_in = 32'd5;
        immediate_in = 32'd20;

        rs1_in = 5'd1;
        rs2_in = 5'd2;
        rd_in = 5'd3;

        alu_control_in = 4'b0000;
        alu_src_in = 1;
        reg_write_in = 1;

        #10;

        $display("================================");
        $display("        ID/EX TEST");
        $display("================================");

        $display("PC              = %d", pc_out);
        $display("Read Data 1     = %d", read_data1_out);
        $display("Read Data 2     = %d", read_data2_out);
        $display("Immediate       = %d", immediate_out);
        $display("RS1             = %d", rs1_out);
        $display("RS2             = %d", rs2_out);
        $display("RD              = %d", rd_out);
        $display("ALU Control     = %b", alu_control_out);
        $display("ALU Source      = %b", alu_src_out);
        $display("Reg Write       = %b", reg_write_out);

        $display("================================");
        $display("        TEST COMPLETE");
        $display("================================");

        $finish;

    end

endmodule