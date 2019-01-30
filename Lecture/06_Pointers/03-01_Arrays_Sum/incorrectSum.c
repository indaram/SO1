/*
Mistake by not passing an array's size to a function.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int sum(int *);

int main(void)
{
	int a[] = { 20, 1, 6, 4 };

	printf("Sum of all array elements: %d\n", sum(a));
	getchar();
	return 0;
}

int sum(int *a)
{
	int sum = 0;
	int size = sizeof a / sizeof(int);		// Mistake: Size of the pointer, not the array

	printf("Array size in sum()      : %d\n", size);
	for (int i = 0; i < size; i++)
		sum += a[i];
	return sum;
}
