/*
ex44.c 練習問題4-4
*/
#include <stdio.h>

int main ( void )
{
	int h,m,s;

	//秒数の入力
	printf("秒数を入力してください>>");
	scanf("%d",&s);

	//変換
	m = s / 60;
	s = s % 60;
	h = m / 60;
	m = m % 60;

	//結果表示
	printf("%d時間%d分%d秒です\n",h,m,s);

	return 0;
}