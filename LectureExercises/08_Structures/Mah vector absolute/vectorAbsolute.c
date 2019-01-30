/*
Absolute value of a mathematical 2-D vector.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <math.h>

/* Structure */
struct vector2D {
	double x;
	double y;
};

/* Prototype */
double absVector2D(const struct vector2D *a);

/* Main function */
int main(void)
{
	/* Define and initialize structure variables */
	struct vector2D a = { -3.0, 4.0 };

	/* Print to the console */
	printf("a = (%.1f, %.1f)^T\n", a.x, a.y);
	printf("||a|| = %.1f\n", absVector2D(&a));

	getchar();
	return 0;
}

/* Get absolute value */
double absVector2D(const struct vector2D *a)
{
	return sqrt(a->x * a->x + a->y * a->y);
}
