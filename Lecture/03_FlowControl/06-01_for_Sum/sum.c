/*
Sum up all number from 1 to 100 using a for-loop.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	int sum = 0;

	/* Sum up numbers */
	for (int i = 1; i <= 100; i++)
		sum += i;

	/* Print result to the console */
	printf("Sum of 1 to 100: %d\n", sum);

	getchar();
	return 0;
}
