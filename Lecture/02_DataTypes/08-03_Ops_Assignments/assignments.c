/*
Combined assignments.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void) {
	int a = 1;

	a += 2;
	printf("a = %d\n", a);					// a = a + 2 = 3
	printf("a = %d\n", a *= 3);				// a = a * 3 = 9

	a %= a - 2;								// a = a % (9 - 2) = a % 7 = 2
	printf("a = %d\n", a);
	printf("a = %d\n", a /= 3 * a - 4);		// a = a / (6 - 4) = a / 2 = 1

	getchar();
	return 0;
}
