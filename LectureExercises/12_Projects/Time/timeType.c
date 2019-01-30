/*
Type to represent time of the day.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <math.h>
#include "timeType.h"

/* Check if data in type time is valid */
timeStatus isTimeValid(time testTime)
{
	int isHourValid = (testTime.hour >= 0) && (testTime.hour <= 23);
	int isMinValid = (testTime.min >= 0) && (testTime.min <= 59);
	int isSecValid = (testTime.sec >= 0) && (testTime.sec <= 59);

	return (isHourValid && isMinValid && isSecValid) ? TIME_OK : TIME_INVALID;
}

/* Create time from seconds since midnight */
time timeFromSec(unsigned sec)
{
	time newTime;
	newTime.sec = sec % 60;
	newTime.min = (sec / 60) % 60;
	newTime.hour = sec / 3600;			// 60 sec * 60 min = 3600

	return newTime;
}

/* Time periods */
time timePeriod(time start, time stop)
{
	int startSec = 3600 * start.hour + 60 * start.min + start.sec;
	int stopSec = 3600 * stop.hour + 60 * stop.min + stop.sec;
	
	return timeFromSec(abs(stopSec - startSec));
}
