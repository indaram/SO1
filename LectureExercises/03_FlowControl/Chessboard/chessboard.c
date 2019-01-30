/*
Print fields of chessboard to the console.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	printf("+----+----+----+----+----+----+----+----+\n");
	for (int row = 8; row >= 1; row--)
	{
		for (char column = 'a'; column <= 'h'; column++)
		{
			printf("| %c%d ", column, row);
		}
		printf("|\n+----+----+----+----+----+----+----+----+\n");
	}

	getchar();
	return 0;
}