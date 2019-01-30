/*
Allocate and return memory for own string functions.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdlib.h>

int getStringLength(const char *string)
{
	int length = 0;

	while (string[length++] != '\0')
		continue;

	return length;
}

char *newStringClone(const char *string)
{
	char *clone;
	int length = getStringLength(string);

	// Allocate memory for clone
	clone = (char *)malloc(length * sizeof(char));

	// Copy string contents
	if (clone != NULL)
	{
		for (int i = 0; i < length; i++)
			clone[i] = string[i];
	}

	return clone;
}

char *newStringConcat(const char *string1, const char *string2)
{
	char *concat;
	int length1 = getStringLength(string1);
	int length2 = getStringLength(string2);
	int i;

	// Allocate memory (Exclude '\0' of first string => - 1)
	concat = (char *)malloc((length1 + length2 - 1) * sizeof(char));

	// Copy contents of both strings (excluding first '\0')
	if (concat != NULL)
	{
		for (i = 0; i < length1 - 1; i++)	// Exclude '\0' => - 1
			concat[i] = string1[i];
		for (int j = 0; j < length2; i++, j++)
			concat[i] = string2[j];
	}

	return concat;
}
