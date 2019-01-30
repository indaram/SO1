/*
Function cleaning keyboard input from unnecessary space characters.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

void cleanInput(void);

int main(void)
{
	printf("Enter sentence (cleans spaces): ");
	cleanInput();

	getchar();
	return 0;
}

void cleanInput(void)
{
	char current;
	char last = '\n';

	while ((current = getchar()) != '\n')
	{
		int isDoubleSpace = (last == ' ') && (current == ' ');
		int isLeadingSpace = (last == '\n') && (current == ' ');

		/* Print keyboard input (or clear space key) */
		if ((last == ' ') && (current == '.'))			// Remove space before period
			printf("\b.");
		else if (!isDoubleSpace && !isLeadingSpace)		// Ignore double and leading spaces
			putchar(current);

		/* Remember last character */
		last = current;
	}
}
