/*
Avoid integer division by cast operator.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void) {
	int goodParts, badParts;
	double badRatio;

	/* Get user input */
	printf("Enter number of good parts produced: ");
	scanf("%d", &goodParts);
	getchar();

	printf("Enter number of bad parts produced : ");
	scanf("%d", &badParts);
	getchar();

	/* Calculate and print production performance */
	badRatio = badParts / (double)(goodParts + badParts);
	printf("\nBad parts: %d out of %d (ratio %.2f)\n", badParts, goodParts + badParts, badRatio);

	getchar();
	return 0;
}
