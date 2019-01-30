/*
Sum up more values than exist for array.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	int a[] = { 1, 6, 3, 1, 5, 8, 2, 3 };	// 8 elements a[0] to a[7]
	int sum = 0;

	for (int i = 0; i < 9; i++)				// Mistake: 9 elements a[0] to a[8]
		sum += a[i];

	printf("Sum: %d\n", sum);

	getchar();
	return 0;
}
