/*
ex041.c ��Βl�����߂�
*/
#include <stdio.h>

int main ( void )
{
	int a,b,x;

	//a,b�̓���
	printf("�Q�̐��l�̓���>>");
	scanf("%d %d",&a,&b);

	//��Βl�����߂�
	if ( a > b )
	{
		x = a - b;
	}
	else
	{
		x = b - a;
	}
	//�\��
	printf("%d\n",x);

	return 0;
}