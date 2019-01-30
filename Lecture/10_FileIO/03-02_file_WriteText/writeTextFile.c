/*
Write to a text file.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using functions with potential buffer overflow
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char *fileName = "sampleFile.txt";
	FILE *file = fopen(fileName, "w");

	if (file != NULL)
	{
		printf("Writing data to file \"%s\" ...\n", fileName);

		// Write data to the file
		fputc('W', file);
		fprintf(file, "eather forecast: %.1f C and sunny.\n", 21.233);
		fputs("Go out and have some fresh air.\n", file);

		// Close file
		printf("Closing file ...\n");
		fclose(file);
	}
	else
		printf("Could not open file: \"%s\"\n", fileName);

	getchar();
	return 0;
}
