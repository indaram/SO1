/*
Read string from keyboard using scanf().
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	char name[256];
	char keystroke;

	/* Get user input */
	printf("Please enter your name: ");
	scanf("%s", name);

	/* Print string and keyboard buffer to the console */
	printf("Name  : %s\n", name);
	printf("Buffer: ");
	while ((keystroke = getchar()) != '\n')
		putchar(keystroke);
	putchar('\n');

	getchar();
	return 0;
}
