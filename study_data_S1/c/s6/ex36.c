/*
ex36.c 素数
*/
#include <stdio.h>

int main ( void )
{
	int suti;

	//整数値の入力
	printf("整数の入力>>");
	scanf("%d",&suti);

	//処理の振り分け
	switch ( suti ){
		case 2:
			printf("素数です\n");
			break;
		case 3:
			printf("素数です\n");
			break;
		case 5:
			printf("素数です\n");
			break;
		case 7:
			printf("素数です\n");
			break;
		default:
			printf("素数ではありません\n");
			break;

		//breakの働き：ブロック化された処理の塊から抜ける（）

	}

	return 0;
}
