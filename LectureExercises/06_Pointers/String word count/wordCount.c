/*
Function to count number of words in a string.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

#define SIZE 256

int numberWords(const char *);

int main(void)
{
	char input[SIZE];

	printf("Enter text: ");
	if (fgets(input, SIZE, stdin) != NULL)
		printf("Number of words in text: %d\n", numberWords(input));

	getchar();
	return 0;
}

int numberWords(const char *string)
{
	int words = 0;
	char current;
	char last = ' ';

	for (int i = 0; (current = string[i]) != '\0'; i++)
	{
		if ((last == ' ') && (current != ' ') && (current != '\n'))		// First character of new word
			words++;

		last = current;
	}

	return words;
}
