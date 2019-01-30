/*
Underline text using a while-loop.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	int numberChars = printf("Please give me a floor to stand upon.\n");

	while (numberChars > 1)		/* Do not underline '\n' */
	{
		printf("-");
		numberChars--;
	}

	getchar();
	return 0;
}
