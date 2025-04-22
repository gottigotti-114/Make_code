/**************************************
ex05.c ”z—ñ‚Ì‘€ì
**************************************/
#include <stdio.h>

int main ( void )
{
	//”z—ñ‚ÌéŒ¾
		int score[10] = { 65,87,90,82,75,80,78,95,68,72};
		int i;

	for(i=8;	i >= 5; i--)
		score[i] = 0;

	//Œ‹‰Ê•\¦
	for(i=0;i < 10 ; i++)
		printf("score[%d]%d\n",i,score[i]);

	return 0;
}