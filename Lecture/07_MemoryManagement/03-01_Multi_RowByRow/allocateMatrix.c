/*
Allocate and free memory for 2-D array row by row.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int **a;
	int rows = 3, columns = 4;

	/* Allocate memory for row pointers */
	if ((a = (int **)malloc(rows * sizeof(int *))) == NULL)
		exit(EXIT_FAILURE);

	/* Allocate memory for rows */
	for (int y = 0; y < rows; y++)
	{
		if ((a[y] = (int *)malloc(columns * sizeof(int))) == NULL)
			exit(EXIT_FAILURE);
	}

	/* Fill matrix with some data */
	for (int y = 0; y < rows; y++)
	{
		for (int x = 0; x < columns; x++)
			a[y][x] = 10 * (y + 1) + (x + 1);
	}

	/* Print matrix to the console */
	for (int y = 0; y < rows; y++)
	{
		for (int x = 0; x < columns; x++)
			printf("%2d ", a[y][x]);
		putchar('\n');
	}

	/* Free matrix memory */
	for (int y = 0; y < rows; y++)
		free(a[y]);
	free(a);

	getchar();
	return 0;
}
