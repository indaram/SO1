/*
Demonstrate assigning structure variables.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

#define NAME_CHARS 30

int main(void)
{
	/* Declare structure */
	struct name {
		char firstName[NAME_CHARS];
		char surname[NAME_CHARS];
	};

	/* Define and initialize structure variables */
	struct name alisa = { "Alisa", "Erhardt" };
	struct name copy = alisa;
	copy.firstName[0] = 'E';

	/* Print to the console */
	printf("Original      : %s\n", alisa.firstName);
	printf("Modified copy : %s\n", copy.firstName);

	getchar();
	return 0;
}
