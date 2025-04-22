/*
ex041.c 絶対値を求める
*/
#include <stdio.h>

int main ( void )
{
	int a,b,x;

	//a,bの入力
	printf("２つの数値の入力>>");
	scanf("%d %d",&a,&b);

	//絶対値を求める
	if ( a > b )
	{
		x = a - b;
	}
	else
	{
		x = b - a;
	}
	//表示
	printf("%d\n",x);

	return 0;
}