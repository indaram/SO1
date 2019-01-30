/*
Demonstrate external variables and functions.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

/* Declare external variable and function to use */
extern const double PI;
extern void toPolarCoords(double x, double y, double *r, double *phi);

int main(void)
{
	double x = 2.0, y = 3.75;		// Input: Cartesian coordinates
	double r, phi;					// Result: Polar coordinates

	toPolarCoords(x, y, &r, &phi);
	printf("Cartesian: (x, y)   = (%.2f, %.2f)\n", x, y);
	printf("Polar    : (r, phi) = (%.2f, %.2f * pi)\n", r, phi / PI);

	getchar();
	return 0;
}
