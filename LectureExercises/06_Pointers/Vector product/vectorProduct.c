/*
Function to calculate the scalar product of two vectors.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

#define DIMENSION 3

double scalarProduct(const double x1[], const double x2[], int dimension);

int main(void)
{
	double a[DIMENSION] = { 1.0, 2.0, 3.0 };
	double b[DIMENSION] = { 2.0, 3.0, 5.0 };

	printf("Scalar product <a,b> = %.1f\n", scalarProduct(a, b, DIMENSION));

	getchar();
	return 0;
}

double scalarProduct(const double x1[], const double x2[], int dimension)
{
	double product = 0;

	for (int i = 0; i < dimension; i++)
		product += x1[i] * x2[i];

	return product;
}
