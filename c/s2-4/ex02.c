/*****************************
ex02.c ŠKæ‚ğ‹‚ß‚é
******************************/
#include <stdio.h>

int kaijo ( int n);

int main ( argc,argv[] )
{
	printf("3! = %d\n",kaijo(argv[1]));

	return 0;
}

/*****************************/

int kaijo ( int n)
{
	int r;

	if(n == 0)	return 1;

	r = kaijo( n - 1 );

	return n * r;
}