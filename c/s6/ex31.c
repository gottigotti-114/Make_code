/*
ex31.c
*/
#include <stdio.h>

int main ( void )
{
	int gender,weekday,fee;

	//���ʂ̓���
	printf("���ʂ���͂��Ă��������i�j���F�P,�����F�Q�j>>");
	scanf("%d",&gender);

	//�j���̓���
	printf("�j������͂��Ă��������i��1,��2,��3,��4,��5,�y6,��7 >>");
	scanf("%d",&weekday);

	//�����̐ݒ�
	if ( gender == 2 && weekday == 3)
		fee = 1000;
	else
		fee = 1500;

	//�����̕\��
	printf("������%d�ł�\n",fee);

	return 0;
}