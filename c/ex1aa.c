/*
ex20.c �ϐ��̌���
*/
#include <stdio.h>

int main ( void )
{
	int a,b,w;

	//���l�̓���
	printf("Input number (a) >>");
	scanf("%d",&a);
	printf("Input number (b) >>");
	scanf("%d",&b);

	//����
	w = a;
	a = b;
	b = w;

	//���ʂ̕\��
	printf("a = %d, b = %d\n",a,b);

	return 0;
}