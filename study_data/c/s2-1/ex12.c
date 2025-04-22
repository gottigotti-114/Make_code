/******************************
ex12.c 奇数パリティチェック
******************************/
#include <stdio.h>

int countBinary ( char );
int checkParity ( char );

int main ( void )
{
	char c;

	printf("Input Hexadecimal >>");
	scanf("%x",&c);

	if( checkParity ( c ) )	printf("OK\n");
	else							printf("NG\n");

	return 0;
}
/*********************************/
int checkParity(char c)
{
	return countBinary(c) % 2;
}
/*******************************/
int countBinary( char c)
{
	int i;
	unsigned char mask = 0x80;
	int cnt;

	cnt = 0;
	for(i=0; i<8; i++){
		if(c&mask)	cnt++;
		mask >>= 1;
	}

	return cnt;
}