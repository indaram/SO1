/*
Measure runtime.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <time.h>

/* Global variables */
static clock_t clockStart = 0;
static clock_t clockStop = 0;

/* Start the stop watch */
void startClock()
{
	clockStart = clock();
	clockStop = 0;
}

/* Stop the stop watch */
void stopClock()
{
	clockStop = clock();
}

/* Get period between start and stop in seconds (or -1) */
double timeTakenSec()
{
	if ((clockStart > 0) && (clockStop > 0) && (clockStop >= clockStart))
	{
		return (double)(clockStop - clockStart) / (double)CLOCKS_PER_SEC;
	}
	else
		return -1.0;
}
