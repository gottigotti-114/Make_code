/*
ex22.c
*/

#include <stdio.h>

int main ( void )
{
	int date,gokei;

	gokei = 0;
	
	printf("数値を入力してください>>");
	while ( scanf("%d",&date) != EOF)
	{
		gokei = gokei + date;
		printf("数値を入力してください>>");
	}

	printf("合計は%dとなりました\n",gokei);

	return 0;
}