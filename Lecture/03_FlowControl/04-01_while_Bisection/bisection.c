/*
Demonstrate while-loop and condition.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	int a = 20;

	while (a > 0)
	{
		printf("a = %2d\n", a);
		a /= 2;
	}

	getchar();
	return 0;
}
