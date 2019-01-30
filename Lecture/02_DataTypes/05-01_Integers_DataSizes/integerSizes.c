/*
Print range and bit depth of unsigned integer types to console.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <limits.h>
#include <math.h>

int main(void) {
	printf("unsigned short: 0 to %hu (%.0f bits)\n", USHRT_MAX, log2(USHRT_MAX));
	printf("unsigned int  : 0 to %u (%.0f bits)\n", UINT_MAX, log2(UINT_MAX));
	printf("unsigned long : 0 to %lu (%.0f bits)\n", ULONG_MAX, log2(ULONG_MAX));
	getchar();
	return 0;
}
