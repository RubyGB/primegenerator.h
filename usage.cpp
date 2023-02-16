#include <iostream>
#include "primegenerator.h"

typedef long long llong;

int main() {
	// Compute and display the first 10 primorial numbers.
	PrimeGenerator<llong> pg;
	llong primorial = 1;
	for(int i = 0; i < 10; ++i) {
		std::cout << (primorial *= pg.nextPrime()) << std::endl;
	}
}
