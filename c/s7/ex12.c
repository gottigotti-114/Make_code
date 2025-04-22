/**************************************
ex12.c —v‘f‚Ìíœ
**************************************/
#include <stdio.h>

int main ( void )
{
	int h[5]={'A','B','C','D','E'};
	int i;

	//ˆ—‘O
	printf("ˆ—‘O:");
	for(i=0; i<5; i++){
		printf("%c",h[i]);
	}
	printf("\n");

	//íœˆ— 
	for(i=3; i<5; i++){
		h[i]=h[i+1];
	}

	h[4]='\0';

	//ˆ—Œã
	printf("ˆ—Œã:");
	for(i=0; i<5; i++){
		printf("%c",h[i]);
	}
	printf("\n");

	return 0;
}