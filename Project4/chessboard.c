/*
Author: Indara Millan
Date: 17.10.2018
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	int length[8] = { 1,2,3,4,5,6,7,8 }, i, j;
	char width[8] = { 'a','b','c','d','e','f','g','h' };
	int arrLength = sizeof(length) / sizeof(length[0]);
	int arrWidth = sizeof(width) / sizeof(width[0]);

	printf("+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n");

	for (i = (arrLength - 1); i >= 0; i--)

	{

		for (j = 0; j < (arrWidth - 1); j++)
		{

			printf("[%c %d] | ", width[j], length[i]);

		}
		printf("\n");
		printf("+-----+-----+-----+-----+-----+-----+-----+-----+-----+\n");
	}

	getchar();
	return 0;
}