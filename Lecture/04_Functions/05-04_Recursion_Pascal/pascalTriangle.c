/*
Print Pascal's triangle to the console using a recursive function.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

/* Prototypes */
void printPascal(int);
int binomial(int, int);

/* Main function */
int main(void)
{
	int rows;

	/* Get user input (number of rows) and print Pascal's triangle */
	printf("Enter number of rows: ");
	if (scanf("%d", &rows))
		printPascal(rows);
	else
		printf("Invalid input: Not a number.\n");

	/* Discard further characters entered by the user */
	while (getchar() != '\n')
		continue;

	/* Wait for keystroke before closing console window */
	getchar();
	return 0;
}

/* Print first rows of Pascal's triangle to the console */
void printPascal(int rows)
{
	for (int n = 0; n < rows; n++)
	{
		for (int k = 0; k <= n; k++)
			printf("%d ", binomial(n, k));
		printf("\n");
	}
}

/* Get binomial coefficient n over k */
int binomial(int n, int k)
{
	if ((k > 0) && (k < n))
		return binomial(n - 1, k - 1) + binomial(n - 1, k);
	else
		return 1;
}
