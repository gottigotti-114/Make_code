/******************************
ex11.c 1‚ÌŒÂ”‚ğ”‚¦‚é
****************************/
#include <stdio.h>

int countBinary ( char );

int main ( void )
{
	char c;

	printf("Input Hexadecimal >>");
	scanf("%x",&c);

	printf("%d\n",countBinary( c ));

	return 0;
}
/*********************************/
int countBinary ( char c )
{
	int i;
	unsigned char mask = 0x80;
	int cnt;

	cnt = 0;
	for(i = 0; i < 8; i++){
		if(c & mask)	cnt++;
		mask >>= 1;
	}

	return cnt;
}