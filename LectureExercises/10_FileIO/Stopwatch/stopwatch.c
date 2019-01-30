/*
Stopwatch with writing to and reading from text file.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using functions with potential buffer overflow
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Manifest constants */
#define FILE_NAME "stopwatch.log"

/* Function prototyes */
void runStopwatch(const char *fileName);
void printStopwatchLog(const char *fileName);

/* Main function */
int main(void)
{
	runStopwatch(FILE_NAME);

	printf("\nReading times taken from log file:\n");
	printStopwatchLog(FILE_NAME);

	getchar();
	return 0;
}

/*
Run stopwatch started/stopped by keyboard input.
Logs times taken to text file.
*/
void runStopwatch(const char *fileName)
{
	FILE *logFile;
	clock_t startClock = 0;
	char input;

	/* Open log file for writing */
	if ((logFile = fopen(fileName, "w")) == NULL)
	{
		printf("Cannot open file for writing: %s\n", fileName);
		exit(EXIT_FAILURE);
	}

	/* Start and stop stopwatch */
	printf("Press enter to start/stop the stopwatch (q to quit).");
	while ((input = getchar()) != 'q')
	{
		// Start or stop timer
		if (startClock == 0)
		{
			startClock = clock();
			printf("Stopwatch started ");
			fprintf(logFile, "Stopwatch started\n");
		}
		else
		{
			double timeTakenSec = (clock() - startClock) / (double)CLOCKS_PER_SEC;
			printf("Time taken: %.3f s ", timeTakenSec);
			fprintf(logFile, "Time taken: %.3f s\n", timeTakenSec);
			startClock = 0;
		}

		// Clear keyboard buffer
		if (input != '\n')
		{
			while (getchar() != '\n')
				continue;
		}
	}

	/* Clear keyboard buffer */
	while (getchar() != '\n')
		continue;

	/* Close log file */
	fclose(logFile);
}

/* Read stopwatch log file and print times taken formatted hh:mm:ss to the console */
void printStopwatchLog(const char *fileName)
{
	FILE *logFile;
	char input[64];

	/* Open log file for reading */
	if ((logFile = fopen(fileName, "r")) == NULL)
	{
		printf("Cannot open file for reading: %s\n", fileName);
		exit(EXIT_FAILURE);
	}

	/* Read file and print times takes to the console */
	while (fscanf(logFile, "%s", input) == 1)
	{
		double periodSec = atof(input);

		if (periodSec > 0.0)
		{
			int minutes = (int)periodSec / 60;
			printf("%.2d:%06.3f\n", minutes, periodSec - 60 * minutes);
		}
	}

	/* Close log file */
	fclose(logFile);
}