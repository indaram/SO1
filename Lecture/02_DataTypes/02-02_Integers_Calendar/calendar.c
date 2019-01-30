/*
Arithmetic operations for integer numbers.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	int secPerDay, secPerWeek;
	int weeksPerYear, remainingDays;

	secPerDay = 24 * 60 * 60;
	secPerWeek = 7 * secPerDay;
	weeksPerYear = 365 / 7;
	remainingDays = 365 % 7;
	printf("A day has %d seconds, while a week has %d seconds.\n", secPerDay, secPerWeek);
	printf("A year has %d full weeks with %d day(s) remaining.\n", weeksPerYear, remainingDays);
	getchar();
	return 0;
}
