/*
ex04.c ��Βl�����߂�
*/
#include <stdio.h>

int main ( void )
{
	int a,b,x;

	//a,b�̓���
	printf("�Q�̐��l�̓���>>");
	scanf("%d %d",&a,&b);

	//��Βl�����߂�
	x = a - b;
	if ( x < 0)
	{
		x = x * (-1);
	}
	
	//�\��
	printf("%d\n",x);

	return 0;
}