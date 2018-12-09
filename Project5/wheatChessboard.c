/*
Author: Indara Millan
Date: 01.11.2018
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	/*init all variables*/
	unsigned short field[64] = { 0 };
	unsigned long long int onField[64] = { 1 };
	unsigned long long int sum[64] = { 1 };
	long double sumSci[64] = { 1 };
	int fieldNumber = sizeof(field) / sizeof(field[0]);
	long double totalWeight;
	double grainWeightTons = 55e-9, worldTotalW = 735800000;


	// Print headlines
	printf("Field \t|On field\t\t|Sum\n");
	printf("--------+-----------------------+----------------------\n");

	/*
	we're doing for loop in order to get the table with the results
	also, we are casting the  (long double) (sum[i] + onField[i + 1]) because if you don't cast it is going to give a warning
	'cause we are doing the operation with 2 integer values
	sum can be
	*/
	for (int i = 0; i <= (fieldNumber - 1); i++)

	{

		field[i] = i + 1;
		onField[i + 1] = onField[i] * 2;
		sum[i + 1] = sum[i] + onField[i + 1];
		sumSci[i + 1] = (long double)(sum[i] + onField[i + 1]);
		printf("%hu\t|%-20llu\t|%-25llu( %.1e)\n", field[i], onField[i], sum[i], sumSci[i]);
	}

	printf("--------+-----------------------+----------------------\n");

	totalWeight = sum[63] * grainWeightTons;
	totalWeight = totalWeight;

	printf("difference in tons: %e  \n", totalWeight / worldTotalW);
	//printf("%Lf\n", totalWeight);
	getchar();
	return 0;
}