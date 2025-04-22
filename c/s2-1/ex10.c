/****************************
ex10.c 2i”•\¦
*****************************/
#include <stdio.h>

void viewBinary ( char );

int main ( void )
{
	char c;
	
	printf("Input Char>>");
	scanf("%c",&c);

	viewBinary(c);

	return 0;
}

/******************************/
void viewBinary ( char c )
{
	int i;
	unsigned char mask = 0x80;

	for(i = 0; i < 8; i++){
		if(c & mask)	printf("1");
		else				printf("0");

		mask /= 2;		//mask >>= 1;‚Å‚à‚¨‚¯
		//mask >>= 1;
	}

	return;
}