/****************************
ex51.c 平方根
***************************/

#include <stdio.h>
#include <math.h>

int main (void)
{
	double suti,heiho;

	//数値の入力
	printf("数値の入力>>");
	scanf("%lf",&suti);

	//平方根を求める
	heiho = sqrt(suti);	//読み方:スクエアルート…平方根に変換する

	//表示
	printf("%fの平方根は%fです\n",suti,heiho);

	return 0;
}