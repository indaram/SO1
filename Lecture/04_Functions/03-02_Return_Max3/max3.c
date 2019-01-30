/*
Example for function returning a value.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int max(int, int);
int max3(int, int, int);

int main(void)
{
	int a = 45, b = 35, c = 101;
	printf("max(%d, %d, %d) = %d\n", a, b, c, max3(a, b, c));
	getchar();
	return 0;
}

int max(int a, int b)
{
	return (a > b) ? a : b;
}

int max3(int a, int b, int c)
{
	return max(max(a, b), c);
}
