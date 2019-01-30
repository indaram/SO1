/*
Arithmetic operations for and formatted printing of floating point numbers.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void) {
	float radius = 1.5, pi = 3.141592;

	printf("Radius       : %.2f units\n", radius);
	printf("Circumference: %.2f units\n", 2.0 * pi * radius);
	printf("Area         : %.2f units^2\n", pi * radius * radius);
	getchar();
	return 0;
}
