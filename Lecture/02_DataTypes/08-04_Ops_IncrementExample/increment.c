/*
Prefix and postfix notation for increment operations.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void) {
	int a = 4;

	/* Prefix operator */
	printf("a = %d\n", a);
	printf("Prefix (value)  : %d\n", ++a);
	printf("Prefix (asigned): %d\n\n", a);

	/* Postfix operator */
	a = 4;
	printf("a = %d\n", a);
	printf("Postfix (value)  : %d\n", a++);
	printf("Postfix (asigned): %d\n", a);

	getchar();
	return 0;
}
