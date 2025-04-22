/*****************************
ex171.c
*****************************/
#include <stdio.h>

#define RADIX 16

char DecToHex ( int n );

int main ( void )
{
	int n;

	printf("”’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>>");
	scanf("%d",&n);

	if(n < 0 || n > 15 ){
		printf("error\n");
		return 0;
	}

	printf("%c\n",DecToHex ( n ));

	return 0;
}
/***************************/
char DecToHex ( int n )
{
	char moji[RADIX+1] = "0123456789ABCDEF";

	return moji [n];
}