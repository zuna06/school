library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity mult16bit is
port (
    A, B : in std_logic_vector(15 downto 0);
    Product : out std_logic_vector(31 downto 0)
);
end mult16bit;

architecture multoperator of mult16bit is
    signal sA, sB : signed(15 downto 0);
    signal sProd : signed(31 downto 0);
begin
    sA <= signed(A);    
    sB <= signed(B);    
    sProd <= sA * sB;   
    Product <= std_logic_vector(sProd);
end multoperator;
