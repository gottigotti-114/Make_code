/*
ans02.c 藤原秀伍
*/

#include <stdio.h>

int main ( void )
{
	int year;
	int bottom;

	//数値の入力
	printf("西暦年を入力してください>>");
	scanf("%d",&year);

	//下二桁の計算
	bottom = year % 100;

	//結果の表示
	printf("%d\n",bottom);

	return 0;
}