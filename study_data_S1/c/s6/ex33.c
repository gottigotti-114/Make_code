/*
ex33.c 英小文字
*/
#include <stdio.h>

int main ( void )
{
	char c;

	//文字の入力
	printf("文字の入力>>");
	scanf("%c",&c);

	//判定
	if ('a' <= c && c <= 'z')
		printf("OK\n");
	else
		printf("NG\n");


	return 0;
}