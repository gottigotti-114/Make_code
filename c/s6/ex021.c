/*
ex021.c �����ݒ�
*/
#include <stdio.h>

int main ( void )
{
	int age,fee;

	fee = 1500;

	//�N��̓���
	printf("�N�����͂��Ă�������>>");
	scanf("%d",&age);

	//�����̃Z�b�g
	if (age <= 15 )
	{
		fee = 800;
	}

	//�����̕\��
	printf("������%d�~�ł�\n",fee);

	return 0;
}