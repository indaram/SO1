/*
Create and evaluate histogram of random numbers.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define HISTO_SIZE 11
#define NUMBERS_GENERATED 11000

double histogramAverage(const int[], int);

int main(void)
{
	int histo[HISTO_SIZE] = { 0 };		// Initialize array with 0
	double average;

	// Init random generator
	srand((unsigned)time(NULL));

	// Fill histogram with random numbers and calculate average
	for (int i = 0; i < NUMBERS_GENERATED; i++)
		histo[rand() % HISTO_SIZE]++;
	average = histogramAverage(histo, HISTO_SIZE);

	// Print histogram data and average value to console
	printf("Histogram of random numbers:\n");
	for (int i = 0; i < HISTO_SIZE; i++)
		printf("%2d: %5d\n", i, histo[i]);
	printf("Average value: %.1f\n", average);

	getchar();
	return 0;
}

double histogramAverage(const int a[], int n)
{
	int sum = 0, count = 0;

	for (int i = 0; i < n; i++)
	{
		sum += i * a[i];
		count += a[i];
	}
	return (double)sum / (double)count;
}
