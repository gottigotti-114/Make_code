/*
ex13.c
*/

#include <stdio.h>

int main ( void )
{
	int suti,cnt;

	printf("数値を入力してください。3の倍数になると*を表示します>>");

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