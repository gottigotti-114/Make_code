/*
ex12.c 数字を表示する
*/
#include <stdio.h>

int main ( void )
{
	int n;
	int cnt;

	//数値の入力
	printf("Input number >> ");
	scanf ("%d",&n);

	//線を引く
	cnt = 1;

	while ( cnt <= n)
	{
		printf("%d",cnt);
		cnt = cnt + 1;
	}
	
	return 0;
}