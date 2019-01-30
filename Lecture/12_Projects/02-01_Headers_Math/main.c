/*
Demonstrate using own include file.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <math.h>
#include "myMath.h"

int main(void)
{	
	printf("pi  = %.12f\n", MATH_PI);
	printf("e^2 = %.12f\n", MATH_E * MATH_E);
	printf("cos(45%c) = %.3f\n", 248, cos(degreeToRad(45.0)));

	getchar();
	return 0;
}
