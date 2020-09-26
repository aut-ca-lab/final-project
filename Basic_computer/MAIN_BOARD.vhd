----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:37:15 09/26/2020 
-- Design Name: 
-- Module Name:    MAIN_BOARD - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity MAIN_BOARD is

	Port(
		rst_ram :in STD_LOGIC;
		rst_cpu :in STD_LOGIC;
		clk : in STD_LOGIC
	);

end MAIN_BOARD;

architecture Behavioral of MAIN_BOARD is

component RAM is
    Port ( 
			data_in : in std_logic_vector(7 downto 0);
			addr : in std_logic_vector(4 downto 0);
			w : in std_logic;
			r : in std_logic;
			clk : in std_logic;
			rst : in std_logic;
			data_out : out std_logic_vector(7 downto 0)
			  );
end component RAM;


component CPU8BIT IS
	PORT (
		data_in : IN std_logic_vector(7 DOWNTO 0);
		data_out : OUT std_logic_vector(7 DOWNTO 0);
		adress : OUT std_logic_vector(4 DOWNTO 0);
		oe : OUT std_logic;
		we : OUT std_logic;
		rst : IN std_logic;
		clk : IN std_logic);
END component;

signal ram_to_cpu, cpu_to_ram : STD_LOGIC_VECTOR (7 DOWNTO 0);
signal oe_r,  we_w : STD_LOGIC;
signal address_sig : STD_LOGIC_VECTOR (4 DOWNTO 0); 

begin

ram_unit: RAM port map ( data_in => cpu_to_ram , w => we_w, r => oe_r, rst => rst_ram, clk => clk, data_out => ram_to_cpu, addr => address_sig);
cpu_unit: CPU8BIT port map (data_in => ram_to_cpu , we => we_w, oe => oe_r, rst => rst_cpu, clk => clk, data_out => cpu_to_ram, adress => address_sig);

end Behavioral;

