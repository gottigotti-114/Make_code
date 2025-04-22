/*****************************
ex65.c ‚¤‚é‚¤”N”»’è
*****************************/
#include <stdio.h>

int isUruu ( int year );

int main ( void )
{
	int year;

	printf("”N‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>>");
	scanf("%d",&year);

	if(isUruu ( year ))
		printf("‰[”N‚Å‚·\n");
	else
		printf("‰[”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");

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