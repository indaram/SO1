/*
1-D array as function parameter.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#define SIZE 6

/* Prototypes */
void printArray(int [], int);

/* Main function */
int main(void)
{
	int a[SIZE] = { 20, 37, 10, 16, 2, 14 };

	printf("Print 1-D array to the console:\n");
	printArray(a, SIZE);

	getchar();
	return 0;
}

/* Print 1-D array to the console */
void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);

	putchar('\n');
}
