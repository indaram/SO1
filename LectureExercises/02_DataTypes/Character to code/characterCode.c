/*
Transform character to numeric code.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void) {
	char character;

	/* Get user input */
	printf("Enter character: ");
	scanf("%c", &character);
	getchar();

	/* Print corresponding code */
	printf("Numeric code: %u", character);

	getchar();
	return 0;
}
