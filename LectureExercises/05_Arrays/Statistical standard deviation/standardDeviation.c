/*
Calculate statistical standard deviation of values in an array.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <math.h>
#define SIZE 7

int main(void) {
	double data[SIZE] = { 1., 2., 3., 4., 5., 6.5, 7. };
	double sum = 0.0, squaredSum = 0.0;
	double mean, stdDev;

	/* Calculate statistical mean */
	for (int i = 0; i < SIZE; i++)
		sum += data[i];
	mean = sum / (double)SIZE;

	/* Calculate standard deviation */
	for (int i = 0; i < SIZE; i++)
		squaredSum += (data[i] - mean) * (data[i] - mean);
	stdDev = sqrt(squaredSum / (double)(SIZE - 1));

	/* Print array and statistical values to the console */
	printf("Data     :");
	for (int i = 0; i < SIZE; i++)
		printf(" %.1f", data[i]);

	printf("\nMean     : %.2f\n", mean);
	printf("Std. dev.: %.2f\n", stdDev);

	getchar();
	return 0;
}

