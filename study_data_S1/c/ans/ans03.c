/*
ans03.c 藤原秀伍
*/
#include <stdio.h>

int main ( void )
{
	int x;

	//数値の入力
	printf("数値を入力してください>>");
	scanf("%d",&x);

	//判定
	if ( x % 2 == 1)
	{
		printf("奇数です\n");
	}
	else
	{
		printf("偶数です\n");
	}

	return 0;
}