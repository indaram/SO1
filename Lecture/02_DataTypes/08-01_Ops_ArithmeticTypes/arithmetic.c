/*
Arithmetic operators with mixed integer and floating point operands.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void) {
	int units = 4, maxUnits = 10;
	float price = 0.55;

	printf("float + int: %.2f\n", units * price);
	printf("int / int  : %d\n", units / maxUnits);
	printf("int / int  : %.1f\n", units / maxUnits);
	printf("float / int: %.1f\n", units / 10.0);
	getchar();
	return 0;
}
