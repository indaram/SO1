/*
Transform small letter to upper-case letter.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void) {
	char lowerCase, upperCase;

	/* Get user input */
	printf("Enter small letter: ");
	scanf("%c", &lowerCase);
	getchar();

	/* Transform to upper-case letter */
	upperCase = lowerCase - 32;
	printf("Upper-case letter : %c", upperCase);

	getchar();
	return 0;
}
