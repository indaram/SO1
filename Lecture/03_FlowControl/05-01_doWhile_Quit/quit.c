/*
Exit loop by pressing 'q' or 'Q'.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	char userInput;

	/* Wait for user to press 'q' or 'Q' */
	printf("Press 'q' or 'Q' to quit.\n");
	do
	{
		scanf("%c", &userInput);
	} while ((userInput != 'q') && (userInput != 'Q'));

	getchar();
	return 0;
}
