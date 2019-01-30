/*
Passing 2-D array to a function.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int sum(int a[][3], int rows);

int main(void)
{
	int a[2][3] = { { 20, 37, 10 },{ 16, 2, 14 } };

	printf("Sum: %d\n", sum(a, 2));

	getchar();
	return 0;
}

int sum(int a[][3], int rows)
{
	int sum = 0;

	for (int row = 0; row < rows; row++)
	{
		for (int column = 0; column < 3; column++)
			sum += a[row][column];
	}
	return sum;
}
