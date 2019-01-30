/*
Sandbox to play around in during lecture.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int max();			// Allowed before ANSI C, but not recommended

int main(void)
{
	printf("max(%d, %d, %d) = %d\n", 4, 2, 5, max(4, 2, 5));
	getchar();
	return 0;
}

int max(int a, int b)
{
	return (a > b) ? a : b;
}
