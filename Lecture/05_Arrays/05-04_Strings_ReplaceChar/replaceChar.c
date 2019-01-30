/*
Replace all occurrances of a character by another character.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	char text[] = "Laaking aut af the windaw.";
	int size = sizeof text / sizeof(char);

	/* Print original string to the console */
	printf("Original: %s\n", text);

	/* Replace 'a' by 'o' */
	for (int i = 0; i < size; i++)
	{
		if (text[i] == 'a')
			text[i] = 'o';
	}

	/* Print modified string to the console */
	printf("Replaced: %s\n", text);

	getchar();
	return 0;
}
