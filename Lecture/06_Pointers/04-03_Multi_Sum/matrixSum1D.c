/*
Passing 2-D array with variable dimension to a function (linear access).
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int sum(int *data, int rows, int columns);

int main(void)
{
	int a[2][3] = { { 20, 37, 10 },{ 16, 2, 14 } };

	printf("Sum: %d\n", sum(*a, 2, 3));		// *a == a[0] (address of first int element)

	getchar();
	return 0;
}

int sum(int *data, int rows, int columns)
{
	int sum = 0;

	for (int i = 0; i < rows * columns; i++)
		sum += data[i];

	return sum;
}
