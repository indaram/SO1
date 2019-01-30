/*
Function sum (accidentally) modifying the original array data.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int sum(int[], int);

int main(void)
{
	int a[] = { 20, 1, 6, 4 };
	int size = sizeof a / sizeof a[0];

	printf("Sum of all elements (1st call): %d\n", sum(a, size));
	printf("Sum of all elements (2nd call): %d\n", sum(a, size));
	getchar();
	return 0;
}

int sum(int a[], int n)
{
	for (int i = 1; i < n; i++)
		a[0] += a[i];				// Modifies a[0] of the original array
	return a[0];
}
