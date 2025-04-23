/****************************
ex131.c 練習問題13-1		小文字の数を探す
***************************/

#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char str[100];
	char cnt;
	int i;

	//文字列の入力
	printf("文字列の入力>>");
	scanf("%s",str);

	//小文字のカウント
	cnt = 0;
	for(i=0; str[i] != '\0'; i++){
		if(islower(str[i]))	cnt++;
	}

	//結果の表示
	printf("小文字の個数は%dです\n",cnt);

	return 0;
}