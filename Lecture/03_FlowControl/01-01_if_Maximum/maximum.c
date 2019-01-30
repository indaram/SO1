/*
Determine maximum of two numbers using if statement.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	float a, b, max;

	/* Get user input: 2 numbers */
	printf("Enter two comma-separated numbers: ");
	scanf("%f,%f", &a, &b);
	getchar();

	/* Determine and print maximum value */
	max = a;
	if (b > a)
	{
		max = b;
	}
	printf("Maximum value entered: %f", max);

	getchar();
	return 0;
}
