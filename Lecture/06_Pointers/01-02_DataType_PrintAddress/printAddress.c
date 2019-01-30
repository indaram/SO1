/*
Variables with same name in different functions have different addresses (i.e., are at not the same).
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

void printAddress(int);

int main(void)
{
	int a = 42;

	printf("main()\t\t: %p\n", &a);
	printAddress(a);

	getchar();
	return 0;
}

void printAddress(int a)
{
	printf("printAddress()\t: %p\n", &a);
}
