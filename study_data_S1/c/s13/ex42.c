/*******************************
ex42.c 5つのラン数を表示する
******************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void )
{
	int i;

	srand(time(0));

	for(i=0; i<5; i++)
		printf("%d\n",rand());
	
	return 0;
}