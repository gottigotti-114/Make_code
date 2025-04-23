/****************************
ex52.c 三角関数の利用
***************************/

#include <stdio.h>
#include <math.h>
#define PAI 3.141592

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
	printf("(x,y)=(%.2f,%.2f)\n",r*cos(rad),r*sin(rad));

	return 0;
}