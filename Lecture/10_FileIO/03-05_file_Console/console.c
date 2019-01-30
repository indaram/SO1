/*
Function printing same text to either a file or the console.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using functions with potential buffer overflow
#include <stdio.h>
#include <stdlib.h>

/* Function prototypes */
void printAddress(FILE *);

/* Main function */
int main(void)
{
	FILE *file;

	/* Write address to file */
	if ((file = fopen("sampleFile.txt", "w")) != NULL)
	{
		printAddress(file);
		fclose(file);
	}

	/* Write address to the console */
	printAddress(stdout);

	getchar();
	return 0;
}

/* Print address */
void printAddress(FILE *file)
{
	fputs("HAW Hamburg\nBerliner Tor 7\n20099 Hamburg\n", file);
}

