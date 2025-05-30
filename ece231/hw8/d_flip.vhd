library ieee;
use ieee.std_logic_1164.all;

entity d_flip_flop is
port ( D, clk : in STD_LOGIC;
       Q, Qnot : out STD_LOGIC );
end d_flip;

architecture behavioral of d_flip is
	begin
		Qnot <= not(Q);
		process(clk)
		
		begin
		if (rising_edge(clk)) then Q <= D;
		end if;
	end process;
end behavioral;
