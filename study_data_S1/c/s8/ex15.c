/*****************************
ex15.c 大文字に変換
*****************************/
#include <stdio.h>

int main (void)
{
	char str[10];
	int i;

	//文字の入力
	printf("文字の入力>>");
	scanf("%s",str);

	//暗号化
	for(i=0; str[i] != '\0'; i++){
		if(str[i]>='a' && str[i]<='z')
		str[i]-=32;
	}

	//暗号の表示
	printf("%s\n",str);

	return 0;
}