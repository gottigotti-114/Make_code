/*
ans01.c �����G��
*/
#include <stdio.h>

int main ( void )
{
	int kodo;
	double kion;

	//���x�̓���
	printf("���x����͂��Ă�������>>");
	scanf("%d",&kodo);

	//�C���̌v�Z
	kion = (kodo / 100)*0.6 ;

	//���ʂ̕\��
	printf("�C���́A%.2f�x������\n",kion);

	return 0;
}