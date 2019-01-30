/*
Demonstrate effect of address and dereferencing operators.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	int a = 3;
	int *ptr = &a;
	int b = *ptr;

	/* Initial data in a and b */
	printf("a  : %d\n", a);
	printf("*&a: %d\n", *&a);
	printf("b  : %d\n\n", b);

	/* Modify variable a using the pointer */
	printf("Please enter an integer: ");
	scanf("%d", ptr);
	getchar();

	printf("a   : %d\n", a);
	printf("*ptr: %d\n", *ptr);
	printf("b   : %d\n", b);

	getchar();
	return 0;
}
