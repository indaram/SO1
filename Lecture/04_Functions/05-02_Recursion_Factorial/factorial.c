/*
Implement mathematical factorial using a loop.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

unsigned long factorial(unsigned);

int main(void)
{
	printf("Factorials:\n\n");
	for (unsigned int n = 0; n <= 10; n++)
		printf("%2d! = %7lu\n", n, factorial(n));

	getchar();
	return 0;
}

unsigned long factorial(unsigned n)
{
	unsigned long fac = 1;

	for (unsigned long i = 2; i <= n; i++)
		fac *= i;

	return fac;
}
