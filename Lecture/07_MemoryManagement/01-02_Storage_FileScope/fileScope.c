/*
File scope variable who is known from line of definition until end of file.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

void knowWho(void);

void dontKnowWho(void)
{
}

char *who = "It's me!";

int main(void)
{
	printf("I know who: %s\n", who);
	dontKnowWho();
	knowWho();

	getchar();
	return 0;
}

void knowWho(void)
{
	printf("Me too    : %s\n", who);
}