/*
Print enumeration values.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	// Define integer constants
	enum {
		JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
	};

	// Array expects months to be coded in 0 to 11
	const char *monthNames[12] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December" };

	// Print month name and constant value to the console
	for (int month = JANUARY; month <= DECEMBER; month++)
		printf("%-10s: %d\n", monthNames[month], month);

	getchar();
	return 0;
}
