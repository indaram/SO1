/*
Type to represent time of the day.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

/* Type */
typedef struct {
	int hour;
	int min;
	int sec;
} time;

typedef enum {
	TIME_INVALID = 0,
	TIME_OK
} timeStatus;

/* Function prototypes */
extern timeStatus isTimeValid(time);
extern time timeFromSec(unsigned);
extern time timePeriod(time, time);

