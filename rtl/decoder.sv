module decoder (
    input logic [31:0] instruction,

    output logic [4:0] rs1,
    output logic [4:0] rs2,
    output logic [4:0] rd,

    output logic [3:0] alu_control,
    output logic       alu_src,
    output logic       reg_write,

    output logic       mem_read,
    output logic       mem_write,
    output logic       mem_to_reg
);

    logic [6:0] opcode;
    logic [2:0] funct3;
    logic       funct7;

    always_comb begin

        opcode = instruction[6:0];
        funct3 = instruction[14:12];
        funct7 = instruction[30];

        rs1 = instruction[19:15];
        rs2 = instruction[24:20];
        rd  = instruction[11:7];

        alu_control = 4'b0000;
        alu_src     = 1'b0;
        reg_write   = 1'b0;

        mem_read    = 1'b0;
        mem_write   = 1'b0;
        mem_to_reg  = 1'b0;

        case (opcode)

            // ==========================
            // R-TYPE
            // ==========================
            7'b0110011: begin

                reg_write = 1'b1;
                alu_src   = 1'b0;

                case (funct3)

                    3'b000: begin
                        if (funct7)
                            alu_control = 4'b0001; // SUB
                        else
                            alu_control = 4'b0000; // ADD
                    end

                    3'b111:
                        alu_control = 4'b0010; // AND

                    3'b110:
                        alu_control = 4'b0011; // OR

                    3'b100:
                        alu_control = 4'b0100; // XOR

                    default:
                        alu_control = 4'b0000;

                endcase

            end


            // ==========================
            // ADDI
            // ==========================
            7'b0010011: begin

                reg_write   = 1'b1;
                alu_src     = 1'b1;
                alu_control = 4'b0000;

            end


            // ==========================
            // LW
            // ==========================
            7'b0000011: begin

                reg_write   = 1'b1;
                alu_src     = 1'b1;
                alu_control = 4'b0000;

                mem_read    = 1'b1;
                mem_to_reg  = 1'b1;

            end


            // ==========================
            // SW
            // ==========================
            7'b0100011: begin

                reg_write   = 1'b0;
                alu_src     = 1'b1;
                alu_control = 4'b0000;

                mem_write   = 1'b1;

            end


            default: begin

                alu_control = 4'b0000;
                alu_src     = 1'b0;
                reg_write   = 1'b0;

                mem_read    = 1'b0;
                mem_write   = 1'b0;
                mem_to_reg  = 1'b0;

            end

        endcase

    end

endmodule