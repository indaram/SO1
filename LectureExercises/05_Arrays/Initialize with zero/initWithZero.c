/*
Initialize an array with zero.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

#define SIZE 100

int main(void) {
	int listInit[SIZE] = { 0 };
	int loopInit[SIZE];

	/* Initialize using a loop */
	for (int i = 0; i < SIZE; i++)
		loopInit[i] = 0;

	/* Print arrays to the console */
	printf("Initialized by loop:\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%3d", loopInit[i]);
		if ((i % 10) == 9)
			putchar('\n');
	}

	printf("\nInitialized by list:\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%3d", listInit[i]);
		if ((i % 10) == 9)
			putchar('\n');
	}

	getchar();
	return 0;
}

