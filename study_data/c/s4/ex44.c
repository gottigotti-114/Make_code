/*
ex44.c ���K���4-4
*/
#include <stdio.h>

int main ( void )
{
	int h,m,s;

	//�b���̓���
	printf("�b������͂��Ă�������>>");
	scanf("%d",&s);

	//�ϊ�
	m = s / 60;
	s = s % 60;
	h = m / 60;
	m = m % 60;

	//���ʕ\��
	printf("%d����%d��%d�b�ł�\n",h,m,s);

	return 0;
}