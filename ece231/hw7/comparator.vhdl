library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity comp8bit is
port (
    A, B : in std_logic_vector(7 downto 0);
    GT, EQ, LT : out std_logic
);
end comp8bit;

architecture comp8operator of comp8bit is
    signal uA, uB : unsigned;
begin
    uA <= unsigned(A);  
    uB <= unsigned(B);  
    
    EQ <= '1' when uA = uB else '0';  
    GT <= '1' when uA > uB else '0';  
    LT <= '1' when uA < uB else '0';  
end comp8operator;
