/**************************************
ex71.c 練習問題
**************************************/
#include <stdio.h>

int main ( void )
{
	int hairetu[5];
	int i;

	//入力
	for(i=0; i<5; i++){
	printf("要素%dの入力>>",i);
	scanf("%d",&hairetu[i]);
	}

	//出力
	printf("\n");
	for(i=4; i>=0; i--){
	printf("要素%dは%dです\n",i,hairetu[i]);
	}

	return 0;
}