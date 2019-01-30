/*
Calculate money after x years with given interest rate.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

double getBalanceWithRate(double, double, int);

int main(void) {
	double balance, rate;
	int years;

	/* Get user input */
	printf("Initial investment [EUR]: ");
	while (!scanf("%lf", &balance))
		getchar();

	printf("Interest rate [%%]: ");
	while (!scanf("%lf", &rate))
		getchar();

	printf("Years : ");
	while (!scanf("%d", &years))
		getchar();
	getchar();

	/* Caculate money at end of investment period */
	balance = getBalanceWithRate(balance, rate, years);
	printf("\nBalance after %d years at %.2f %%: %.2f\n", years, rate, balance);

	getchar();
	return 0;
}

double getBalanceWithRate(double balance, double rate, int years)
{
	for (int year = 1; year <= years; year++)
		balance *= 1.0 + rate / 100.0;

	return balance;
}