/*
Test whether a specific year is a leap year or not.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	int year, isLeapYear;

	/* Get user input */
	printf("Please enter a year: ");
	scanf("%d", &year);
	getchar();

	/* Test whether year is a leap year */
	isLeapYear = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	if (isLeapYear)
		printf("\nYear %d is a leap year.\nEnjoy February 29!\n", year);
	else
		printf("\nYear %d is not a leap year.\nTough luck, if you were born on February 29.\n", year);

	getchar();
	return 0;
}