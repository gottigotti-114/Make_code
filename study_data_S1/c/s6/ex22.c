/*
ex22.c
*/

#include <stdio.h>

int main ( void )
{
	int date,gokei;

	gokei = 0;
	
	printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>>");
	while ( scanf("%d",&date) != EOF)
	{
		gokei = gokei + date;
		printf("”’l‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>>");
	}

	printf("‡Œv‚Í%d‚Æ‚È‚è‚Ü‚µ‚½\n",gokei);

	return 0;
}