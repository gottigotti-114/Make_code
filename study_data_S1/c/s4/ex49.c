/*
ex49.c 練習問題
*/
#include <stdio.h>

int main ( void )
{
	int hen,menseki;

	printf("正方形の一片の長さを入力してください>>");
	scanf("%d",&hen);

	menseki = hen * hen;

	printf("面積は%d平方センチメートルとなりました",menseki);

	return 0;
}