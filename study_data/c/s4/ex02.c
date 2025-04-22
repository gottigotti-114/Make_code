/*
ex02.c 簡単な計算（剰余算）
*/
#include <stdio.h>

int main ( void )
{
	int suti;
	int amari;

	suti = 10;

	amari = suti % 2;

	printf("余りは%dです\n",amari);

	return 0;
}