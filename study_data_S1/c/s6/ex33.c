/*
ex33.c âpè¨ï∂éö
*/
#include <stdio.h>

int main ( void )
{
	char c;

	//ï∂éöÇÃì¸óÕ
	printf("ï∂éöÇÃì¸óÕ>>");
	scanf("%c",&c);

	//îªíË
	if ('a' <= c && c <= 'z')
		printf("OK\n");
	else
		printf("NG\n");


	return 0;
}