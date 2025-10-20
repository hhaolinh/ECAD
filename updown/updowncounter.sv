module updowncounter
  (
   input logic        clk,
   input logic        rst,
   input logic        up,
   output logic [3:0] count
   );

   // insert your code here
   always @(posedge clk) begin
      if (rst)
        count <= 0;
      else
        count <= count + (up ? 1 : -1);
   end
   

endmodule
