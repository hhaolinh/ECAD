module twotrafficlights(
      input  logic clk,
      input  logic rst,
      output logic [2:0] lightsA, 
      output logic [2:0] lightsB
    );
  logic [2:0] state;
  // insert your code here
  localparam logic [2:0] R = 3'b100;
  localparam logic [2:0] A = 3'b010;
  localparam logic [2:0] G = 3'b001;
  localparam logic [2:0] RA = 3'b110;
  
  always @(posedge clk) begin
      if (rst)
        state <= 0;
      else
        state <= state + 1;
  end
  always_comb begin
    unique case (state)
      0: begin lightsA = R; lightsB = RA; end  
      1: begin lightsA = R; lightsB = G; end
      2: begin lightsA = R; lightsB = A; end
      3: begin lightsA = R; lightsB = R; end
      4: begin lightsA = RA; lightsB = R; end
      5: begin lightsA = G; lightsB = R; end
      6: begin lightsA = A; lightsB = R; end
      7: begin lightsA = R; lightsB = R; end
    endcase
  end
endmodule
