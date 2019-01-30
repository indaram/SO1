/*
Function receiving a matrix A and printing the transposed matrix A^T.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

#define DIMENSION 4

void printMatrix(int *a, int rows, int columns);
void transposeNxN(int *a, int dimension);

int main(void)
{
	int a[DIMENSION][DIMENSION] = { { 11, 12, 13, 14 }, { 21, 22, 23, 24 }, { 31, 32, 33, 34 }, { 41, 42, 43, 44 } };

	printf("Matrix A:\n");
	printMatrix(*a, DIMENSION, DIMENSION);

	transposeNxN(*a, DIMENSION);
	printf("\nMatrix A^T:\n");
	printMatrix(*a, DIMENSION, DIMENSION);

	getchar();
	return 0;
}

void printMatrix(int *a, int rows, int columns)
{
	for (int y = 0; y < rows; y++)
	{
		for (int x = 0; x < columns; x++)
			printf("%3d ", a[y * columns + x]);
		putchar('\n');
	}
}

void transposeNxN(int *a, int dimension)
{
	for (int y = 0; y < dimension; y++)
	{
		for (int x = 0; x < y; x++)
		{
			int swap = a[y * dimension + x];
			a[y * dimension + x] = a[x * dimension + y];
			a[x * dimension + y] = swap;
		}
	}
}
