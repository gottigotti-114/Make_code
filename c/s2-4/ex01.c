/******************************
ex01.c	Ä‹NŠÖ”
******************************/
#include <stdio.h>

void func ( int n );

int main ( void )
{
	func ( 4 );

	return 0;
}

/******************************/

void func ( int n )
{
	if(n <= 0) return;

	printf("%d",n);
	func( n - 1 );

	return;
}