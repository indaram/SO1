/*
Print weekday to console using a switch-statement.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	int weekday;

	/* Get user input: Day of the week */
	printf("Enter a day (1: Monday, 2: Tuesday, ..., 7: Sunday): ");
	scanf("%d", &weekday);
	getchar();

	/* Print day of the week to console */
	switch (weekday)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Go to work\n");
			break;
		case 6:
			printf("Go shopping\n");
			break;
		case 7:
			printf("Relax\n");
			break;
		default:
			printf("I don't know that day ...\n");
			/* No need for a break-statement here */
	}

	getchar();
	return 0;
}
