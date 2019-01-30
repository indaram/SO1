/*
Print binary pattern of an unsigned interger number.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

void printBinary(unsigned);

int main(void) {
	unsigned decimal;

	printf("Enter non-negative integers (q to quit): \n");
	while (scanf("%u", &decimal))
	{
		getchar();
		printBinary(decimal);
	}

	getchar();
	return 0;
}

void printBinary(unsigned decimal)
{
	// Initialize with 16 bit 00...0
	printf("Binary: %016d ", 0);

	// Move left bit by bit
	while (decimal > 0) {
		int digit = decimal % 2;
		decimal /= 2;
		printf("\b\b%d", digit);
	}
	printf("\n");
}