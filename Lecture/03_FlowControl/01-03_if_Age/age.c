/*
Determine age at end of this year, only if the user has already been born.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void) {
	int yearOfBirth, thisYear, ageEndOfYear;

	/* Get user input */
	printf("In which year were you born?: ");
	scanf("%d", &yearOfBirth);
	getchar();

	printf("What year is today?: ");
	scanf("%d", &thisYear);
	getchar();

	/* Print age or ironic remark */
	ageEndOfYear = thisYear - yearOfBirth;
	if (ageEndOfYear >= 0)
		printf("\nBy end of %d you will be %d years old.\n", thisYear, ageEndOfYear);
	else
		printf("\nHello Marty, are you ready to travel \"Back to the future\"?");

	getchar();
	return 0;
}
