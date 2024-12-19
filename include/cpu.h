#ifndef CPU_H
#define CPU_H

#include <cstdint>

class CPU {
public:
	/* registers */

	// B and C, general purpose
	uint8_t B;
	uint8_t C;

	// D and E, general purpose
	uint8_t D;
	uint8_t E;

	// H and L, general purpose
	uint8_t H;
	uint8_t L;

	// W and Z, temp registers
	uint8_t W;
	uint8_t Z;

	// accumulator
	uint8_t A;

	// program counter
	uint16_t PC;

	// stack pointer
	uint16_t SP;

	// flags register
	uint8_t flags;

	/* Constructors / Destructors */
	CPU();
	~CPU();

	/* Functions */

	// reset signal to restore PC state
	void RESET();
};

#endif CPU_H