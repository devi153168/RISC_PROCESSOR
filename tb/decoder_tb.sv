module decoder_tb;

    logic [31:0] instruction;

    logic [4:0] rs1;
    logic [4:0] rs2;
    logic [4:0] rd;

    logic [2:0] alu_control;
    logic       alu_src;
    logic       reg_write;

    decoder dut (
        .instruction(instruction),
        .rs1(rs1),
        .rs2(rs2),
        .rd(rd),
        .alu_control(alu_control),
        .alu_src(alu_src),
        .reg_write(reg_write)
    );

    initial begin

        // ADD x3, x1, x2
        instruction = 32'b0000000_00010_00001_000_00011_0110011;
        #1;

        $display("ADD:");
        $display("rs1 = %d, rs2 = %d, rd = %d",
                 rs1, rs2, rd);
        $display("ALU Control = %b", alu_control);
        $display("ALU Source  = %b", alu_src);
        $display("Reg Write   = %b", reg_write);

        // SUB x4, x3, x1
        instruction = 32'b0100000_00001_00011_000_00100_0110011;
        #1;

        $display("\nSUB:");
        $display("rs1 = %d, rs2 = %d, rd = %d",
                 rs1, rs2, rd);
        $display("ALU Control = %b", alu_control);

        // AND x5, x1, x2
        instruction = 32'b0000000_00010_00001_111_00101_0110011;
        #1;

        $display("\nAND:");
        $display("rs1 = %d, rs2 = %d, rd = %d",
                 rs1, rs2, rd);
        $display("ALU Control = %b", alu_control);

        // OR x6, x1, x2
        instruction = 32'b0000000_00010_00001_110_00110_0110011;
        #1;

        $display("\nOR:");
        $display("rs1 = %d, rs2 = %d, rd = %d",
                 rs1, rs2, rd);
        $display("ALU Control = %b", alu_control);

        // ADDI x7, x0, 10
        instruction = 32'b000000001010_00000_000_00111_0010011;
        #1;

        $display("\nADDI:");
        $display("rs1 = %d, rd = %d",
                 rs1, rd);
        $display("ALU Control = %b", alu_control);
        $display("ALU Source  = %b", alu_src);
        $display("Reg Write   = %b", reg_write);

        $finish;

    end

endmodule