/*
ex45.c 練習問題
*/
#include <stdio.h>

int main ( void )
{
	int doll,en;

	printf("金額(ドル)を入力してください>>");
	
	scanf("%d",&doll);

	en = doll * 96;

	printf("%d円となりました\n",en);

	return 0;
}