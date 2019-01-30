/*
Type to represent time of the day.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include "timeType.h"

/* Manifest constants */
#define SIZE_INVALID 6
#define SIZE_DIFF 3

/* Main function */
int main(void)
{
	time validTime = { 9, 24, 16 };				// Validity
	time invalidTimes[SIZE_INVALID] = {
		{ -1, 0, 0 },{ 24, 0, 0 },
		{ 0, -1, 0 },{ 0, 60, 0 },
		{ 0, 0, -1 },{ 0, 0, 60 } };

	unsigned sec = 10 * 3600 + 5 * 60 + 18;		// Create time
	time newTime = timeFromSec(sec);

	time periodTimes[SIZE_DIFF] = {				// Time differences
		{ 9, 24, 16 },{ 9, 25, 21 },{ 8, 1, 0 } };
	time period01 = timePeriod(periodTimes[0], periodTimes[1]);
	time period02 = timePeriod(periodTimes[0], periodTimes[2]);

	/* Check validity of time data */
	printf("Valid time   : %d\n", isTimeValid(validTime));
	printf("Invalid times:");
	for (int i = 0; i < SIZE_INVALID; i++)
		printf(" %d", isTimeValid(invalidTimes[i]));
	printf("\n\n");

	/* Create new time from seconds since midnight */
	printf("Initialize from seconds since midnight:\n");
	printf("%u sec => %02d:%02d:%02d\n\n", sec, newTime.hour, newTime.min, newTime.sec);

	/* Time periods */
	printf("Periods:\n");
	for (int i = 0; i < SIZE_DIFF; i++)
		printf("t%d: %02d:%02d:%02d\n", i, periodTimes[i].hour, periodTimes[i].min, periodTimes[i].sec);
	printf("Period with t0 and t1: %02d:%02d:%02d\n", period01.hour, period01.min, period01.sec);
	printf("Period with t0 and t2: %02d:%02d:%02d\n", period02.hour, period02.min, period02.sec);

	getchar();
	return 0;
}
