/*
ex42.c 練習問題4-2 教科書p59
*/
#include <stdio.h>

int main( void )
{
	int yen;
	int doll;
	int amari;

	//円の入力
	printf("円を入力してください>>");
	scanf("%d",&yen);

	//換算
	doll = yen / 96;
	amari = yen % 96;

	//結果の表示
	printf("%dドルとあまり%d円です\n",doll,amari);

	return 0;
}