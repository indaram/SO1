/*
Print the numeric code of small and capital letters A - Z to the console.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	printf("Letter | Small | Capital\n");
	printf("-------+-------+--------\n");
	for (char small = 'a', capital = 'A'; small <= 'z'; small++, capital++)
		printf("%6c | %5d | %5d\n", capital, small, capital);

	getchar();
	return 0;
}