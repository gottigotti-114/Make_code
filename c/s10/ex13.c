/****************************
ex13.c
****************************/
#include <stdio.h>

int isKomoji ( char c );

int main ( void )
{
	char c;

	printf("�����̓���>>");
	scanf("%c",&c);

	if( isKomoji ( c ))
		printf("���͂��ꂽ�����͏������ł�\n");
	else
		printf("���͂��ꂽ�����͏������ł͂���܂���\n");

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