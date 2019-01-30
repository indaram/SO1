/*
Passing an array's size to a function.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int sum(int *, int);

int main(void)
{
	int a[] = { 20, 1, 6, 4 };
	int size = sizeof a / sizeof a[0];

	printf("Sum of all array elements: %d\n", sum(a, size));
	getchar();
	return 0;
}

int sum(int *a, int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
		sum += a[i];
	return sum;
}
