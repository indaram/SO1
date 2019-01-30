/*
Print strings and char arrays (not including '\0') to the console.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	char hamburg[] = "Hamburg";			// '\0' implicitly appended
	char haw[] = { 'H', 'A', 'W' };		// '\0' NOT implicitly appended
	char abc[30];						// Note: Array is larger than required for {a, b, c, ..., z, \0}

	for (int i = 0; i < 26; i++)
		abc[i] = (char)('a' + i);		// '\0' NOT implicitly appended

	/* Print strings and char arrays to the console */
	printf("hamburg: %s\n", hamburg);
	printf("haw    : %s\n", haw);
	printf("abc    : %s\n", abc);

	getchar();
	return 0;
}
