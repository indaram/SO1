/*
Working with structures and nested structures.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

#define NAME_CHARS 30

int main(void)
{
	/* Declare structures */
	struct name {
		char firstName[NAME_CHARS];
		char surname[NAME_CHARS];
	};

	struct birthday {
		struct name name;
		int dayOfMonth;
		int month;
		int year;
	};

	/* Define and initialize structure variable */
	struct birthday birthAlisa = { { "Alisa", "Erhardt" }, 16, 7, 1991 };
	
	/* Print structure data to the console */
	printf("%s %s\'s birthday is on ", birthAlisa.name.firstName, birthAlisa.name.surname);
	printf("%02d.%02d.%04d.\n", birthAlisa.dayOfMonth, birthAlisa.month, birthAlisa.year);

	getchar();
	return 0;
}
