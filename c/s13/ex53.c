/****************************
ex53.c 天井関数・床関数
***************************/

#include <stdio.h>
#include <math.h>

int main (void)
{
	double deg, rad;
	double r;

	//入力

	printf("半径の入力>>");
	scanf("%lf",&r);
	printf("角度の入力>>");
	scanf("%lf",&deg);

	//度数からラジアンを求める
	rad = PAI * deg / 180.0;

	//座標の表示
	printf("(x,y)=(%.2f,%.2f)\n",r*cos(rad),r*sin(rad));		//引数はラジアンじゃないといけない

	return 0;
}