/*
Calculate statistical mean of values in an array.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#define SIZE 7

int main(void) {
	double data[SIZE] = { 1., 2., 3., 4., 5., 6.5, 7. };
	double sum = 0.0;

	/* Sum up all values in array */
	for (int i = 0; i < SIZE; i++)
		sum += data[i];

	/* Print array and mean value to the console */
	printf("Data:");
	for (int i = 0; i < SIZE; i++)
		printf(" %.1f", data[i]);

	printf("\nMean: %.2f\n", sum / (double)SIZE);

	getchar();
	return 0;
}

