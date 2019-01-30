/*
Open and close a text file.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using functions with potential buffer overflow
#include <stdio.h>

int main(void)
{
	const char *fileName = "sampleFile.txt";
	FILE *file = fopen(fileName, "w");

	if (file != NULL)
	{
		printf("File opened: \"%s\"\n", fileName);
		fclose(file);
	}
	else
		printf("Could not open file: \"%s\"\n", fileName);

	getchar();
	return 0;
}
