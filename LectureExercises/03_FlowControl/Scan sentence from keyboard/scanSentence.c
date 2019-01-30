/*
Scan a complete sentence character by character.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	char character;

	printf("Please enter a sentence: ");
	do {
		scanf("%c", &character);
		printf("%c", character);
	} while (character != '\n');

	getchar();
	return 0;
}