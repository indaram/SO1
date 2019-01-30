/*
Provoke stack overflow by infinite recursion.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

void recur(void);

int main(void)
{
	recur();
	getchar();
	return 0;
}

void recur(void)
{
	recur();	// Call itself until no memory left on stack (stack overflow)
}
