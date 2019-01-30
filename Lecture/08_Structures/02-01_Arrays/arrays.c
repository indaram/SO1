/*
Demonstrate arrays of structures.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using functions with potential buffer overflow
#include <stdio.h>

#define NAME_CHARS 30
#define SIZE 3

int main(void)
{
	/* Declare structure */
	struct name {
		char firstName[NAME_CHARS];
		char surname[NAME_CHARS];
	};

	/* Define and initialize array of structure variables */
	struct name people[SIZE] = {
		{ "Alisa", "Erhardt" },
		{ "Sarah", "Heitmann" },
		{ "Tobias", "Neuner" }
	};

	/* Print structure data to the console */
	for (int i = 0; i < SIZE; i++)
		printf("%s %s\n", people[i].firstName, people[i].surname);

	getchar();
	return 0;
}
