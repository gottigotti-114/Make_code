/****************************
ex13.c
****************************/
#include <stdio.h>

int isKomoji ( char c );

int main ( void )
{
	char c;

	printf("•¶š‚Ì“ü—Í>>");
	scanf("%c",&c);

	if( isKomoji ( c ))
		printf("“ü—Í‚³‚ê‚½•¶š‚Í¬•¶š‚Å‚·\n");
	else
		printf("“ü—Í‚³‚ê‚½•¶š‚Í¬•¶š‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");

	return 0;
}

/*****************************/
int isKomoji ( char c )
{
	if('a' <= c && c <='z')
		return 1;
	else
		return 0;
}