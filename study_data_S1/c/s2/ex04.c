/*
ex04.c　二乗して5を加算する
*/
#include <stdio.h>

int main ( void )
{
	/*宣言部*/
	int x;

	/*手続き部*/
	scanf ( "%d",&x);	/*ｘに入力*/
	x = x*x + 5;
	printf("%d\n",x);	/*xを出力*/

	return 0;
}