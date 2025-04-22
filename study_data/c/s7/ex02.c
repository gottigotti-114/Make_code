/**************************************
ex02.c 配列の操作
**************************************/
#include <stdio.h>

int main ( void )
{
	//配列の宣言
		int hairetu[5];
		int i;

	//値の格納
	hairetu[0]=50;
	hairetu[1]=10;
	hairetu[2]=30;
	hairetu[3]=40;
	hairetu[4]=20;

	//配列の値の表示
	for(i=0;i<5;i++){
		printf("%d",hairetu[i]);
	}

	return 0;
}