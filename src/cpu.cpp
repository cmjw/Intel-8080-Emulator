#include "cpu.h"

CPU::CPU() {
	this->reset();
}

CPU::~CPU() {

}

/* Reset the CPU state */
void CPU::reset() {
	// clear registers
	A = 0;
	B = C = 0;
	D = E = 0;
	H = L = 0;
	W = Z = 0;

	pc = 0u;

	sp = 0xFFFF; // max address

	flags = 0u;
}