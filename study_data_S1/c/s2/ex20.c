/*
ex20.c 変数の交換
*/
#include <stdio.h>

int main ( void )
{
	int a,b,w;

	//数値の入力
	printf("Input number (a) >>");
	scanf("%d",&a);
	printf("Input number (b) >>");
	scanf("%d",&b);

	//交換
	w = a;
	a = b;
	b = w;

	//結果の表示
	printf("a = %d, b = %d\n",a,b);

	return 0;
}