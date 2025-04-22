/*
ex43.c —ûK–â‘è4-3 ‹³‰È‘p58
*/
#include <stdio.h>

int main ( void )
{
	int zeinuki,zeikomi;
	int suryo;
	int kingaku;

	//”—Êƒf[ƒ^‚Ì“ü—Í
	printf("Å”²‚«‰¿Ši‚Æ”„‚èã‚°”—Ê‚ğ“ü—Í‚µ‚­‚¾‚³‚¢>>");
	scanf("%d %d",&zeinuki,&suryo);

	//‹àŠz‚ÌŒvZ
	zeikomi = zeinuki * 1.05;
	kingaku = zeikomi * suryo;

	//Œ‹‰Ê‚Ì•\¦
	printf("Å‰¿Ši‚ÍA%d‰~‚Å‚·\n",kingaku);

	return 0;
}