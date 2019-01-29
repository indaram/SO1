/*define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define SIZE 10

void bubbleSort( int *, const int );
void swap(int *, int *);

int main(void)
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	printf( "Data items in original order \n" );

	for (int i = 0; i < SIZE; i++)
	{
		printf( "%4d", a[i] );
	}

	bubbleSort( a, SIZE );
	printf( "\nData items in ascending order\n");


	for (int j = 0; j < SIZE; j++)
	{
		printf("%4d", a[j]);
	}

	printf("\n");

	getchar();
	return 0;
}

void bubbleSort(int *array, const int size)
{
	int pass, j;
	
	for ( pass = 0; pass < size -1; pass++)
	{
		for ( j = 0; j < size -1;  j++)
		{
			if ( array[j] > array[j + 1])
			{
				swap( &array[j], &array[j + 1]);
			}
		}
	}
	
}

void swap(int *elementPtr1, int *elementPtr2)
{
	int hold = *elementPtr1;
	*elementPtr1 = *elementPtr2;
	*elementPtr2 = hold;
}*/

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void bubbleSort( int *, const int );
void swap(int *, int *);

int main(void)
{
	int *a;

	a = (int *)malloc(SIZE * sizeof(int));

	if (a == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < SIZE; i++)
	{
		while (scanf("%d", &a[i]) != 1)
		{

			while (getchar() != '\n');
			{
				printf("Invalid input: ");
			}
		}

		while (getchar() != '\n');
	}

	bubbleSort( a, SIZE );
	printf( "\nData items in ascending order\n");


	for (int j = 0; j < SIZE; j++)
	{
		printf("%4d", a[j]);
	}

	printf("\n");

	free(a);

	getchar();
	return 0;
}

void bubbleSort(int *array, const int size)
{
	int pass, j;

	for ( pass = 0; pass < size -1; pass++)
	{
		for ( j = 0; j < size -1;  j++)
		{
			if ( array[j] > array[j + 1])
			{
				swap( &array[j], &array[j + 1]);
			}
		}
	}

}

void swap(int *elementPtr1, int *elementPtr2)
{
	int hold = *elementPtr1;
	*elementPtr1 = *elementPtr2;
	*elementPtr2 = hold;
}