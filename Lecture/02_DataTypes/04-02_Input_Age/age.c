/*
Read integer numbers from the keyboard.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void) {
	int yearOfBirth, thisYear;

	printf("In which year were you born?: ");
	scanf("%d", &yearOfBirth);
	getchar();

	printf("What year is today?: ");
	scanf("%d", &thisYear);
	getchar();

	printf("\nBy end of %d you will be %d years old.\n", thisYear, thisYear - yearOfBirth);
	getchar();
	return 0;
}
