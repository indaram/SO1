/*
Read floating point numbers from the keyboard.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void) {
	float radius, pi = 3.141592;

	printf("Please enter a radius: ");
	scanf("%f", &radius);
	getchar();

	printf("\nRadius       : %.2f units\n", radius);
	printf("Circumference: %.2f units\n", 2.0 * pi * radius);
	printf("Area         : %.2f units^2\n", pi * radius * radius);
	getchar();
	return 0;
}
