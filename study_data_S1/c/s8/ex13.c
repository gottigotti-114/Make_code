/*****************************
ex13.c 指定された文字を#で表示する
*****************************/
#include <stdio.h>

int main (void)
{
	char str[10];
	int i;

	//文字の入力
	printf("文字の入力>>");
	scanf("%s",str);

	//1文字ずつ表示
	for(i=0; str[i] != '\0'; i++){
		if(str[i]=='n')
			printf("#");
		else
			printf("%c",str[i]);
	}

	return 0;
}