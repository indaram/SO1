/*
Demonstrate result of leaving the data range of integer types.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <limits.h>

int main(void) {
	printf("Data range: 0 to %hu\n", USHRT_MAX);
	printf("a = 0 - 1 = %hu\n", 0 - 1);
	printf("b = %hu + 1 = %hu\n", USHRT_MAX, USHRT_MAX + 1);
	getchar();
	return 0;
}
