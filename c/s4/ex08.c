/*
ex06/c
*/

#include <stdio.h>

int main ( void )
{
	char c;

	c = '1';
	printf("before:%d\n",c);

	c -= '0';

	printf("after:%d\n",c);


	return 0;

	//1(”’l) = 0000 0001 = 0011 0001 - 0011 0000 = c - 0011 0000 = c - 0x30 = c - '0'
}