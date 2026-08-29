module alu_tb;

    logic [31:0] a;
    logic [31:0] b;
    logic [3:0]  alu_control;
    logic [31:0] result;
    logic        zero;

    alu dut (
        .a(a),
        .b(b),
        .alu_control(alu_control),
        .result(result),
        .zero(zero)
    );

    initial begin

        // ADD
        a = 10;
        b = 5;
        alu_control = 4'b0000;
        #10;
        $display("ADD: %0d + %0d = %0d", a, b, result);

        // SUB
        a = 10;
        b = 5;
        alu_control = 4'b0001;
        #10;
        $display("SUB: %0d - %0d = %0d", a, b, result);

        // AND
        a = 32'hFF;
        b = 32'h0F;
        alu_control = 4'b0010;
        #10;
        $display("AND: %h", result);

        // OR
        a = 32'hF0;
        b = 32'h0F;
        alu_control = 4'b0011;
        #10;
        $display("OR: %h", result);

        // XOR
        a = 32'hFF;
        b = 32'h0F;
        alu_control = 4'b0100;
        #10;
        $display("XOR: %h", result);

        $finish;

    end

endmodule