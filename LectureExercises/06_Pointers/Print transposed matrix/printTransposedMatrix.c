/*
Function receiving a matrix A and printing the transposed matrix A^T.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

void printTransposedMatrix(int *a, int rows, int columns);

int main(void)
{
	int a[2][3] = { { 20, 37, 10 }, { 16, 2, 14 } };

	printTransposedMatrix(*a, 2, 3);

	getchar();
	return 0;
}

void printTransposedMatrix(int *a, int rows, int columns)
{
	for (int x = 0; x < columns; x++)
	{
		for (int y = 0; y < rows; y++)
			printf("%2d ", a[y * columns + x]);

		putchar('\n');
	}
}
