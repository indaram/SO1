/*
Apply binomial and median filter to noisy integer sequence.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int median3(int, int, int);

int main(void)
{
	/* Define arrays */
	int raw[15] = { 95, 91, 211, 97, 89, 96, 94, 3, 91, 94, 92, 96, 93, 97, 94 };
	int binomial[15], median[15];
	int size = sizeof raw / sizeof raw[0];

	/* Apply filters to original data */
	binomial[0] = median[0] = raw[0];
	binomial[size - 1] = median[size - 1] = raw[size - 1];
	for (int i = 1; i <= size - 2; i++)
	{
		binomial[i] = (raw[i - 1] + 2 * raw[i] + raw[i + 1]) / 4;
		median[i] = median3(raw[i - 1], raw[i], raw[i + 1]);
	}

	/* Print arrays to the console */
	printf("Original: %3d", raw[0]);
	for (int i = 1; i < size; i++)
		printf(", %3d", raw[i]);
	printf("\n");

	printf("Binomial: %3d", binomial[0]);
	for (int i = 1; i < size; i++)
		printf(", %3d", binomial[i]);
	printf("\n");

	printf("Median:   %3d", median[0]);
	for (int i = 1; i < size; i++)
		printf(", %3d", median[i]);
	printf("\n");

	getchar();
	return 0;
}

int median3(int a, int b, int c)
{
	int sorted[3] = { a, b, c };

	/* Sort parameters */
	for (int i = 1; i < 3; i++)
	{
		if (sorted[i] < sorted[i - 1])
		{
			int swap = sorted[i];
			sorted[i] = sorted[i - 1];
			sorted[i - 1] = swap;
			i = 0;
		}
	}

	return sorted[1];
}
