--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:32:55 09/24/2020
-- Design Name:   
-- Module Name:   E:/Education/CA/Lab/Basic_Computer/Basic_computer/uut_RAM.vhd
-- Project Name:  Basic_computer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: RAM
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
USE ieee.std_logic_unsigned.ALL;
use std.env.finish;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY uut_RAM IS
END uut_RAM;
 
ARCHITECTURE behavior OF uut_RAM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT RAM
    PORT(
         data_in : IN  std_logic_vector(7 downto 0);
         addr : IN  std_logic_vector(4 downto 0);
         w : IN  std_logic;
         r : IN  std_logic;
         clk : IN  std_logic;
         rst : IN  std_logic;
         data_out : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal data_in : std_logic_vector(7 downto 0) := (others => '0');
   signal addr : std_logic_vector(4 downto 0) := (others => '0');
   signal w : std_logic := '0';
   signal r : std_logic := '0';
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';

 	--Outputs
   signal data_out : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: RAM PORT MAP (
          data_in => data_in,
          addr => addr,
          w => w,
          r => r,
          clk => clk,
          rst => rst,
          data_out => data_out
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      rst <= '1';
      
		w <= '1';
		r <= '0';	
		addr <= "00000";
		data_in <= "00000000";
		
		wait for 50 ns;	
		
		for i in 0 to 30 loop
			addr <= addr + "00001";
			data_in <= data_in + "00000001";
			wait for clk_period*5;
		end loop;
		
		
		w <= '0';
		r <= '1';
		addr <= "00000";
		
      wait for 50 ns;	
		
		for i in 0 to 30 loop
			addr <= addr + "00001";
			wait for clk_period*5;
		end loop;
		
		wait for 100 ns;
		 
		rst <= '0';
		
		wait for 150 ns;	
		
		rst <= '1';
		
		w <= '0';
		r <= '1'	;
		addr <= "00000";
      
		wait for 50 ns;	
		
		for i in 0 to 30 loop
			addr <= addr + "00001";
			wait for clk_period*5;
		end loop;
		
   	finish;
   
   end process;

END;
