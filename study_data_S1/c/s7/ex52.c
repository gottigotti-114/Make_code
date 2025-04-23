/*****************************
ex52.c 2次元配列の表示
*****************************/
#include <stdio.h>

int main ( void )
{
	int kuku[9][9];
	int i,j;

	//九九表の作成
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			kuku[i][j]=(i+1)*(j+1);
		}
	}

	//表示
	for(i=0; i<9; i++){
		for(j=0; j<9; j++){
			printf("%2d",kuku[i][j]);
		}
		printf("\n");
	}

	return 0;
}