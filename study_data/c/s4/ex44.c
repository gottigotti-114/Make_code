/*
ex44.c —ûK–â‘è4-4
*/
#include <stdio.h>

int main ( void )
{
	int h,m,s;

	//•b”‚Ì“ü—Í
	printf("•b”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>>");
	scanf("%d",&s);

	//•ÏŠ·
	m = s / 60;
	s = s % 60;
	h = m / 60;
	m = m % 60;

	//Œ‹‰Ê•\¦
	printf("%dŠÔ%d•ª%d•b‚Å‚·\n",h,m,s);

	return 0;
}