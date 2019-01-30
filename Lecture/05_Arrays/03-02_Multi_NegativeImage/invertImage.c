/*
Invert 8-bit gray-valued pixel.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#define SIZE 4

int main(void)
{
	/* Define array */
	short gray[SIZE][SIZE] = { { 0, 6, 2, 8 },{ 122, 102, 137, 126 },{ 242, 255, 231, 247 },{ 15, 21, 16, 8 } };

	/* Invert image */
	for (int y = 0; y < SIZE; y++)
	{
		for (int x = 0; x < SIZE; x++)
			gray[y][x] = 255 - gray[y][x];
	}

	/* Print image data to the console */
	for (int y = 0; y < SIZE; y++)
	{
		for (int x = 0; x < SIZE; x++)
			printf("%3hd ", gray[y][x]);
		putchar('\n');
	}
	putchar('\n');

	getchar();
	return 0;
}
