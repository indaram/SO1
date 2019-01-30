/*
Typical error: Assignment instead of relational operator as condition.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	int a = 3;

	printf("a = %d\n", a);

	if (a = 1)			/* Mistake: Assignment = instead of == */
		printf("a is equal to 1.\n");
	else
		printf("a is not equal to 1.\n");

	getchar();
	return 0;
}
