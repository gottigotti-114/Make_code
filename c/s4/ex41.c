/*
ex41.c 練習問題4-1　教科書Ｐ58
*/
#include <stdio.h>

int main( void )
{
	double kodo;
	double kion;

	//高度の入力
	printf("高度を入力してください>>");
	scanf("%lf",&kodo);	/*lf（エルエフ）は関数doubleを使う際に書かないといけない*/

	//気温差の計算
	kion = kodo / 100 * 0.6;

	//気温差の表示
	printf("気温は、%.1f度下がる\n",kion);	/*".1"は少数以下1桁以下を消す。".3"だと小数点以下3桁以下を消す*/

	return 0;
}