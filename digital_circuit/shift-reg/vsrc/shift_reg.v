module shift_reg (
    input wire [7:0] din      ,
    input wire [2:0] shamt    ,
    input wire       LR       , //L=1
    input wire       AL       , //A=1

    output reg [7:0] dout     
);
    

    always @(*) begin
        case(shamt)
            3'b000: begin
                dout = din;
            end
            3'b001:
                case({LR, AL}) 
                    2'b00:      dout = {1'b0, din[7:1]};
                    2'b01:      dout = {din[7], din[7:1]};
                    default:    dout = {din[6:0], 1'b0};
                endcase
            3'b010:
                case({LR, AL}) 
                    2'b00:      dout = {2'b0, din[7:2]};
                    2'b01:      dout = {{2{din[7]}}, din[7:2]};
                    default:    dout = {din[5:0], 2'b0};
                endcase
            3'b011:
                case({LR, AL}) 
                    2'b00:      dout = {3'b0, din[7:3]};
                    2'b01:      dout = {{3{din[7]}}, din[7:3]};
                    default:    dout = {din[4:0], 3'b0};
                endcase
            3'b100:
                case({LR, AL}) 
                    2'b00:      dout = {4'b0, din[7:4]};
                    2'b01:      dout = {{4{din[7]}}, din[7:4]};
                    default:    dout = {din[3:0], 4'b0};
                endcase
            3'b101:
                case({LR, AL}) 
                    2'b00:      dout = {5'b0, din[7:5]};
                    2'b01:      dout = {{5{din[7]}}, din[7:5]};
                    default:    dout = {din[2:0], 5'b0};
                endcase
            3'b110:
                case({LR, AL}) 
                    2'b00:      dout = {6'b0, din[7:6]};
                    2'b01:      dout = {{6{din[7]}}, din[7:6]};
                    default:    dout = {din[1:0], 6'b0};
                endcase
            default:
                case({LR, AL}) 
                    2'b00:      dout = {7'b0, din[7]};
                    2'b01:      dout = {{7{din[7]}}, din[7]};
                    default:    dout = {din[0], 7'b0};
                endcase
        endcase
    end
endmodule