/*
ex11.c ��������
*/
#include <stdio.h>

int main ( void )
{
	int len;
	int cnt;

	//�����̓���
	printf("Input length >> ");
	scanf ("%d",&len);

	//��������
	cnt = 1;

	while ( cnt <= len)
	{
		printf("�\");
		cnt = cnt + 1;
	}
	
	return 0;
}