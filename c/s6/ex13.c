/*
ex13.c
*/

#include <stdio.h>

int main ( void )
{
	int suti,cnt;

	printf("���l����͂��Ă��������B3�̔{���ɂȂ��*��\�����܂�>>");

	scanf("%d",&suti);

	cnt = 1;

	while ( cnt <= suti )
	{
		if ( cnt % 3 == 0)
		{
			printf("*");
		}
		else
		{
			printf("%d",cnt);
		}
	
		cnt = cnt + 1;
	}

return 0;
}