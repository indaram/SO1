/*
Demonstrate external variables and functions.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <math.h>

/* External variable: Math constant pi */
const double PI = 3.14159265358979323846;

/* External function: Transform 2-D Cartesian to polar coordinates */
void toPolarCoords(double x, double y, double *r, double *phi)
{
	*r = sqrt(x * x + y * y);
	*phi = atan2(y, x);
}
