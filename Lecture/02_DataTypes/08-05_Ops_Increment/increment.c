/*
Increment and decrement operations.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void) {
	int a = 1;
	float b = 1.25;

	/* Integer */
	printf("a   : %d\n", a);
	printf("++a : %d\n", ++a);
	printf("a++ : %d\n", a++);
	printf("--a : %d\n", --a);
	printf("a-- : %d\n", a--);

	/* Floating point */
	printf("\nb   : %.2f\n", b);
	printf("++b : %.2f\n", ++b);

	getchar();
	return 0;
}
