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

	printf("���l1��%d�ł�\n",suti1);
	printf("���l2��%d�ł�\n",suti2);
	printf("���l3��%d�ł�\n",suti3);
	printf("���l4��%d�ł�\n",suti4);

	return 0;
}