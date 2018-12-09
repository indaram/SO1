/*
-calculate the sum of digits from a birth year given from the user
-Print the sum digit by digit and the total in the end
Author: Indara Millan
Date: 17.10.2018
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void) {

	//variables
	int sum = 0;
	int year, newYear, i;
	int singDig[5] = { 0,0,0,0,0 }; // array in zeros
	int arrDig = sizeof(singDig) / sizeof(singDig[0]); // array lenght

	printf("Enter  your birthday year: ");
	scanf("%d", &year);
	getchar();

	newYear = year;

	/*
	-loop that gets and saves every digits into the array replacing the zeros for the new number
	-at the same time is adding the array in the "i" position into the sum
	*/
	for (i = 0; i < (arrDig - 1); i++)
	{
		singDig[i] = newYear % 10;
		newYear /= 10;

		sum += singDig[i];
	}

	printf("%d + %d + %d + %d = %d", singDig[3], singDig[2], singDig[1], singDig[0], sum);

	getchar();

	return 0;
}