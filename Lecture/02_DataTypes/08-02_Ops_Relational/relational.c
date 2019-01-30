/*
Relational operators.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void) {
	int a = 7, b = 4;
	int parentheses = (a > b) == (a <= b);

	printf("true : %d\n", 1 == 1);
	printf("false: %d\n", 1 != 1);
	printf("Parentheses: %d\n", parentheses);
	printf("Precedence : %d\n", a > b == a <= b);
	getchar();
	return 0;
}
