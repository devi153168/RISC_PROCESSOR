module pc (
    input logic        clk,
    input logic        reset,
    input logic        enable,

    output logic [31:0] pc
);

    always_ff @(posedge clk) begin

        if (reset)
            pc <= 32'b0;

        else if (enable)
            pc <= pc + 32'd4;

    end

endmodule