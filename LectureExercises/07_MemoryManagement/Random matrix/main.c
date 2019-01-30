/*
Create 2-D array with random numbers in [min, max].
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>
#include <stdlib.h>

 extern int **createRandomMatrix(int rows, int columns, int min, int max);

int main(void)
{
	int **a;
	int rows, columns, min, max;

	/* User input */
	printf("Enter matrix size and data range (with spaces: \"rows columns min max\"): ");
	if (scanf("%d %d %d %d", &rows, &columns, &min, &max) != 4)
	{
		printf("Could not read size and data range.\n");
		getchar();
		return 0;
	}

	/* Clear keyboard buffer */
	while (getchar() != '\n')
		continue;

	/* Create and display matrix */
	a = createRandomMatrix(rows, columns, min, max);
	if (a != NULL)
	{
		/* Print matrix to console */
		for (int y = 0; y < rows; y++)
		{
			for (int x = 0; x < columns; x++)
				printf("%3d ", a[y][x]);
			putchar('\n');
		}

		/* Free memory */
		free(a);
	}
	else
		printf("Could not create matrix.\n");

	getchar();
	return 0;
}
