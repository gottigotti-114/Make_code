/*
ex43.c 練習問題4-3 教科書p58
*/
#include <stdio.h>

int main ( void )
{
	int zeinuki,zeikomi;
	int suryo;
	int kingaku;

	//数量データの入力
	printf("税抜き価格と売り上げ数量を入力しください>>");
	scanf("%d %d",&zeinuki,&suryo);

	//金額の計算
	zeikomi = zeinuki * 1.05;
	kingaku = zeikomi * suryo;

	//結果の表示
	printf("税込価格は、%d円です\n",kingaku);

	return 0;
}