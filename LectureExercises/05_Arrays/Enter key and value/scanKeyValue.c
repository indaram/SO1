/*
Scan key and value formatted "key=value" from the console.
Lecture: IE-B1-SO1 (Software construction 1)
Author: Marc Hensel
*/

#define _CRT_SECURE_NO_DEPRECATE	// Else MSVC++ prevents using scanf() (concern: buffer overflow)
#include <stdio.h>
#define SIZE 128

int main(void)
{
	char input[SIZE];
	char key[SIZE] = { '\0' };		// Empty string
	char value[SIZE] = { '\0' };
	int id = 0, equalsID = -1, endID = -1;

	/* Get user input and identify separator '=' */
	printf("Enter key and value (formatted \"key=value\"): ");
	while ((input[id] = getchar()) != '\n')
	{
		// Found separator (first '=')
		if ((equalsID == -1) && (input[id] == '='))
			equalsID = id;

		id++;
	}
	input[id] = '\0';
	endID = id;

	/* Extract key and value */
	for (int i = 0; i < equalsID; i++)
		key[i] = input[i];
	key[equalsID] = '\0';

	for (int i = equalsID + 1; i <= endID; i++)
		value[i - (equalsID + 1)] = input[i];

	/* Print key and value to the console */
	printf("Key   : %s\n", key);
	printf("Value : %s\n", value);

	getchar();
	return 0;
}
