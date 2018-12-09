/*
Exercise from previous exam
Author: Indara Millan
Date: 21.11.2018
*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

//global variables
int boolean, evenNumber;
int begin = 1, end;

int isEven();
int isPrimeNumber();

int main(void) {


    printf("give a number:");
    scanf("%d", &evenNumber);
	getchar();

    if (isEven(evenNumber) == 1)
    {
        printf("is even\n");

    }
    else
    {
        printf("is odd\n");
    }

    printf("Enter maximum number to test:");
    isPrimeNumber(primeNumber);

	getchar();

	return 0;
}

int isEven(int evenNumber){
    
    if (evenNumber % 2 == 0)
    {
        return 1;
    }else
    {
        return 0;
    }

}
int isPrimeNumber(int primeNumber)
{
while (begin < primeNumber)
    {
        int startedPoint = 2;

        for(int i = 2; i <= begin/2; ++i)
        {
            if(begin % i == 0)
            {
                startedPoint = 1;
                break;
            }
        }

        if (startedPoint == 0)
            printf(" here %d ", begin);

        ++begin;
    }
}