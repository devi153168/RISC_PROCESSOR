module immediate_gen (
    input  logic [31:0] instruction,
    output logic [31:0] immediate
);

    logic [6:0] opcode;

    always_comb begin

        opcode = instruction[6:0];

        case (opcode)

            // =========================================
            // I-TYPE
            // ADDI / LW
            // =========================================

            7'b0010011,
            7'b0000011: begin

                immediate = {{20{instruction[31]}},
                             instruction[31:20]};

            end


            // =========================================
            // S-TYPE
            // SW
            // =========================================

            7'b0100011: begin

                immediate = {{20{instruction[31]}},
                             instruction[31:25],
                             instruction[11:7]};

            end


            // =========================================
            // DEFAULT
            // =========================================

            default: begin

                immediate = 32'b0;

            end

        endcase

    end

endmodule