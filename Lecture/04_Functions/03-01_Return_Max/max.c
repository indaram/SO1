/*
Example for function returning a value.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int max(int, int);

int main(void)
{
	int x = 301, y = 126, z;
	int maxValue = max(x, y);							// Return value in assignment

	printf("max(%d, %d) = %d\n", x, y, maxValue);
	printf("max(%d, %d) = %d\n", y, x/2, max(y, x/2));	// Return value as function argument
	
	z = (max(x, y) > 255) ? 255 : max(x, y);			// Return value in expressions
	printf("z = %d\n", z);

	getchar();
	return 0;
}

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
