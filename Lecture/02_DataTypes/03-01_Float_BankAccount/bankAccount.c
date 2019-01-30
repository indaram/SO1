/*
Arithmetic operations for and formatted printing of floating point numbers.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	float balance = 1000;
	float rate = 2;

	printf("Initial balance: %.2f EURO\n", balance);
	balance = balance * (100 + rate) / 100;
	printf("Balance after 1 year : %.2f EURO\n", balance);
	balance = balance * (100 + rate) / 100;
	printf("Balance after 2 years: %.2f EURO\n", balance);
	balance = balance * (100 + rate) / 100;
	printf("Balance after 3 years: %.2f EURO\n", balance);
	getchar();
	return 0;
}
