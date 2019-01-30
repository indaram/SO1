/*
Read integer numbers from the keyboard.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void) {
	int age;

	printf("Please enter your age: ");
	scanf("%d", &age);
	getchar();

	printf("Age entered: %d\n", age);
	getchar();
	return 0;
}
