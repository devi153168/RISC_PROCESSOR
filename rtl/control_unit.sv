module control_unit (
    input  logic [6:0] opcode,

    output logic       reg_write,
    output logic       alu_src
);

    always_comb begin

        // Default values
        reg_write = 1'b0;
        alu_src   = 1'b0;

        case (opcode)

            // R-type: ADD, SUB, AND, OR
            7'b0110011: begin
                reg_write = 1'b1;
                alu_src   = 1'b0;
            end

            // I-type: ADDI
            7'b0010011: begin
                reg_write = 1'b1;
                alu_src   = 1'b1;
            end

            // Unknown instruction
            default: begin
                reg_write = 1'b0;
                alu_src   = 1'b0;
            end

        endcase

    end

endmodule