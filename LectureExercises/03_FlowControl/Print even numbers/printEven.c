/*
Print even numbers in 2, 4, ..., 20 to the console.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	for (int i = 2; i <= 20; i += 2)
		printf("%d ", i);

	getchar();
	return 0;
}