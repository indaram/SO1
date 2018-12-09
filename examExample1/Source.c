#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//global variables
int evenNumber, primeNumber;
int begin = 2, end;
int counter = 0;

typedef enum _bool Bool;
Bool isEven();
int isEven2();
int isPrimeNumber();

int main(void) {

	int tmp_input;

	printf("Enter maximum number to test: ");
	while (scanf("%d", &tmp_input)  != 1 || tmp_input < 1)
	{

		while (getchar() != '\n'); //wasting the buffer till the next new line 
		printf("Invalid input, must be positive integer. Retry: ");
		

	}
	getchar();

	primeNumber = tmp_input;

	isPrimeNumber(primeNumber);

	getchar();

	return 0;
}

enum _bool {
	false = 0,
	true = 1
};
Bool isEven(Bool evenNumber) {

	if (evenNumber % 2 == true)
		return true;
	else
		return false;

}
int isEven2(int evenNumber) {

	if (evenNumber % 2 == 0)
	{
		return 1; //TRUE
	}
	else
	{
		return 0; //FALSE
	}

}
int isPrimeNumber(int primeNumber)
{
	while (begin <= primeNumber)
	{
		int startedPoint = 0;

		for (int i = 2; i <= begin / 2; ++i)
		{
			if (begin % i == 0)
			{
				startedPoint = 1;
				break;
			}
		}

		if (startedPoint == 0) {
			printf("%-5d ", begin); //%-5d is to cover Requirament 9

			++counter;

			if (counter % 10 == 0) //this f statement is to cover Req 8
				printf("\n");
		}
		++begin;
	}
	printf("\nThere are %d prime numbers in [1,%d]", counter, primeNumber);
}