/*
Demonstrate pointer operations in 2-D arrays (matrices).
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	int a[2][3] = { { 20, 37, 10 }, { 16, 2, 14 } };

	printf("*a == a[0]       : %d\n", *a == a[0]);
	printf("*(a + 1) == a[1] : %d\n\n", *(a + 1) == a[1]);

	printf("**a       : %d\n", **a);
	printf("**(a + 1) : %d\n", **(a + 1));
	printf("*(*a + 2) : %d\n", *(*a + 2));

	getchar();
	return 0;
}
