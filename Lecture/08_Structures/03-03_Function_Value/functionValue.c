/*
Passing a structure variable to a function.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

#define NAME_CHARS 30

/* Structures */
struct name {
	char firstName[NAME_CHARS];
	char surname[NAME_CHARS];
};

/* Prototypes */
void printAndModifyName(struct name person);

/* Functions */
int main(void)
{
	/* Define and initialize structure variables */
	struct name alisa = { "Alisa", "Erhardt" };

	/* Print to the console */
	printAndModifyName(alisa);
	printf("%s %s\n", alisa.firstName, alisa.surname);

	getchar();
	return 0;
}

void printAndModifyName(struct name person)
{
	printf("%s %s\n", person.firstName, person.surname);
	person.firstName[0] = 'E';
}
