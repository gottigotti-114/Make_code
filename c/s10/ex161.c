/*****************************
ex161.c ‚¤‚é‚¤”N”»’è
*****************************/
#include <stdio.h>

int isUruu ( int year );
int endDay ( int year, int month);

int main ( void )
{
	int year,month,eday;

	printf("”N‚ÆŒŽ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>>");
	scanf("%d %d",&year,&month);

	printf("%4d”N%2dŒŽ‚Ì––“ú‚Í%2d“ú‚Å‚·\n",year,month,endDay ( year,month));

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