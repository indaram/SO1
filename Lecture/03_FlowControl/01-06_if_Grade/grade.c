/*
Demonstrate nested if/else-statements.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	int grade;

	/* Get user input: grade in 0 ... 15 */
	printf("Please enter your grade: ");
	scanf("%d", &grade);
	getchar();

	/* Print to the console */
	if ((grade >= 0) && (grade <= 4))
	{
		printf("Sorry, you have failed in the exam.\n");
	}
	else
	{
		if ((grade >= 5) && (grade <= 15))
			printf("Congratulations, you have passed the exam!\n");
		else
			printf("Grade %d?! Please be honest, will you?\n", grade);
	}

	getchar();
	return 0;
}
