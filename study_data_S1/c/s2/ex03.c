/*
ex03.c
*/
#include<stdio.h>

int main( void )
{
	/*宣言部*/
	int x;
	
	/*手続き部*/
	scanf("%d",&x);	/*ｘに入力*/
	x = x*3;
	printf("%d\n",x);	/*ｘを出力*/

	return 0;
}