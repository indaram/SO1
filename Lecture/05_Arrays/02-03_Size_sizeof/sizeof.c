/*
Determine array size using sizeof operator.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	int a[] = { 1, 6, 3, 1, 5, 8, 2, 3 };
	int size = sizeof a / sizeof a[0];
	int sum = 0;

	printf("Number of elements: %d\n", size);
	for (int i = 0; i < size; i++)
		sum += a[i];

	printf("Sum: %d\n", sum);

	getchar();
	return 0;
}
