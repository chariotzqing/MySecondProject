#include <iostream>
#include <cmath>
#include "head.h"
void shui() {
	int a, b, c;
	for (int i = 100; i < 1000; i++) {
		a = i % 10;
		b = (i / 10) % 10;
		c = i / 100;
		if (i == pow(a, 3) + pow(b, 3) + pow(c, 3)) {
			std::cout << i << std::endl;
		}
	}
}