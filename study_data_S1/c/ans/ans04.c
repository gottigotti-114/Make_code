/*
ans04.c �����G��
*/
#include <stdio.h>

int main ( void )
{
	int n;
	int cnt;

	//���l�̓���
	printf("���l����͂��Ă�������>>");
	scanf("%d",&n);

	//���l��\������
	cnt = 1;

	while ( cnt <= n )
	{
		printf("%d",cnt);
		cnt = cnt + 1;
	}

	return 0;
}