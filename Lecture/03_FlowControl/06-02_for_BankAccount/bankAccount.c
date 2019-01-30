/*
Calculate rate of return for bank account using a for-loop.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	double balance = 1000.0;
	double rate = 2.0;

	printf("Initial balance: %.2f EUR\n", balance);
	for (int year = 1; year <= 15; year++)
	{
		balance += balance * rate / 100.0;
		printf("After %2d years : %.2f EUR\n", year, balance);
	}

	getchar();
	return 0;
}
