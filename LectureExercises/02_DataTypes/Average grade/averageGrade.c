/*
Get number of students with grade 1 ... 6 and print average grade.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>

int main(void) {
	int numberGrades;
	int sumGrades = 0, numberStudents = 0;
	double averageGrade;

	/* Get user input */
	printf("Number students with grade 1: ");
	scanf("%d", &numberGrades);
	getchar();
	sumGrades += 1 * numberGrades;
	numberStudents += numberGrades;

	printf("Number students with grade 2: ");
	scanf("%d", &numberGrades);
	getchar();
	sumGrades += 2 * numberGrades;
	numberStudents += numberGrades;

	printf("Number students with grade 3: ");
	scanf("%d", &numberGrades);
	getchar();
	sumGrades += 3 * numberGrades;
	numberStudents += numberGrades;

	printf("Number students with grade 4: ");
	scanf("%d", &numberGrades);
	getchar();
	sumGrades += 4 * numberGrades;
	numberStudents += numberGrades;

	printf("Number students with grade 5: ");
	scanf("%d", &numberGrades);
	getchar();
	sumGrades += 5 * numberGrades;
	numberStudents += numberGrades;

	printf("Number students with grade 6: ");
	scanf("%d", &numberGrades);
	getchar();
	sumGrades += 6 * numberGrades;
	numberStudents += numberGrades;

	/* Print average grade */
	averageGrade = sumGrades / (double) numberStudents;
	printf("Average grade: %.1f", averageGrade);

	getchar();
	return 0;
}
