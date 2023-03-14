#include <iostream>
#include "Matrix.h"

int main() {
	try {
		Matrix a(2, 2);
		a(0, 0) = 1;
		a(0, 1) = 2;
		a(1, 0) = 3;
		a(1, 1) = 4;
		print(a);

		Matrix b(2, 2);
		b(0, 0) = 5;
		b(0, 1) = 6;
		b(1, 0) = 7;
		b(1, 1) = 8;
		print(b);

		print(a + b);
	}
	catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
	}
}

