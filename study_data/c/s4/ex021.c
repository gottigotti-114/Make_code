/*
ex021.c　簡単な計算（割り算、剰余算）
*/
#include <stdio.h>

int main ( void )
{
	int sho;
	int amari;

	sho = 18/4;
	amari =18 % 4;

	printf("18÷4 = %d ... %d\n",sho,amari);

	return 0;
}