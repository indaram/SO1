/*
Mathematical constants and functions.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include "myMath.h"

/* Constants */
const double MATH_E = 2.718281828459045;

/* Transform degrees to radians */
double degreeToRad(double degree)
{
	return degree * MATH_PI / 180.0;
}

/* Transform radians to degrees */
double radToDegree(double rad)
{
	return rad * 180.0 / MATH_PI;
}
