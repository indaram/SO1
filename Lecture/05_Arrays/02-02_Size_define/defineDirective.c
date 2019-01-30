/*
Set array size by define directive.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#define SIZE 8

int main(void)
{
	int a[SIZE] = { 1, 6, 3, 1, 5, 8, 2, 3 };
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
		sum += a[i];

	printf("Sum: %d\n", sum);

	getchar();
	return 0;
}
