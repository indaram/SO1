/*
Demonstrate labels and goto-statement.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	printf("This is printed.\n");
	goto cleanup;							// Jump to label
	printf("This is not printed.\n");

cleanup:									// Define label
	printf("I am cleaning up.\n");

	getchar();
	return 0;
}
