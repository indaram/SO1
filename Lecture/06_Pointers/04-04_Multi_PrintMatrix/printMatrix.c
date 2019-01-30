/*
Passing 2-D array with variable dimension to a function (random access).
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

void printMatrix(int *data, int rows, int columns);

int main(void)
{
	int a[2][3] = { { 20, 37, 10 },{ 16, 2, 14 } };

	printMatrix(*a, 2, 3);

	getchar();
	return 0;
}

void printMatrix(int *data, int rows, int columns)
{
	for (int y = 0; y < rows; y++)
	{
		for (int x = 0; x < columns; x++)
			printf("%2d ", data[y * columns + x]);

		putchar('\n');
	}
}
