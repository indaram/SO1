/*
Example for function with parameters.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

/* Prototype */
void printMax(int, int);

/* Main function */
int main(void)
{
	int x = 4, y = 7;

	printMax(4, 2.25);		// Constants
	printMax(x, y);		// Variables
	printMax(3 * x, y *= x - 2);	// Expressions
	printf("y = %d\n", y);

	getchar();
	return 0;
}

/* Function with parameters */
void printMax(int a, int b)
{
	if (a > b)
		printf("max(%d, %d) = %d\n", a, b, a);
	else
		printf("max(%d, %d) = %d\n", a, b, b);
}
