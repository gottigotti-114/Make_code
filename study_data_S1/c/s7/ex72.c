/**************************************
ex72.c 練習問題7-2
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
	printf("\n奇数番目の値は");
	for(i=0; i<5; i++){
		if(i%2==1){
			printf(" %d ",hairetu[i]);
		}
	}

	printf("です");
	return 0;
}