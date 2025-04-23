/********************************
ex11.c 文字列の長さを求める
*******************************/
#include <stdio.h>
#define NUM 100
int main ( void )
{
	char str[NUM];
	char *p;

	//文字列の入力
	printf("文字列の入力>>");
	scanf("%s",str);

	//文字列のカウント
	p = str;
	while ( *p != '\0')	p++;

	//結果の表示
	printf("%d\n",p-str);			//今回はstrの配列がcharだったので配列1つ分が1Bなのでもしintの配列などで配列1つ分が1Bじゃなかったら(p - str) / sizoof(char)と記入すればcharと同じようなカウントの仕方をする

	return 0;
}

/*
結果の表示では
{'a','b','c','\0'}
とあったときに、pはアドレスの値を指し、strはstr[0]のアドレスを指すので
p(str[4]のアドレスまで繰り返し直後) - str(str[0])をしたとき