/*********************************
ex12.c 文字列の連結
*********************************/
#include <stdio.h>

int main ( void )
{
	char str1[100],str2[100];
	char *p1,*p2;

	//文字列の入力
	printf("二つの文字列の入力>>");
	scanf("%s %s", str1,str2);

	//str1の末尾を探す
	p1 = str1;
	while ( *p1 != '\0' )	p1++;

	//str1の末尾からstr2を複写する
	p2 = str2;
	while (*p2 != '\0'){
		*p1 = *p2;						//while(*p2 != '\0')
		p1++;								//*(p1++) = *(p2++)でもいける
		p2++;								//順番は左のとおり
	}
	*p1 = '\0';

	//表示
	printf("%s\n",str1);

	return 0;
}