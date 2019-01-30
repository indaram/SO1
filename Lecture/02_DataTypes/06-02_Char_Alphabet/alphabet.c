/*
Get numeric character code for letters in alphabet and digits.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void) {
	printf("Digits\t\t: %d, %d, %d, ..., %d\n", '0', '1', '2', '9');
	printf("Large letters\t: %d, %d, %d, ..., %d\n", 'A', 'B', 'C', 'Z');
	printf("Small letters\t: %d, %d, %d, ..., %d\n", 'a', 'b', 'c', 'z');
	getchar();
	return 0;
}
