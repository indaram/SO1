/*
Ambiguous integer values.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	// Array expects months to be coded in 0 to 11
	const char *monthNames[12] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December" };

	// Ambiguous representation of month in structure
	struct date {
		int dayOfMonth;
		int month;						// Coded 0 to 11 or coded 1 to 12?
		int year;
	} birthAlisa = { 16, 7, 1991 };

	// Print month to the console
	printf("Alisa's birthday is in %s.\n", monthNames[birthAlisa.month]);

	getchar();
	return 0;
}
