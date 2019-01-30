/*
Function "returning" two values using references to variables.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846		// Math constant pi

void toPolarCoords(double x, double y, double *r, double *phi);

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

// Transform 2-D Cartesian to polar coordinates
void toPolarCoords(double x, double y, double *r, double *phi)
{
	*r = sqrt(x * x + y * y);
	*phi = atan2(y, x);
}
