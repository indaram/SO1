/*
Initialization of 2-D arrays with too few elements in 1-D and 2-D braces.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

#define SIZE_X 3
#define SIZE_Y 2

int main(void)
{
	/* Define arrays */
	int a[SIZE_Y][SIZE_X] = { { 20, 37 },{ 16 } };	// Using braces for second dimension
	int b[SIZE_Y][SIZE_X] = { 20, 37, 16 };			// Not using braces for second dimension

													/* Print array a to the console */
	for (int y = 0; y < SIZE_Y; y++)
	{
		for (int x = 0; x < SIZE_X; x++)
			printf("%2d  ", a[y][x]);
		printf("\n");
	}
	printf("\n");

	/* Print array b to the console */
	for (int y = 0; y < SIZE_Y; y++)
	{
		for (int x = 0; x < SIZE_X; x++)
			printf("%2d  ", b[y][x]);
		printf("\n");
	}

	getchar();
	return 0;
}
