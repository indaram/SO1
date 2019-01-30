/*
Mathematical 2-D vector.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	/* Declare structure */
	struct vector2D {
		double x;
		double y;
	};

	/* Define and initialize structure variables */
	struct vector2D a = { 1.54, -2.79 };

	/* Print to the console */
	printf("a = (%.2f, %.2f)^T\n", a.x, a.y);

	getchar();
	return 0;
}
