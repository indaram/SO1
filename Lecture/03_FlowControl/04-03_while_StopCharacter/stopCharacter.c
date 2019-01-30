/*
Loop until users enter 'q' or 'Q'.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	char userInput = 0;

	while ((userInput != 'q') && (userInput != 'Q'))
	{
		printf("Oh no, you're in a loop ('q' or 'Q' to quit): ");
		scanf("%c", &userInput);
		getchar();
	}

	printf("\nOkay, you've found your way out of the loop.\n");

	getchar();
	return 0;
}
