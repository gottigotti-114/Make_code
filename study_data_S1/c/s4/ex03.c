/*
ex03.c 除算
*/

#include <stdio.h>

int main ( void )
{
	int suti1,suti2;
	double kekka;

	suti1 = 10;
	suti2 = 30;

	kekka = ( double ) suti1 / suti2;

	printf("結果は、%fです\n",kekka);

	return 0;
}