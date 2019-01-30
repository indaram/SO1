/*
Get numeric character from keyboard.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void) {
	char input;

	/* Get user input */
	printf("Please enter a character: ");
	scanf("%c", &input);
	getchar();

	/* Print input and numeric code to console */
	printf("\nEntered\t\t: '%c'\n", input);
	printf("Numeric code\t: %d\n", input);
	getchar();
	return 0;
}
