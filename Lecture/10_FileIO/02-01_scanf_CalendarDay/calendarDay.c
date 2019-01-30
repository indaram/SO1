/*
Read formatted input from the keyboard.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using functions with potential buffer overflow
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int dayOfMonth, month, year;
	char *monthAbbr[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

	/* Read user input and print to the console */
	printf("Enter calendar day (dd.mm.yyyy): ");
	while (scanf("%2d.%2d.%4d", &dayOfMonth, &month, &year) == 3)
	{
		// Print to the console
		if ((month >= 1) && (month <= 12))
			printf("You have entered %s %.2d, %d.\n", monthAbbr[month - 1], dayOfMonth, year);
		else
			printf("Month must be within 1 to 12.\n");

		// Clear keyboard buffer and prompt for next input
		while (getchar() != '\n')
			continue;
		printf("Next day (q to quit): ");
	}

	/* Clear keyboard buffer */
	while (getchar() != '\n')
		continue;

	getchar();
	return 0;
}
