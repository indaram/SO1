/*
Test whether integer numbers are prime numbers.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int isPrimeNumber(int);

int main(void) {
	int decimal;

	printf("Enter integers (q to quit): \n");
	while (scanf("%d", &decimal))
	{
		getchar();
		if (isPrimeNumber(decimal))
			printf("%d is prime.\n", decimal);
		else
			printf("%d is not prime.\n", decimal);
	}

	getchar();
	return 0;
}

int isPrimeNumber(int a)
{
	if (a <= 1)
		return 0;

	/* Test even numbers */
	if (a == 2)
		return 1;
	else if ((a % 2) == 0)
		return 0;

	/* Test odd numbers */
	for (int i = 3; i < a/2; i += 2)
	{
		if ((a % i) == 0)
			return 0;
	}
	return 1;
}