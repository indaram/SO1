/*
Change sign of integer values represented in two's complement.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	signed char x = 45;
	signed char y = ~x + 1;

	/* Change sign twice (two's complement) */
	printf("Change sign twice (two's complement):\n");
	printf("% hhd -> % hhd\n", x, y);
	printf("% hhd -> % hhd\n", y, ~y + 1);

	getchar();
	return 0;
}
