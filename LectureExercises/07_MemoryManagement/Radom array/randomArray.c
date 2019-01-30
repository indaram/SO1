/*
Create array with random numbers in [min, max].
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdlib.h>
#include <time.h>

int *createRandomArray(int size, int min, int max)
{
	int *a;

	// Allocate memory for matrix
	if ((a = (int *)malloc(size * sizeof(int))) == NULL)
		return NULL;

	// Intialize random number generator
	srand((unsigned)time(NULL));

	// Init with random numbers
	for (int i = 0; i < size; i++)
		a[i] = rand() % (max - min + 1) + min;

	return a;
}
