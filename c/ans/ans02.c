/*
ans02.c �����G��
*/

#include <stdio.h>

int main ( void )
{
	int year;
	int bottom;

	//���l�̓���
	printf("����N����͂��Ă�������>>");
	scanf("%d",&year);

	//���񌅂̌v�Z
	bottom = year % 100;

	//���ʂ̕\��
	printf("%d\n",bottom);

	return 0;
}