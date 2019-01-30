/*
Get substring of a string.
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

char *newSubstring(const char *string, int first, int last)
{
	char *substring;
	int length = getStringLength(string);
	int subLength = last - first + 2;							// Include '\0' at substring end

	// Verify parameters
	if ((first > last) || (first < 0) || (last >= length - 1))	// Exclude '\0' of original string
		return NULL;

	// Allocate memory for clone
	substring = (char *) malloc(subLength * sizeof(char));

	// Copy substring contents
	if (substring != NULL)
	{
		for (int i = first; i <= last; i++)
			substring[i - first] = string[i];
		substring[subLength - 1] = '\0';
	}

	return substring;
}
