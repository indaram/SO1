/*
Create 2-D array with random numbers in [min, max].
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdlib.h>
#include <time.h>

int **createRandomMatrix(int rows, int columns, int min, int max)
{
	int **a;						// Pointer to matrix (i.e., to row pointers)
	int *data;						// Pointer to data in matrix
	int pointerBytes, rowBytes;		// Required memory in bytes

	// Allocate memory for matrix
	pointerBytes = rows * sizeof(int *);
	rowBytes = columns * sizeof(int);
	if ((a = (int **)malloc(pointerBytes + rows * rowBytes)) == NULL)
		return NULL;

	// Initialize pointers to rows
	data = (int *)(a + rows);
	for (int y = 0; y < rows; y++)
		a[y] = data + y * columns;

	// Init with random numbers
	srand((unsigned)time(NULL));
	for (int y = 0; y < rows; y++)
	{
		for (int x = 0; x < columns; x++)
			a[y][x] = rand() % (max - min + 1) + min;
	}
	return a;
}
