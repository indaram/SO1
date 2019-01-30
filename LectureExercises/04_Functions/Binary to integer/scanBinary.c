/*
Scan binary pattern from keyboard and print decimal value.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int scanBinaryInteger(void);

int main(void) {
	int decimal = scanBinaryInteger();

	if (decimal >= 0)
		printf("Decimal: %d\n", decimal);
	else
		printf("Invalid input: Use '0' and '1', only.\n");

	getchar();
	return 0;
}

int scanBinaryInteger(void)
{
	char bit;
	int decimal = 0;

	printf("Enter binary pattern: ");
	while ((bit = getchar()) != '\n')
	{
		if (bit == '1')
			decimal = 2 * decimal + 1;
		else if (bit == '0')
			decimal *= 2;
		else
		{
			// Clear input buffer and return error code -1
			while (getchar() != '\n')
				continue;
			return -1;
		}
	}
	return decimal;
}