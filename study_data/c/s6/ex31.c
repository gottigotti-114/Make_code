/*
ex31.c
*/
#include <stdio.h>

int main ( void )
{
	int gender,weekday,fee;

	//«•Ê‚Ì“ü—Í
	printf("«•Ê‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢i’j«F‚P,—«F‚Qj>>");
	scanf("%d",&gender);

	//—j“ú‚Ì“ü—Í
	printf("—j“ú‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢iŒ1,‰Î2,…3,–Ø4,‹à5,“y6,“ú7 >>");
	scanf("%d",&weekday);

	//—¿‹à‚Ìİ’è
	if ( gender == 2 && weekday == 3)
		fee = 1000;
	else
		fee = 1500;

	//—¿‹à‚Ì•\¦
	printf("—¿‹à‚Í%d‚Å‚·\n",fee);

	return 0;
}