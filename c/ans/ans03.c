/*
ans03.c �����G��
*/
#include <stdio.h>

int main ( void )
{
	int x;

	//���l�̓���
	printf("���l����͂��Ă�������>>");
	scanf("%d",&x);

	//����
	if ( x % 2 == 1)
	{
		printf("��ł�\n");
	}
	else
	{
		printf("�����ł�\n");
	}

	return 0;
}