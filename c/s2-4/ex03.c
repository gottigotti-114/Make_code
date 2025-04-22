/*****************************
ex03.c 基数変換
*******************************/
#include <stdio.h>
#include <stdlib.h>

void toBinary ( int n );

int main ( int argc , char *argv[] )
{
	int n;

	//コマンド引数から10進数数値を得る
	if( argc != 2 )	return -1;
	n = atoi ( argv[1] );

	//2進数で表示する
	toBinary( n );
	
	return 0;
}

/******************************/

void toBinary ( int n )
{
	if( n == 0 )	return;

	toBinary( n / 2);
	printf("%d ",n % 2);

	return;
}