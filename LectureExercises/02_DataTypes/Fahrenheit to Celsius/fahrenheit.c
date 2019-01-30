/*
Convert temperature in °F to °C.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void) {
	float temperatureF, temperatureC;

	/* Get user input */
	printf("Enter temperature in Fahrenheit\t: ");
	scanf("%f", &temperatureF);
	getchar();

	/* Transform to °C */
	temperatureC = (temperatureF - 32.0) * 5.0 / 9.0;
	printf("Temperature in Celsius\t\t: %.2f", temperatureC);

	getchar();
	return 0;
}
