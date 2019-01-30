/*
Precision of floating point constants.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void) {
	printf("Math pi: 3.141592654\n");
	printf("Double : %.9f\n", 3.141592654);
	printf("Float  : %.9f\n", 3.141592654f);
	getchar();
	return 0;
}
