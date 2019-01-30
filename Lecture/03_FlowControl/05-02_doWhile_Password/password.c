/*
Enter pin code in do/while-loop.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	const int PIN_CODE = 20099;
	int pinEntered;

	do
	{
		printf("Enter 5-digit pin code: ");
		scanf("%d", &pinEntered);
	} while (pinEntered != PIN_CODE);
	getchar();
	printf("\nPin correct. Here are happiness and wealth!\n");

	getchar();
	return 0;
}
