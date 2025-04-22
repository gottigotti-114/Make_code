/****************************
ex55.c Å‘å’l‚ÆÅ¬’l‚ğ‹‚ß‚é
*****************************/

#include <stdio.h>

int main ( void )
{
	double sinchou[2][5]={
		{ 160.0,158.0,180.7,170.0,160.0},
		{ 180.0,170.0,155.8,180.5,151.0}
	};

	double max,min;
	int i,j;

	for(i=0; i<2; i++){
		max = -1;
		min = 1000;
		for(j=0; j<5; j++){
			if(max<sinchou[i][j])
				max = sinchou[i][j];

			if(min>sinchou[i][j])
				min = sinchou[i][j];
		}

		printf("%d‘g‚Ì max %.1f , min %.1f\n",i+1,max,min);
	}

	return 0;
}