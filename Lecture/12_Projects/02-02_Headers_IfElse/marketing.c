/*
Demonstrate conditional compilation using preprocessor directives.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

#define MARKETING_MODE 0	// Set to 1 to have Marketing's position

int main(void)
{
#if MARKETING_MODE == 1
	printf("Our product is nice, shiny ... and the BEST in the world!!!\n");
#else
	printf("Okay, personally I wouldn't buy it.\n");
#endif

	getchar();
	return 0;
}
