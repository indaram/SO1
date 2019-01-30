/*
Allocate and return memory for own string functions.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <stdlib.h>

extern char *newStringClone(const char *);
extern char *newStringConcat(const char *, const char *);

int main(void)
{
	const char *dolly = "Dolly";
	const char *sheep = " the sheep";
	char *concat = newStringConcat(dolly, sheep);
	char *clone = newStringClone(concat);

	printf("1st string  : %s\n", dolly);
	printf("2nd string  : %s\n", sheep);

	if (concat != NULL)
	{
		printf("Concatenated: %s\n", concat);
		free(concat);
	}

	if (clone != NULL)
	{
		printf("Cloned      : %s\n", clone);
		free(clone);
	}

	getchar();
	return 0;
}
