/******************************
ex36.c 文字列のシーケンシャルサーチ
******************************/
#include <stdio.h>
#include <string.h>
#define NUM 5

int main ( void )
{
	char str[NUM][20] = {
		"apple",
		"orange",
		"banana",
		"melon",
		"grape"
	};
	char target[20];
	int i;

	//文字列の入力
	printf("文字列の入力>>");
	scanf("%s",target);

	//文字の検索
	for(i=0; i < NUM; i++){
		if(strcmp(str[i],target)==0)
			break;
	}

	//結果
	if(i < NUM)
		printf("OK\n");
	else
		printf("NG\n");
	
	return 0;
}