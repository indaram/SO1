/*
Using macros (define directives) with arguments.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

#define SQUARE(X) ((X) * (X))
#define MEAN(X,Y) (((X) + (Y)) / 2)

int main(void)
{
	int a = 6;

	printf("Square:\n");
	printf("6^2       = %d\n", SQUARE(a));
	printf("(7 - 1)^2 = %d\n", SQUARE(7 - 1));
	putchar('\n');

	printf("Mean value:\n");
	printf("mean(%d, %d)       = %d\n", a, a + 3, MEAN(a, a + 3));
	printf("4.0 / mean(%d, %d) = %.1f\n", 1, 3, 4.0 / MEAN(1, 3));

	getchar();
	return 0;
}
