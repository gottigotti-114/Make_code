/*
ex42.c —ûK–â‘è4-2 ‹³‰È‘p59
*/
#include <stdio.h>

int main( void )
{
	int yen;
	int doll;
	int amari;

	//‰~‚Ì“ü—Í
	printf("‰~‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>>");
	scanf("%d",&yen);

	//Š·Z
	doll = yen / 96;
	amari = yen % 96;

	//Œ‹‰Ê‚Ì•\¦
	printf("%dƒhƒ‹‚Æ‚ ‚Ü‚è%d‰~‚Å‚·\n",doll,amari);

	return 0;
}