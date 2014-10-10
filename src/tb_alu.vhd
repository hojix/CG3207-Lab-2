--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:28:55 09/30/2014
-- Design Name:   
-- Module Name:   C:/Users/Tham Ming Xiang/Documents/Xilinx/Lab2_v3/tb_alu.vhd
-- Project Name:  Lab2_v3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: alu
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
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY tb_alu IS
END tb_alu;
 
ARCHITECTURE behavior OF tb_alu IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT alu
    PORT(
         Clk : IN  std_logic;
         Control : IN  std_logic_vector(5 downto 0);
         Operand1 : IN  std_logic_vector(31 downto 0);
         Operand2 : IN  std_logic_vector(31 downto 0);
         Result1 : OUT  std_logic_vector(31 downto 0);
         Result2 : OUT  std_logic_vector(31 downto 0);
         Status : OUT  std_logic_vector(2 downto 0);
         Debug : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Clk : std_logic := '0';
   signal Control : std_logic_vector(5 downto 0) := (others => '0');
   signal Operand1 : std_logic_vector(31 downto 0) := (others => '0');
   signal Operand2 : std_logic_vector(31 downto 0) := (others => '0');

 	--Outputs
   signal Result1 : std_logic_vector(31 downto 0);
   signal Result2 : std_logic_vector(31 downto 0);
   signal Status : std_logic_vector(2 downto 0);
   signal Debug : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alu PORT MAP (
          Clk => Clk,
          Control => Control,
          Operand1 => Operand1,
          Operand2 => Operand2,
          Result1 => Result1,
          Result2 => Result2,
          Status => Status,
          Debug => Debug
        );

   -- Clock process definitions
   Clk_process :process
   begin
		Clk <= '0';
		wait for Clk_period/2;
		Clk <= '1';
		wait for Clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
wait for 100 ns;	
		Control <= "000101";
		Operand1 <= X"FFFFFFFF";
		Operand2 <= X"0000001F";
		
		wait for 100 ns;	
		Control <= "001101";
		Operand1 <= X"FFFFFFFF";
		Operand2 <= X"0000001F";
		
		wait for 100 ns;	
		Control <= "001001";
		Operand1 <= X"80000000";
		Operand2 <= X"0000000F";
		
		wait for 100 ns;	
		Control <= "001001";
		Operand1 <= X"80000000";
		Operand2 <= X"0000001F";
		
		wait for 100 ns;
		Control <= "001110";
		Operand1 <= X"FFFFFFFF";
		Operand2 <= X"FFFFFFFF";
		
		wait for 100 ns;
		Control <= "001110";
		Operand1 <= X"FFFFFFFE";
		Operand2 <= X"FFFFFFFF";
		
		wait for 100 ns;
		Control <= "001110";
		Operand1 <= X"FFFFFFFF";
		Operand2 <= X"FFFFFFFE";
		
		wait for 100 ns;
		Control <= "000111";
		Operand1 <= X"FFFFFFFF";
		Operand2 <= X"FFFFFFFF";
		
		wait for 100 ns;
		Control <= "000111";
		Operand1 <= X"FFFFFFFE";
		Operand2 <= X"FFFFFFFF";
		
		wait for 100 ns;
		Control <= "000111";
		Operand1 <= X"FFFFFFFF";
		Operand2 <= X"FFFFFFFE";
		
		wait for 100 ns;
		Control <= "000111";
		Operand1 <= X"00000001";
		Operand2 <= X"00000000";
		
		wait for 100 ns;
		Control <= "000111";
		Operand1 <= X"00000000";
		Operand2 <= X"00000000";
		
		wait for 100 ns;
		Control <= "000111";
		Operand1 <= X"00000000";
		Operand2 <= X"00000001";
		
		wait for 100 ns;
		Control <= "000111";
		Operand1 <= X"FFFFFFFF";
		Operand2 <= X"00000000";
		
		wait for 100 ns;
		Control <= "000111";
		Operand1 <= X"00000000";
		Operand2 <= X"FFFFFFFF";
		
		wait for 100 ns;
		Control <= "010000";
		Operand1 <= X"00000002";
		Operand2 <= X"00000003";
		
		wait until Status(2) = '0';
		Control <= "010000";
		Operand1 <= X"FFFFFFFC";
		Operand2 <= X"00000003";
		
		wait until Status(2) = '0';
		Control <= "010000";
		Operand1 <= X"FFFFFFFC";
		Operand2 <= X"FFFFFFFE";
		
		wait until Status(2) = '0';	
		Control <= "010010";
		Operand1 <= X"FFFFFFF5";
		Operand2 <= X"00000002";
		
		wait until Status(2) = '0';
		Control <= "010001";
		Operand1 <= X"FFFFFFFF";
		Operand2 <= X"FFFFFFFF";
		
		wait until Status(2) = '0';
		Control <= "010001";
		Operand1 <= X"0FFFFFFF";
		Operand2 <= X"FFFFFFFF";
		
		wait until Status(2) = '0';	
		Control <= "000100";
		Operand1 <= X"fefefefe";
		Operand2 <= X"1111ffff";

      wait;
   end process;

END;
