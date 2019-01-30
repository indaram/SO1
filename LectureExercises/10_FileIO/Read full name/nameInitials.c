/*
Read full name and print middle name(s) as initials.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using functions with potential buffer overflow
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Manifest constants */
#define NAME_SIZE 256

/* Main function */
int main(void)
{
	char input[NAME_SIZE];
	char output[NAME_SIZE];
	char *next = output;		// Pointer to next name (word) to write
	char *last = NULL;			// Pointer first letter of last name (word) written
	int nameCount = 0;			// Number of names (words) written
	
	/* Read user input from keyboard and transfer to output */
	printf("Enter your full name: ");
	while (scanf("%s", input))
	{
		// Relace former input (word) by initial
		if (++nameCount >= 3)
		{
			next = last + 3;
			strcpy(next - 2, ". ");
		}

		// Append input (word) to output
		strcpy(next, input);
		last = next;
		next += strlen(input) + 1;
		*(next - 1) = ' ';

		// End of input => Terminate string
		if (getchar() == '\n')
		{
			*(next - 1) = '\0';
			break;
		}
	}

	/* Print to the console */
	printf("Welcome, %s!\n", output);

	getchar();
	return 0;
}
