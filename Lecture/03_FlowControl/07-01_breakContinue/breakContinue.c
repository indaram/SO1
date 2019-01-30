/*
Demonstrate effect of break and continue in for-loops.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	/* Break */
	printf("Break (at i == 2):\n");
	for (int i = 0; i <= 4; i++)
	{
		if (i == 2)
			break;
		printf("i = %d\n", i);
	}

	/* Continue */
	printf("\nContinue (at i == 2):\n");
	for (int i = 0; i <= 4; i++)
	{
		if (i == 2)
			continue;
		printf("i = %d\n", i);
	}

	getchar();
	return 0;
}
