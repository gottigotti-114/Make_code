/*****************************
ex15.c ‘å•¶Žš‚É•ÏŠ·
*****************************/
#include <stdio.h>

int main (void)
{
	char str[10];
	int i;

	//•¶Žš‚Ì“ü—Í
	printf("•¶Žš‚Ì“ü—Í>>");
	scanf("%s",str);

	//ˆÃ†‰»
	for(i=0; str[i] != '\0'; i++){
		if(str[i]>='a' && str[i]<='z')
		str[i]-=32;
	}

	//ˆÃ†‚Ì•\Ž¦
	printf("%s\n",str);

	return 0;
}