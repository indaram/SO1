/*
Print triangle using nested for-loops.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	/* Run through rows */
	for (int i = 1; i < 7; i++)
	{
		/* Run through characters within each row */
		for (int j = i; j > 0; j--)
		{
			printf("o");
		}
		printf("\n");
	}

	getchar();
	return 0;
}
