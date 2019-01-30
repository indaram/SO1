/*
Arithmetic operations for integer numbers.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	int balance = 1000;
	int rate = 2;

	printf("Initial balance: %d EURO\n", balance);
	balance = balance * (100 + rate) / 100;
	printf("Balance after 1 year : %d EURO\n", balance);
	balance = balance * (100 + rate) / 100;
	printf("Balance after 2 years: %d EURO\n", balance);
	balance = balance * (100 + rate) / 100;
	printf("Balance after 3 years: %d EURO\n", balance);
	getchar();
	return 0;
}
