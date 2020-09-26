----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:12:54 09/24/2020 
-- Design Name: 
-- Module Name:    RAM - rtl 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;


entity RAM is
    Port ( 
			data_in : in std_logic_vector(7 downto 0);
			addr : in std_logic_vector(4 downto 0);
			w : in std_logic;
			r : in std_logic;
			clk : in std_logic;
			rst : in std_logic;
			data_out : out std_logic_vector(7 downto 0)
			  );
end RAM;

architecture rtl of RAM is

type ram_cells is array (31 downto 0) of std_logic_vector(7 downto 0);
signal ram : ram_cells:= 
(		
		"00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000",
		"00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000",
		"00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000",
		"00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000" , "00000000"
);

begin
	
	process (clk , rst)
		begin
		
		 if (rst = '0') then
				for i in 0 to 31 loop
					ram(i) <= "UUUUUUUU";
				end loop;	
		
		 else
				if (rising_edge(clk)) then
					if(w = '1' and r = '0') then  
						ram(to_integer(unsigned(addr))) <= data_in;
					
					elsif (r = '1' and w = '0') then 
						data_out <= ram(to_integer(unsigned(addr)));
					
					end if;
				
				end if;
				
		end if;
				
	end process;
	
end rtl;

