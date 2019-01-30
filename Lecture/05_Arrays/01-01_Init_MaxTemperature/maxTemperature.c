/*
Initialize array element by element.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void)
{
	double maxTemp[12];
	int month;

	/* Initialize array */
	maxTemp[0] = 2.7;
	maxTemp[1] = 3.8;
	maxTemp[2] = 7.2;
	maxTemp[3] = 11.9;
	maxTemp[4] = 17.0;
	maxTemp[5] = 20.2;
	maxTemp[6] = 21.4;
	maxTemp[7] = 21.6;
	maxTemp[8] = 18.0;
	maxTemp[9] = 13.3;
	maxTemp[10] = 7.6;
	maxTemp[11] = 4.0;

	/* Print data for month requested by user */
	printf("Average maximum temperature in Hamburg:\n\n");
	printf("Enter month (Jan = 1 to Dec = 12, 'q' to quit):\n");
	while (scanf("%d", &month))
	{
		if ((month >= 1) && (month <= 12))
			printf("%.1f deg C\n", maxTemp[month - 1]);
		else
			printf("Invalid input: Must be in 1 (January) to 12 (December)\n");
	}

	/* Clear keyboard buffer */
	while (getchar() != '\n')
		continue;

	/* Wait for keystroke and exit */
	getchar();
	return 0;
}
