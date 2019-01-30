/*
Multiply mathematical 2x2 matrix with 2-D vector.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <math.h>

#define DIM 2

/* Structure */
struct vector2D {
	double x;
	double y;
};

/* Prototype */
struct vector2D vectorMult2x2(const double matrix[][DIM], const struct vector2D vector);

/* Main function */
int main(void)
{
	struct vector2D x1 = { 1.0, -2.0 };
	double a[DIM][DIM] = { { -1.0, 3.0 }, { 4.0, -2.0 } };
	struct vector2D x2 = vectorMult2x2(a, x1);

	/* Print to the console */
	printf("x1 = (%.1f, %.1f)^T\n", x1.x, x1.y);
	printf("A  = %4.1f, %4.1f\n     %4.1f, %4.1f\n", a[0][0], a[0][1], a[1][0], a[1][1]);
	printf("x2 = A * x1 = (%.1f, %.1f)^T\n", x2.x, x2.y);

	getchar();
	return 0;
}

/* Multiply 2x2 matrix with vector */
struct vector2D vectorMult2x2(const double matrix[][DIM], const struct vector2D vector)
{
	struct vector2D product;

	product.x = matrix[0][0] * vector.x + matrix[0][1] * vector.y;
	product.y = matrix[1][0] * vector.x + matrix[1][1] * vector.y;
	return product;
}
