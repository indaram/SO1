/*
Determine min and max value in an array (tricky approach).
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

void minMax(const int a[], int n, int *min, int *max);

int main(void)
{
	int a[] = { 20, 1, 6, 4, 22, 1, 25, 10, 16 };
	int min, max;

	minMax(a, sizeof a / sizeof a[0], &min, &max);
	printf("Minimum: %d\n", min);
	printf("Maximum: %d\n", max);

	getchar();
	return 0;
}

void minMax(const int a[], int n, int *min, int *max)
{
	// Initialize with first element
	*min = *max = a[0];

	// Run through elements in pairs
	for (int i = (n % 2); i < n - 1; i += 2)
	{
		// Note: Only 3 if-statements for 2 values => 25% less compared to direct approach
		if (a[i] < a[i + 1])
		{
			if (a[i] < *min)
				*min = a[i];
			if (a[i + 1] > *max)
				*max = a[i + 1];
		}
		else
		{
			if (a[i] > *max)
				*max = a[i];
			if (a[i + 1] < *min)
				*min = a[i + 1];
		}
	}
}
