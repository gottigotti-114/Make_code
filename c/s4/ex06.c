/*
ex06/c
*/

#include <stdio.h>

int main ( void )
{
	int suti1,suti2,suti3,suti4;

	suti3 = 10;
	suti4 = 10;

	suti1 = suti3++;
	suti2 = ++suti4;

	printf("数値1は%dです\n",suti1);
	printf("数値2は%dです\n",suti2);
	printf("数値3は%dです\n",suti3);
	printf("数値4は%dです\n",suti4);

	return 0;
}