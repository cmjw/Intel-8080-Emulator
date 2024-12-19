#include "cpu.h"

/* The cpu state is underfined upon power up.
	The contents of the sp, pc, and other registers
	cannot be spectified.
	The PC state must be restored using an external
	RESET signal. All other working registers must be explicitly
	set by the program.
	*/
CPU::CPU() {
	
}

CPU::~CPU() {

}

/* Restore the PC state.
	The RESET signal restores the PC to zero.
	It has no effect on the status flags or working registers.*/
void CPU::RESET() {
	PC = 0u;
}

/* Enter the halt state. */
void CPU::HALT() {

}

/* Print the processor state. */
void CPU::printState() {
	std::cout << "ACC: 0x" << std::hex << (int)ACC << "\n"
		<< "B: 0x" << std::hex << (int)C << " C: 0x" << std::hex << (int)C << "\n"
		<< "D: 0x" << std::hex << (int)D << " E: 0x" << std::hex << (int)E << "\n"
		<< "H: 0x" << std::hex << (int)H << " L: 0x" << std::hex << (int)L << "\n"
		<< "PC: 0x" << std::hex << PC << " SP: 0x" << std::hex << SP << "\n"
		<< "Flags: 0x" << std::hex << (int)flags << "\n";
}