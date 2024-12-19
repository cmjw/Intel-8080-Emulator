#include "cpu.h"

int main() {
	CPU i8080;

	i8080.RESET();

	i8080.printState();

	while (1) {

	}

	return 0;
}