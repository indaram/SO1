/*
Simple function without parameters and return value.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

void printHawLogo(void);

int main(void)
{
	printHawLogo();

	getchar();
	return 0;
}

void printHawLogo(void)
{
	for (int i = 0; i < 4; i++)
		printf("oooooooooo\n    **********\n");
}
