/*****************************
ex13.c Žw’è‚³‚ê‚½•¶Žš‚ð#‚Å•\Ž¦‚·‚é
*****************************/
#include <stdio.h>

int main (void)
{
	char str[10];
	int i;

	//•¶Žš‚Ì“ü—Í
	printf("•¶Žš‚Ì“ü—Í>>");
	scanf("%s",str);

	//1•¶Žš‚¸‚Â•\Ž¦
	for(i=0; str[i] != '\0'; i++){
		if(str[i]=='n')
			printf("#");
		else
			printf("%c",str[i]);
	}

	return 0;
}