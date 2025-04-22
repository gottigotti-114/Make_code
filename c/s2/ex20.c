/*
ex20.c •Ï”‚ÌŒğŠ·
*/
#include <stdio.h>

int main ( void )
{
	int a,b,w;

	//”’l‚Ì“ü—Í
	printf("Input number (a) >>");
	scanf("%d",&a);
	printf("Input number (b) >>");
	scanf("%d",&b);

	//ŒğŠ·
	w = a;
	a = b;
	b = w;

	//Œ‹‰Ê‚Ì•\¦
	printf("a = %d, b = %d\n",a,b);

	return 0;
}