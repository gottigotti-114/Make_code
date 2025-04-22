/*****************************
ex12.c
*****************************/
#include <stdio.h>

int main (void)
{
	char str[10];
	int i;

	//文字列の入力
	printf("文字列の入力>>");
	scanf("%s",str);

	//カウント
	for(i=0; str[i] != '\0'; i++){
		;
	}
	
	//文字数の出力
	printf("文字数は%dです。\n",i);

	return 0;
}