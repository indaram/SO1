/*
Using an enumeration to define calender month values.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	// Define integer constants
	enum month {
		JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
	};

	// Array expects months to be coded in 0 to 11
	const char *monthNames[12] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December" };

	// Unambiguous representation of month using enumeration type
	struct date {
		int dayOfMonth;
		enum month month;
		int year;
	} birthAlisa = { 16, JULY, 1991 };

	// Print month to the console
	printf("Alisa's birthday is in %s.\n", monthNames[birthAlisa.month]);

	getchar();
	return 0;
}
