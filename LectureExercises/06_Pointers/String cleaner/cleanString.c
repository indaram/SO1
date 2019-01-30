/*
Function to remove leading spaces, double spaces, and spaces before a period character ‘.’  in a string.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

#define SIZE 256

char *cleanString(char *);

int main(void)
{
	char input[SIZE];

	printf("Enter text to clean (e.g., remove double spaces): ");
	if (fgets(input, SIZE, stdin) != NULL)
		printf("%s", cleanString(input));

	getchar();
	return 0;
}

char *cleanString(char *string)
{
	int readID = 0, writeID = 0;
	char current;
	char last = '\0';

	while ((current = string[readID++]) != '\0')
	{
		int isDoubleSpace = (last == ' ') && (current == ' ');
		int isLeadingSpace = (last == '\0') && (current == ' ');

		if ((last == ' ') && (current == '.'))			// Remove space before period '.'
			string[writeID - 1] = '.';
		else if (!isDoubleSpace && !isLeadingSpace)		// Ignore double and leading spaces
			string[writeID++] = current;

		last = current;
	}
	string[writeID] = '\0';

	return string;
}
