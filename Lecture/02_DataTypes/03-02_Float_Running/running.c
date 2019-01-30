/*
Arithmetic operations for and formatted printing of floating point numbers.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	float distanceKm = 4.87;
	float timeMinutes = 29.5;
	float timeHours = timeMinutes / 60.0;

	printf("Average pace: %.1f km/h\n", distanceKm / timeHours);
	getchar();
	return 0;
}
