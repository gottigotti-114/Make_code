/******************************
ex02.c toupper()の利用
*******************************/
#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char moji;
	char henkango;

	//文字の入力
	printf("文字の入力>>");
	scanf("%c",&moji);

	//文字の変換
	henkango = toupper(moji);

	//結果の表示
	printf("変換後の文字は%cです\n",henkango);

	return 0;
}