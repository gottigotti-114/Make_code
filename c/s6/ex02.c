/*
ex02.c �����ݒ�
*/
#include <stdio.h>

int main ( void )
{
	int age,fee;

	//�N��̓���
	printf("�N�����͂��Ă�������>>");
	scanf("%d",&age);

	//�����̃Z�b�g
	if (age <= 15 )
	{
		fee = 800;
	}
	else
	{
		fee = 1500;
	}

	//�����̕\��
	printf("������%d�~�ł�\n",fee);

	return 0;
}