#include <iostream>
#include "head.h"

void inarry()
{
	int arry[5] = {8,6,5,4,1};
	int j = 0;
	int temp = 0;
	while (j < 5) {
		temp = arry[4];
		for (int i = 4; i > j; i--) {
			arry[i] = arry[i - 1];
		}
		arry[j] = temp;
		j++;
	}
	for (int n = 0; n < 5; n++) {
		std::cout << arry[n] << " ";
	}
}