/*basic calculator with 2 given values from the user
Author: Indara Millan
Date: 17.10.2018
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main(void)
{
	// variables declaration
	int operantOne, operantTwo, sumOper, restOper, multOper, modOper, divOper;

	//input
	printf("give me a number:");
	scanf("%d", &operantOne);
	printf("give me a second number:");
	scanf("%d", &operantTwo);

	//operations
	sumOper = operantOne + operantTwo;
	restOper = operantOne - operantTwo;
	multOper = operantOne * operantTwo;
	divOper = operantOne / operantTwo;
	modOper = (operantOne % operantTwo);

	//output
	printf("%d + %d = %d \n", operantOne, operantTwo, sumOper);
	printf("%d - %d = %d \n", operantOne, operantTwo, restOper);
	printf("%d * %d = %d \n", operantOne, operantTwo, multOper);
	printf("%d / %d = %d \n", operantOne, operantTwo, divOper);
	printf("%d %% %d =%d \n", operantOne, operantTwo, modOper);

	getchar();
	return 0;
}