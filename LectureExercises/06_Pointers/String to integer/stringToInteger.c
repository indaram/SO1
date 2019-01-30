/*
Function to convert a string to an integer value.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

#define SIZE 64

int toInteger(const char *);

int main(void)
{
	char input[SIZE];

	// Get keyboard input and convert to int
	printf("Enter a non-negative integer number x: ");
	if (scanf("%s", input) == 1)
		printf("x + 1 = %d", toInteger(input) + 1);

	// Empty keyboard buffer
	while (getchar() != '\n')
		continue;

	getchar();
	return 0;
}

int toInteger(const char *string)
{
	int value = 0, i = 0;

	while ((string[i] >= '0') && (string[i] <= '9'))
		value = 10 * value + (int)(string[i++] - '0');

	return value;
}
