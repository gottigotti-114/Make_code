/*
ex12.c ������\������
*/
#include <stdio.h>

int main ( void )
{
	int n;
	int cnt;

	//���l�̓���
	printf("Input number >> ");
	scanf ("%d",&n);

	//��������
	cnt = 1;

	while ( cnt <= n)
	{
		printf("%d",cnt);
		cnt = cnt + 1;
	}
	
	return 0;
}