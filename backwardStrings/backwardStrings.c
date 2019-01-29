#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define SIZE 80

void reverse( const char *const sPtr );

int main(void)
{
	char sentence[SIZE];  //Char array

	fgets(sentence, SIZE, stdin); //using fgets toread line text

	reverse( sentence );

	getchar();
	return 0;
}

void reverse( const char * const sPtr)
{
	if ( '\0' == sPtr[ 0 ] )
	{
		return;
	}
	else
	{
		reverse( &sPtr [ 1 ] );
		putchar( sPtr [ 0 ] );
	}
}