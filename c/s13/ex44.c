/******************************
ex44.c ���݂���
*******************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void )
{
	char msg[][5] = {"��g","�g","���g","��","�勥"};
	int no,i;

	//
	srand( time(0));
	no = rand() % 100;

	if(no<5)			i=0;
	else if(no<30)	i=1;
	else if(no<70)	i=2;
	else if(no<30)	i=3;
	else				i=4;
	//
	printf("%s",msg[i]);

	return 0;
}