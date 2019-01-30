/*
Function returning the length of a string.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int stringLength(const char *);

int main(void)
{
	char city[64] = "Hamburg";

	printf("Array size    : %d\n", sizeof city / sizeof city[0]);
	printf("String        : %s\n", city);
	printf("String length : %d (excluding '\\0')\n", stringLength(city));

	getchar();
	return 0;
}

int stringLength(const char *string)
{
	int length = 0;
	int i = 0;

	while (string[i] != '\0')
		i++;
	return i;
}
