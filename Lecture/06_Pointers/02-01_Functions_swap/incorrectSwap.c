/*
Incorrect function to swap values.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

void swap(int, int);

int main(void)
{
	int x = 15, y = 41;

	printf("Before: x = %d, y = %d\n", x, y);
	swap(x, y);
	printf("After : x = %d, y = %d\n", x, y);

	getchar();
	return 0;
}

void swap(int a, int b)
{
	int temp = a;	// Swap parameters, but not variables in main()
	a = b;
	b = temp;
}
