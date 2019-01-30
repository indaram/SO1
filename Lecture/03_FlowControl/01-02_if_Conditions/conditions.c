/*
Apply logical negation to condition in if-statement.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	float a;
	int isNegative;

	/* Get user input: number */
	printf("Please enter a number: ");
	scanf("%f", &a);
	getchar();

	/* Console output for non-negative number, only */
	isNegative = a < 0;
	if (!isNegative)
		printf("You have entered a non-negative number.");

	getchar();
	return 0;
}
