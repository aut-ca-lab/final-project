--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:26:56 09/26/2020
-- Design Name:   
-- Module Name:   E:/Computer Architecture/ca_fp/Basic_computer/uut_main_board.vhd
-- Project Name:  Basic_computer
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MAIN_BOARD
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
USE std.env.finish;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY uut_main_board IS
END uut_main_board;
 
ARCHITECTURE behavior OF uut_main_board IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MAIN_BOARD
    PORT(
         rst_ram : IN  std_logic;
         rst_cpu : IN  std_logic;
         clk : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal rst_ram : std_logic := '1';
   signal rst_cpu : std_logic := '0';
   signal clk : std_logic := '0';

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MAIN_BOARD PORT MAP (
          rst_ram => rst_ram,
          rst_cpu => rst_cpu,
          clk => clk
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
      -- hold reset state for 100 ns.
      wait for 12 ns;
--		rst_ram <= '1';
		rst_cpu <= '1';

      wait for clk_period*80;

      -- insert stimulus here 

      finish;
   end process;

END;
