/*
Measure runtime.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include "timeTaken.h"

/* Main function */
int main(void)
{
	/* Start stop watch */
	printf("Press enter to start and stop watch.");
	getchar();
	startClock();
	printf("Started ...");

	/* Stop stop watch and print time taken to the console */
	getchar();
	stopClock();
	printf("Stopped after %.3f s\n", timeTakenSec());

	getchar();
	return 0;
}
