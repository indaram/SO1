/*
Approximate the value of sum 1/2^k with k in 0 to infinity.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	long double sum = 0.0L, factor = 2.0L;

	for (int k = 0; k <= 55; k++)
	{
		sum += (factor *= 0.5L);
		printf("k = %5d: %.14lf\n", k, sum);
	}

	getchar();
	return 0;
}