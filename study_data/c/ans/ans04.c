/*
ans04.c 藤原秀伍
*/
#include <stdio.h>

int main ( void )
{
	int n;
	int cnt;

	//数値の入力
	printf("数値を入力してください>>");
	scanf("%d",&n);

	//数値を表示する
	cnt = 1;

	while ( cnt <= n )
	{
		printf("%d",cnt);
		cnt = cnt + 1;
	}

	return 0;
}