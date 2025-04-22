/*
ex06.c ˜a—ï•\¦
*/
#include <stdio.h>

int main ( void )
{
	int year;

	//¼—ï”N‚Ì“ü—Í
	printf("¼—ï”N‚Ì“ü—Í>>");
	scanf("%d",&year);

	//˜a—ï‚Ì•\¦
	if ( year > 1988 )
	{
		if ( year > 2018 )
		{
			year = year - 2018;
			printf("—ß˜a%d”N",year);
		}
		else
		{
			year = year - 1988;
			printf("•½¬%d”N",year);
		}
	}
	else
	{
		printf("º˜a%d”N",year);
	}

	return 0;

}