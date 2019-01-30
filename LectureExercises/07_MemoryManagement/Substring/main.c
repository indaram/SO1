/*
Get substring of a string.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>
#include <stdlib.h>

extern char *newSubstring(const char *string, int first, int last);

int main(void)
{
	const char *globe = "The Globe Sessions";
	char *substring;
	int first, last;

	/* User input: Substring indices */
	printf("Original string: %s\n", globe);
	printf("Enter indices of substring (formatted \"first:last\"): ");
	if (scanf("%d:%d", &first, &last) != 2)
	{
		printf("Could not read indices.\n");
		getchar();
		return 0;
	}

	/* Clear keyboard buffer */
	while (getchar() != '\n')
		continue;

	/* Create substring */
	substring = newSubstring(globe, first, last);
	if (substring != NULL)
	{
		printf("Substring: %s\n", substring);
		free(substring);
	}
	else
		printf("Could not create substring.\n");

	getchar();
	return 0;
}
