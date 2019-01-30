/*
Print lowest 8-digit byte of an integer as binary representation.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using functions with potential buffer overflow
#include <stdio.h>

/* Function prototypes */
void printLowByteBinary(int);

/* Main function */
int main(void)
{
	int input;

	printf("Enter number (q to quit): ");
	while (scanf("%d", &input) == 1)
	{
		printf("Lowest byte: ");
		printLowByteBinary(input);
		printf("\nNext number (q to quit): ");

		// Clear keyboard buffer
		while (getchar() != '\n')
			continue;
	}

	getchar();
	return 0;
}

/* Print lowest byte as binary number to the console */
void printLowByteBinary(int a)
{
	char string[9];
	unsigned char mask = 1;

	/* Create string with binary representation */
	for (int i = 7; i >= 0; i--, mask *= 2)
		string[i] = ((a & mask) == mask) ? '1' : '0';
	string[8] = '\0';

	/* Print to the console*/
	printf("%s", string);
}
