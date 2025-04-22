/****************************************
ex66.c 入力された正の整数値の階乗を求める
****************************************/

#include <stdio.h>

int main ( void )
{
	int n,kaijo;

	//数値の入力
	printf("Input number>>");
	scanf("%d",&n);
	

	//階乗の計算
	
	for(kaijo=1;n!=0;n--)	kaijo = kaijo * n;

	//階乗の表示
	printf("%d\n",kaijo);

	return 0;
}