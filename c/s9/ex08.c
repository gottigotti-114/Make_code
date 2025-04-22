/**************************************
ex08.c Šm”F–â‘è9.4
		 ‹t‡‚É•\¦
**************************************/
#include <stdio.h>
#define NUM 11

int main (void)
{
	int hairetu[NUM] = {-5,-4,-3,-2,-1,0,1,2,3,4,5};
	int i;
	int *p;

	p = hairetu;

	for(i = NUM-1; i >= 0; i--){
		printf("%d",*(p+i));
	}

	return 0;
}