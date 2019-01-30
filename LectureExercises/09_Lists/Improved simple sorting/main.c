/*
Compare simple approach and improved simple approach to sort integer arrays.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Manifest constants */
#define COUNT 10000							// Number of random values to sort
#define MAX_VAL 100							// Maximum random value
#define IS_DISPLAY_DATA (COUNT <= 100)		// Display sorted data, only if not too many

/* Function prototypes */
void printArray(const int a[], int size);
extern void simpleSort(int a[], int size);
extern void fastSimpleSort(int a[], int size);

/* Main function */
int main(void)
{
	int simple[COUNT], fast[COUNT];
	clock_t start;
	unsigned timeInMs;

	/* Initialize random values */
	printf("Initializing %d random values in [0, %d] ...\n", COUNT, MAX_VAL);
	srand((unsigned)time(NULL));
	for (int i = 0; i < COUNT; i++)
		simple[i] = fast[i] = rand() % MAX_VAL + 1;

	/* Sort using original simple approach */
	printf("Applying simple and faster simple approach to sort same values ...\n\n");
	start = clock();
	simpleSort(simple, COUNT);
	timeInMs = (unsigned)(((clock() - start) * 1000) / CLOCKS_PER_SEC);
	printf("Time taken (simple): %3u ms\n", timeInMs);

	/* Sort using faster simple approach */
	start = clock();
	fastSimpleSort(fast, COUNT);
	timeInMs = (unsigned)(((clock() - start) * 1000) / CLOCKS_PER_SEC);
	printf("Time taken (faster): %3u ms\n\n", timeInMs);

	/* Print data to the console */
	if (IS_DISPLAY_DATA)
	{
		printf("Sorted using original simple approach:\n");
		printArray(simple, COUNT);
		printf("Sorted using faster simple approach:\n");
		printArray(fast, COUNT);
	}

	getchar();
	return 0;
}

/* Print values in array to the console */
void printArray(const int a[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%3d ", a[i]);
	printf("\n\n");
}
