/*
ex46.c —ûK–â‘è
*/
#include <stdio.h>

int main ( void )
{
	int hh,mm,ss;

	printf("ŠÔ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢(‹Lq—áFŠÔ •ª •b>>");

	scanf("%d%d%d",&hh,&mm,&ss);

	ss = hh * 3600 + mm * 60 + ss;

	printf("%d•b‚Æ‚È‚è‚Ü‚µ‚½",ss);

	return 0;
}