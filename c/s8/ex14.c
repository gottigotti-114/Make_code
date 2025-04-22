/*****************************
ex14.c シーザー番号
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
		str[i]+=3;
	}

	//暗号の表示
	printf("%s\n",str);

	return 0;
}