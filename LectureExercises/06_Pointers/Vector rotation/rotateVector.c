/*
Function to rotate 2-D vectors by a given angle.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846
#define DIMENSION 2

void rotate2D(double x[], double angleDegree);

int main(void)
{
	double x[DIMENSION];
	double angle;

	printf("Rotation angles in degree (q to quit): ");
	while (scanf("%lf", &angle) == 1)
	{
		// Initialize vector
		x[0] = 1.0;
		x[1] = 0.0;
		printf("x  = (%.0f, %.0f)", x[0], x[1]);

		// Rotate vector
		rotate2D(x, angle);
		printf(" -> x' = (%.2f, %.2f)\n\n", x[0], x[1]);
		printf("Rotation angles in degree (q to quit): ");

		// Empty keyboard buffer
		while (getchar() != '\n')
			continue;
	}

	getchar();
	return 0;
}

void rotate2D(double x[], double angleDegree)
{
	double angleRad = angleDegree * PI / 180.0;
	double xRot = x[0] * cos(angleRad) - x[1] * sin(angleRad);
	double yRot = x[0] * sin(angleRad) + x[1] * cos(angleRad);

	x[0] = xRot;
	x[1] = yRot;
}
