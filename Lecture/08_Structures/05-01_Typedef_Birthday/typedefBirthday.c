/*
Demonstrate typedef, enum, and struct.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#include <stdio.h>

/* Define constants and types */
typedef enum {
	JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
} month;

typedef struct {
	const char *name;
	int dayOfMonth;
	month month;
	int year;
} birthday;

/* Function prototypes */
const char *getMonthName(month);
void printBirthday(birthday);

/* Main function */
int main(void)
{
	birthday birthAlisa = { "Alisa", 16, JULY, 1991 };
	printBirthday(birthAlisa);

	getchar();
	return 0;
}

/* Get string representation of month constant */
const char *getMonthName(month month)
{
	if ((month >= JANUARY) && (month <= DECEMBER))
	{
		const char *monthNames[12] = {
			"January", "February", "March", "April", "May", "June",
			"July", "August", "September", "October", "November", "December" };
		return monthNames[month - JANUARY];		// Works as long a months are ordered correctly
	}
	else
		return NULL;
}

/* Print birthday to the console */
void printBirthday(birthday day)
{
	printf("%s was born on %s %d, %d.\n", day.name, getMonthName(day.month), day.dayOfMonth, day.year);
}
