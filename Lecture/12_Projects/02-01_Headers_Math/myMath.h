/*
Mathematical constants and functions.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#ifndef MY_MATH_H_
#define MY_MATH_H_

const static char letterA = 'A';

/* Constants */
#define MATH_PI 3.14159265358979323846
extern const double MATH_E;

/* Function prototypes */
extern double degreeToRad(double degree);
extern double radToDegree(double rad);

#endif
