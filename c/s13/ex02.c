/******************************
ex02.c toupper()‚Ì—˜—p
*******************************/
#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char moji;
	char henkango;

	//•¶Žš‚Ì“ü—Í
	printf("•¶Žš‚Ì“ü—Í>>");
	scanf("%c",&moji);

	//•¶Žš‚Ì•ÏŠ·
	henkango = toupper(moji);

	//Œ‹‰Ê‚Ì•\Ž¦
	printf("•ÏŠ·Œã‚Ì•¶Žš‚Í%c‚Å‚·\n",henkango);

	return 0;
}