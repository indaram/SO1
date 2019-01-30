/*
Printing integer numbers to console.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	int zipCode;

	zipCode = 20099;
	printf("HAW Hamburg\nBerliner Tor 7\n%d Hamburg\n", zipCode);
	getchar();
	return 0;
}
