/*
ex48.c ���K���
*/
#include <stdio.h>

int main ( void )
{
	int seireki;

	printf("�������͂��Ă�������>>");
	scanf("%d",&seireki);

	seireki = seireki % 100;

	printf("���ʂ�%d�N�ƂȂ�܂���",seireki);

	return 0;
}