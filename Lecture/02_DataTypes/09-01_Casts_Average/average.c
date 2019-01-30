/*
Avoid integer division when calculating an average value.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void) {
	int x1 = 1, x2 = 2;
	int count = 2;
	double average;

	/* 1st try using integer variables */
	printf("Integer division:\n");
	average = (x1 + x2) / count;			// Integer division discards decimal places
	printf("Values : %d, %d\n", x1, x2);
	printf("Average: %.1f (not correct!)\n", average);

	/* 2nd try using double constant */
	printf("\nOne of the operators is double constant:\n");
	average = (x1 + x2) / 2.0;				// Denominator of type double
	printf("Values : %d, %d\n", x1, x2);
	printf("Average: %.1f\n", average);

	/* 3rd try using cast to double */
	printf("\nOne of the operands casted to type double:\n");
	average = (x1 + x2) / (double) count;	// Denominator of type double
	printf("Values : %d, %d\n", x1, x2);
	printf("Average: %.1f\n", average);

	getchar();
	return 0;
}
