/*
Create array with random numbers in [min, max].
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>
#include <stdlib.h>

extern int *createRandomArray(int size, int min, int max);

int main(void)
{
	int *a;
	int size, min, max;

	/* User input */
	printf("Enter array size and data range (with spaces: \"size min max\"): ");
	if (scanf("%d %d %d", &size, &min, &max) != 3)
	{
		printf("Could not read size and data range.\n");
		getchar();
		return 0;
	}

	/* Clear keyboard buffer */
	while (getchar() != '\n')
		continue;

	/* Create and display array */
	a = createRandomArray(size, min, max);
	if (a != NULL)
	{
		for (int i = 0; i < size; i++)
			printf("%2d ", a[i]);
		free(a);
	}
	else
		printf("Could not create array.\n");

	getchar();
	return 0;
}
