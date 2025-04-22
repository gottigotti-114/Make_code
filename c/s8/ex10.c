/***************************
ex10.c •¶š—ñ‚Ì•¡Ê
************************/

#include <stdio.h>

int main ( void )
{
	char str1[10],str2[10];
	int i;

	//•¶š—ñ‚Ì“ü—Í
	printf("•¶š—ñ‚Ì“ü—Í>>");
	scanf("%s",str1);

	//•¶š—ñ‚Ì•¡Ê
	for(i=0; str1[i]!='\0'; i++){
		str2[i]=str1[i];
	}
	str2[i]='\0';

	//•¶š—ñ‚Ìo—Í
	printf("•¶š—ñ‚Í%s‚Å‚·\n",str2);

	return 0;
}