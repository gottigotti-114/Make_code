/*****************************
ex65.c うるう年判定
*****************************/
#include <stdio.h>

int isUruu ( int year );

int main ( void )
{
	int year;

	printf("年を入力してください>>");
	scanf("%d",&year);

	if(isUruu ( year ))
		printf("閏年です\n");
	else
		printf("閏年ではありません\n");

	return 0;
}
/******************************/
int isUruu ( int year )
{
	int a;
	a = year % 4;
	if(a == 0&&year % 100 != 0)
		return 1;
	else
		return 0;
}