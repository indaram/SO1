/*
Display time in seconds in format hh:mm:ss (with h hours, m minutes, s seconds).
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void) {
	int timeSec;
	int hours, minutes, seconds;

	/* Get user input */
	printf("Enter time in sec: ");
	scanf("%d", &timeSec);
	getchar();

	/* Calculate and print hours, minutes, and remaining seconds */
	seconds = timeSec % 60;
	minutes = (timeSec / 60) % 60;
	hours = timeSec / (60 * 60);
	printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);

	getchar();
	return 0;
}
