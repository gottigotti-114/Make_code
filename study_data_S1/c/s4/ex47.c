/*
ex47.c 練習問題
*/
#include <stdio.h>

int main ( void )
{
	int a,b;

	printf("数値を二つ入力してください>>");
	scanf("%d%d",&a,&b);

	a = a * b;

	printf("結果は%dとなりました",a);

	return 0;
}