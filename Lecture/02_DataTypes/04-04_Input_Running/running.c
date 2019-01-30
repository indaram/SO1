/*
Read floating point numbers from the keyboard.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	float distanceKm, timeHours;
	int timeMinutes, timeSeconds;

	printf("Distance covered: ");
	scanf("%f", &distanceKm);
	getchar();

	printf("Time taken (minutes): ");
	scanf("%d", &timeMinutes);
	getchar();

	printf("Time taken (seconds): ");
	scanf("%d", &timeSeconds);
	getchar();

	timeHours = (timeMinutes + timeSeconds / 60.0) / 60.0;
	printf("Average pace: %.1f km/h\n", distanceKm / timeHours);

	getchar();
	return 0;
}
