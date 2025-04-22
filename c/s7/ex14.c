/**************************************
ex13.c ”z—ñ‚Ì•¡ŽÊ
**************************************/
#include <stdio.h>

int main ( void )
{
	double class1[5]={1.5,1.2,0.8,0.2,1.0};
	double class2[5]={0.2,0.5,1.2,1.0,0.7};
	double all[10];
	int i,j;

	//class1 -> all
	for(i=0, j=0; i<5; i++, j++){
		all[j]=	class1[i];
	}

	//class2 -> all
	for(i=0; i<5; i++, j++){
		all[j]=class2[i];
	}

	//Œ‹‰Ê‚Ì•\Ž¦
	for(j=0; j<10; j++)
		printf("all[%d]%.1f\n",j,all[j]);

	return 0;
}