/**************************************
ex12.c 要素の削除
**************************************/
#include <stdio.h>

int main ( void )
{
	int h[5]={'A','B','C','D','E'};
	int i;

	//処理前
	printf("処理前:");
	for(i=0; i<5; i++){
		printf("%c",h[i]);
	}
	printf("\n");

	//削除処理 
	for(i=3; i<5; i++){
		h[i]=h[i+1];
	}

	h[4]='\0';

	//処理後
	printf("処理後:");
	for(i=0; i<5; i++){
		printf("%c",h[i]);
	}
	printf("\n");

	return 0;
}