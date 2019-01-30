/*
Initialize arrays with comma-separated lists.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

int main(void)
{
	double maxTemp[12] = { 2.7,	3.8, 7.2, 11.9, 17.0, 20.2, 21.4, 21.6, 18.0, 13.3, 7.6, 4.0 };
	double minTemp[12] = { -2.2, -1.8, 0.4, 3.0, 7.2, 10.4, 12.2, 11.9, 9.4, 6.3, 2.5, -0.7 };
	double sumMax = 0.0, sumMin = 0.0, maxDifference = 0.0;
	int monthMaxDifference = 0;

	/* Analyze data */
	for (int i = 0; i < 12; i++)
	{
		sumMax += maxTemp[i];
		sumMin += minTemp[i];

		if (maxTemp[i] - minTemp[i] > maxDifference)
		{
			maxDifference = maxTemp[i] - minTemp[i];
			monthMaxDifference = i + 1;	// i in 0 .. 11
		}
	}

	/* Print results to the console */
	printf("Average maximum temperature: %.1f deg C\n", sumMax / 12.0);
	printf("Average minimum temperature: %.1f deg C\n", sumMin / 12.0);
	printf("Largest difference: %.1f deg C (month = %d)\n", maxDifference, monthMaxDifference);

	/* Wait for keystroke and exit */
	getchar();
	return 0;
}
