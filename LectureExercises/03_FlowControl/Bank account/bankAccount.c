/*
Determine number of years to double balance of bank account.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	double balanceInitial, balance;
	double rate = 0.02;
	int years = 0;

	/* Initial */
	balanceInitial = balance = 1000.0;
	printf("Balance: %.2f EUR\n", balanceInitial);
	printf("Rate   : %.1f %%\n\n", 100.0 * rate);

	/* When will balance have doubled? */
	do
	{
		years++;
		balance *= 1.0 + rate;
		printf("Balance after %2d years: %.2f EUR\n", years, balance);
	} while (balance < 2.0 * balanceInitial);
	printf("\nThe original balance has doubled after %d years.\n", years);

	getchar();
	return 0;
}