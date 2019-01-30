/*
Demonstrate that parameters are local variables.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

void printCube(int);

int main(void)
{
	int a = 3;

	printf("Main: a = %2d\n", a);
	printCube(a);
	printf("Main: a = %2d\n", a);

	getchar();
	return 0;
}

void printCube(int a)
{
	a = a * a * a;
	printf("Cube: a = %2d\n", a);
}
