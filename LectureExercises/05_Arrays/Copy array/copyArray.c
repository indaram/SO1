/*
Create exact copy of an array.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#define SIZE 7

int main(void) {
	int source[SIZE] = { 20, 37, 10, 16, 2, 14, 5 };
	int copy[SIZE];

	/* Copy source -> copy */
	for (int i = 0; i < SIZE; i++)
		copy[i] = source[i];

	/* Print arrays to the console */
	printf("Source :");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", source[i]);

	printf("\nCopy   :");
	for (int i = 0; i < SIZE; i++)
		printf(" %d", copy[i]);
	putchar('\n');

	getchar();
	return 0;
}

