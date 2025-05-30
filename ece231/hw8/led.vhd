library ieee;
use ieee.std_logic_1164.all

entity led is 
	port( InA, InB : in std_logic_vector(3 downto 0);
	      led_signal : out std_logic_vector(0 to 15);
end led;

architecture structural of led is
	component Adder4bit
		port( A, B : in std_logic_vector(3 downto 0);
		     Sum : out std_logic_vector(3 downto 0);
		    );
	end component;

	component Decoder4to16
		port( X : in std_logic_vector(3 downto 0);
		      Y : out std_logic_vector(0 to 15);
		    );
	end component;
	
	signal Sum : std_logic_vector(3 downto 0);
	
begin
       	adder : Adder4bit port map (A => inA, B => InB, Sum => Sum);
	Decoder: Decoder4to16 port map (X => Sum, Y => led_signal);
end structural;
