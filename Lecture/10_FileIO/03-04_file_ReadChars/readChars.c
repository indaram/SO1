/*
Read and print a text file using single characters.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using functions with potential buffer overflow
#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "sampleFile.txt"

int main(void)
{
	FILE *file;
	char character;

	/* Write text file */
	if ((file = fopen(FILE_NAME, "w")) == NULL)
		exit(EXIT_FAILURE);

	fputs("HAW Hamburg\nBerliner Tor 7\n20099 Hamburg\n", file);
	fclose(file);

	/* Read and print text file */
	if ((file = fopen(FILE_NAME, "r")) == NULL)
		exit(EXIT_FAILURE);

	while ((character = getc(file)) != EOF)
		putchar(character);
	fclose(file);

	getchar();
	return 0;
}
