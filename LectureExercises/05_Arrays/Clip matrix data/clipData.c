/*
Clip data in integer matrix to [0, 255] (e.g., 8-bit gray-valued pixels).
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#define SIZE 4

int main(void)
{
	/* Define array */
	short data[SIZE][SIZE] = { { -4, -3, -2, -1 },{ 0, 1, 2, 3},{ 252, 253, 254, 255},{ 256, 257, 258, 259 } };

	/* Print original data to the console */
	printf("Source data:\n");
	for (int y = 0; y < SIZE; y++)
	{
		for (int x = 0; x < SIZE; x++)
			printf("%3hd ", data[y][x]);
		putchar('\n');
	}
	putchar('\n');

	/* Clip data */
	for (int y = 0; y < SIZE; y++)
	{
		for (int x = 0; x < SIZE; x++)
		{
			if (data[y][x] > 255)
				data[y][x] = 255;
			else if (data[y][x] < 0)
				data[y][x] = 0;
		}
	}

	/* Print clipped data to the console */
	printf("Clipped to [0, 255]:\n");
	for (int y = 0; y < SIZE; y++)
	{
		for (int x = 0; x < SIZE; x++)
			printf("%3hd ", data[y][x]);
		putchar('\n');
	}
	putchar('\n');

	getchar();
	return 0;
}
