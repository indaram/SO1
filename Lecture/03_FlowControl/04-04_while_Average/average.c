/*
Calculate the average value of numbers entered by users.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	double number;
	double sum = 0.0;
	int count = 0, inputOK = 1;

	/* Get user input: Numbers */
	printf("Enter numbers (any character to stop):\n");
	inputOK = scanf("%lf", &number);
	while (inputOK)
	{
		sum += number;
		count++;
		inputOK = scanf("%lf", &number);
	}
	getchar();		// Last scanf() could not read character
	getchar();		// Get enter key of last input

	/* Calculate and print mean value */
	if (count > 0)
		printf("\nNumbers: %d\nAverage: %.1f\n", count, sum / (double) count);

	getchar();
	return 0;
}
