/*
Determine sum of all elements in an 1-D array.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#define SIZE 6

/* Prototypes */
int arraySum(int[], int);

/* Main function */
int main(void)
{
	int a[SIZE] = { 20, 37, 10, 16, 2, 14 };

	printf("Sum of elements: %d\n", arraySum(a, SIZE));

	getchar();
	return 0;
}

/* Determine sum of elements in array */
int arraySum(int a[], int size)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
		sum += a[i];

	return sum;
}
