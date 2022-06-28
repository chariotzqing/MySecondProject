#include <iostream>
#include "head.h"
int feibo(int n) {
	int num1 = 1;
	int num2 = 1;
	int num3 = 0;
	if (n == 0) {
		return 0;
	}
	else if (n == 1 || n == 2) {
		return 1;
	}
	else {
		while (n > 2) {
			num3 = num1 + num2;
			num1 = num2;
			num2 = num3;
			n--;
		}
		return num3;
	}
}