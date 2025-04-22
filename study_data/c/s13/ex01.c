/******************************
ex01.c isalpha()の利用
*******************************/
#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char moji;

	//文字の入力
	printf("文字の入力>>");
	scanf("%c",&moji);

	//文字種検査
	if(isalpha(moji)){
		printf("アルファベットです\n");
	}
	else{
		printf("アルファベットではありません\n");
	}

	return 0;
}