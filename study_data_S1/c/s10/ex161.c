/*****************************
ex161.c うるう年判定
*****************************/
#include <stdio.h>

int isUruu ( int year );
int endDay ( int year, int month);

int main ( void )
{
	int year,month,eday;

	printf("年と月を入力してください>>");
	scanf("%d %d",&year,&month);

	printf("%4d年%2d月の末日は%2d日です\n",year,month,endDay ( year,month));

	return 0;
}
/******************************/
int endDay ( int year, int month )
{
	int date[] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int eday;

	eday = date[month - 1];

	if(month == 2) eday += isUruu ( year );
	
	return eday;
}
/*****************************/

int isUruu ( int year )
{

	if(year % 4 == 0 && year % 100 != 0)
		return 1;
	if(year % 400 == 0 )
		return 1;

	return 0;
}