/*
Demonstrate definition of characters by character and numerical code.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void) {
	char capitalH = 'H', newLine = '\n';	// Characters in single quotes
	char smallM = 109;						// ASCII code for letter 'm'

	printf("%cAW %ca%cburg%c", capitalH, capitalH, smallM, newLine);
	getchar();
	return 0;
}
