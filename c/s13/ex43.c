/*******************************
ex43.c 3~15‚Ü‚Å
*****************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( void )
{
	int i;

	srand(time(0));

	for(i=0; i<100; i++){
		printf("%d\n",rand() % 13 + 3);
	}


	return 0;

}