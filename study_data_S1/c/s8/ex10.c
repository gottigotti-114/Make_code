/***************************
ex10.c 文字列の複写
************************/

#include <stdio.h>

int main ( void )
{
	char str1[10],str2[10];
	int i;

	//文字列の入力
	printf("文字列の入力>>");
	scanf("%s",str1);

	//文字列の複写
	for(i=0; str1[i]!='\0'; i++){
		str2[i]=str1[i];
	}
	str2[i]='\0';

	//文字列の出力
	printf("文字列は%sです\n",str2);

	return 0;
}