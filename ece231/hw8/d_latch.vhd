library ieee;
use ieee.std_logic_1164.all;

entity d_latch is 
port (D, EN : in std_logic;
      Q, QNOT : out std_logic);
end d_latch;

architecture behavioral of d_latch is
begin
	process(D, EN)
	begin
		if(EN = '1') then Q <= D;
		end if;
	end process;
	QNOT <= not(Q);
end behavioral;
