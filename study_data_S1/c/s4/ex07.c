/*
ex06/c
*/

#include <stdio.h>

int main ( void )
{
	char c;

	c = 'A';
	c += 1; //0100 0001 + 1 = 0100 0010�ƂȂ�cASCII�R�[�h�\�ł�'B'

	printf("%c",c);

	return 0;
}