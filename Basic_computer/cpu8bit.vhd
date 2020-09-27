LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.ALL;

ENTITY CPU8BIT IS
	PORT (
		data_in : IN std_logic_vector(7 DOWNTO 0);
		data_out : OUT std_logic_vector(7 DOWNTO 0);
		adress : OUT std_logic_vector(4 DOWNTO 0);
		oe : OUT std_logic;
		we : OUT std_logic;
		rst : IN std_logic;
		clk : IN std_logic);
END;

ARCHITECTURE CPU_ARCH OF CPU8BIT IS
	TYPE state_type IS (S0, S1, S2, S3, S4, S5, S6, S7, S8);
	SIGNAL state : state_type;

	SIGNAL akku : std_logic_vector(8 DOWNTO 0); -- akku(8) is carry !
	SIGNAL adreg : std_logic_vector(4 DOWNTO 0);
	SIGNAL pc : std_logic_vector(4 DOWNTO 0);
BEGIN
	PROCESS (clk, rst)
	BEGIN
		IF (rst = '0') THEN
			adreg <= (OTHERS => '0'); -- start execution at memory location 0 
			state <= S0;
			akku <= (OTHERS => '0');
			pc <= (OTHERS => '0');
		ELSIF falling_edge(clk) THEN
			-- PC / Adress path
			IF (state = S0) THEN
				pc <= pc + 1;
				adreg <= data_in(4 DOWNTO 0);
			ELSIF state /= S3 OR (state /= S4 OR akku(8) /= '1') THEN
				adreg <= pc;
			END IF;

			-- ALU / Data Path
			CASE state IS
				WHEN S1 => akku(7 DOWNTO 0) <= data_in;
				WHEN S3 => pc <= adreg;
				WHEN S4 =>
					IF akku(8) = '1' THEN
						akku(8) <= '0'; -- clearing carry
						pc <= adreg;
					ELSE
						-- state <= S0;
						NULL;
					END IF;
				WHEN S5 => akku(7 DOWNTO 0) <= akku(7 DOWNTO 0) AND data_in; -- and
				WHEN S6 => akku <= ("0" & akku(7 DOWNTO 0)) + ("0" & data_in); -- add
				WHEN S7 => akku <= NOT akku; -- not
				WHEN S8 => akku <= akku(7 DOWNTO 0) & '0'; -- shl
				WHEN OTHERS => NULL; -- instr. fetch, jcc taken (000), sta (001) 
			END CASE;

			-- State machine
			IF (state /= S0) THEN
				state <= S0; -- fetch next opcode
			ELSE
				CASE data_in(7 DOWNTO 5) IS
					WHEN "000" => state <= S1;
					WHEN "001" => state <= S2;
					WHEN "010" => state <= S3;
					WHEN "011" => state <= S4;
					WHEN "100" => state <= S5;
					WHEN "101" => state <= S6;
					WHEN "110" => state <= S7;
					WHEN "111" => state <= S8;
					WHEN OTHERS => NULL;
				END CASE;
			END IF;
		END IF;
	END PROCESS;

	-- output
	adress <= adreg;
	data_out <= akku(7 DOWNTO 0);
	oe <= '1'; -- no memory access during reset and 
	we <= '0' WHEN (clk = '1' OR state /= S2) ELSE '1';

END CPU_ARCH;