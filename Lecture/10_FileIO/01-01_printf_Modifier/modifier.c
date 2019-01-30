/*
Demonstrate modifiers for printf() function.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	printf("Octal         : %#o\n", 27);
	printf("Hexadecimal   : %#x\n", 27);
	printf("Minimum width : %#6x\n", 27);
	printf("Integer       : %#.4x\n", 27);
	printf("Floating-point: %+#05.0f\n", 7.1);

	getchar();
	return 0;
}
