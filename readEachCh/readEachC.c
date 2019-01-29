#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#define SIZE 80

void chByCh();

int main(void)
{
	chByCh();

	getchar();
	return 0;
}

void chByCh()
{
	int c;
	char sentence[SIZE];  //Char array
	int i = 0;
	char letter; //to avoid change of letter eraser this line

	scanf("%c", &letter); //to avoid change of letter eraser this line
	getchar(); //to avoid change of letter eraser this line

	while ( i < SIZE - 1 && ( c = getchar() ) != '\n' )
	{
		
		if (c == 'a') //to avoid change of letter eraser this if
		{
			c = letter;
		}

		sentence[i++] = c;


	}

	sentence[i] = '\0';
	
	puts("\nthis was the sentence:");
	puts( sentence );

}