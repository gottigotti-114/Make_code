/*
ans01.c 藤原秀伍
*/
#include <stdio.h>

int main ( void )
{
	int kodo;
	double kion;

	//高度の入力
	printf("高度を入力してください>>");
	scanf("%d",&kodo);

	//気温の計算
	kion = (kodo / 100)*0.6 ;

	//結果の表示
	printf("気温は、%.2f度下がる\n",kion);

	return 0;
}