/*
ex48.c 練習問題
*/
#include <stdio.h>

int main ( void )
{
	int seireki;

	printf("西暦を入力してください>>");
	scanf("%d",&seireki);

	seireki = seireki % 100;

	printf("結果は%d年となりました",seireki);

	return 0;
}