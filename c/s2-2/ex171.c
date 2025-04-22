/********************************
ex171.c
**********************************/
#include <stdio.h>
#include <stdlib.h>
#define RADIX 16

char DecToHex ( int n );
void showHex ( int n );

int main ( int argc , char *argv[] )			//arg cはカウントのc vはバリューのv
{
	int n;

	//入力チェック
	if(argc != 2){
		printf("arg error\n");
		return -1;
	}

	n = atoi( argv[1] );

	//16進数表示する
	showHex( n );

	return 0;
}
/******************************/
void showHex ( int n )
{
	char tmp[10];
	int i;

	for(i=0; n > 0; i++){
		tmp[i]= n % 16;
		n = n / 16;
	}

	for(i--; i>=0; i--){
		printf("%c",DecToHex(tmp[i]));
	}

	return;
}
/**************************************/
char DecToHex (int n)
{
	char moji[RADIX+1] = "0123456789ABCDEF";

	return moji[n];
}

//これだと数字を16進数に変換するという