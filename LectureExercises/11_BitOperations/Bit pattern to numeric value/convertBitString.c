/*
Convert string containing bit pattern to unsigned integer.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using functions with potential buffer overflow
#include <stdio.h>
#include <stdlib.h>

/* Manifest constants */
#define MAX_BITS 32

/* Function prototypes */
unsigned bitStringToUnsigned(const char*);

/* Main function */
int main(void)
{
	char input[MAX_BITS + 1];

	printf("Enter bit pattern (q to quit): ");
	while ((fgets(input, MAX_BITS + 1, stdin) != NULL) && (input[0] != 'q') && (input[0] != 'Q'))
	{
		printf("Numeric value: %u\n", bitStringToUnsigned(input));
		printf("Enter bit pattern (q to quit): ");
	}
	printf("Bye!\n");

	getchar();
	return 0;
}

/* Convert string representing bit pattern to unsigned integer */
unsigned bitStringToUnsigned(const char* string)
{
	unsigned numeric = 0;

	for (int i = 0; i < MAX_BITS; i++)
	{
		if (string[i] == '0')
			numeric <<= 1;
		else if (string[i] == '1')
			numeric = (numeric << 1) + 1;
		else
			break;
	}
	return numeric;
}
