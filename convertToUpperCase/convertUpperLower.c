#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <ctype.h>
#define SIZE 80

void toUppercase( char * sPtr);
void toLowercase(char * sPtr);

int main(void)
{
	char string[SIZE];

	scanf("%s", &string);
	getchar();

	toUppercase( string );

	printf("%s", string);
	// puts(string);

	/*toLowercase(string);

	printf("%s", string);
	// puts(string);*/

	getchar();
	return 0;
}

void toUppercase(char * sPtr)
{
	while (*sPtr != '\0')
	{
		*sPtr = toupper(*sPtr);
		++sPtr;
	}
}

void toLowercase( char * sPtr)
{
	while (*sPtr != '\0')
	{
		*sPtr = tolower( *sPtr );
		++sPtr;
	}
}