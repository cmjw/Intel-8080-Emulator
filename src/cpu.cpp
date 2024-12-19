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