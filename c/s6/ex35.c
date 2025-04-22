/*
ex35.c うるう年判定
*/
#include <stdio.h>

int main ( void )
{
	int year;

	//年の入力
	printf("年を入力してください>>");
	scanf("%d",&year);

	//うるう年の判定
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
		printf("うるう年である\n");
	else
		printf("うるう年ではない\n");

	return 0;
}