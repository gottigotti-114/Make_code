/****************************
ex13.c
****************************/
#include <stdio.h>

int isKomoji ( char c );

int main ( void )
{
	char c;

	printf("文字の入力>>");
	scanf("%c",&c);

	if( isKomoji ( c ))
		printf("入力された文字は小文字です\n");
	else
		printf("入力された文字は小文字ではありません\n");

	return 0;
}

/*****************************/
int isKomoji ( char c )
{
	if('a' <= c && c <='z')
		return 1;
	else
		return 0;
}