/*
ex05.c ���������
*/
#include <stdio.h>

int main ( void )
{
	int n;

	//���l�̓���
	printf("���l�̓���>>");
	scanf("%d",&n);

	//�������
	if ( n % 2 == 0 )
	{
		printf("����\n");
	}
	else
	{
		printf("�\n");
	}
	return 0;
}