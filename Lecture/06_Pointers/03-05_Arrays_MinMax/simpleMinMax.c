/*
Determine min and max value in an array (direct approach).
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
	// Initialize with 1st element
	*min = *max = a[0];

	// Run through 2nd to last element
	for (int i = 1; i < n; i++)
	{
		// Element cannot be new min AND new max at same time
		if (a[i] < *min)
			*min = a[i];
		else if (a[i] > *max)
			*max = a[i];
	}
}
