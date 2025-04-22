/************************
newex16.c
************************/
#include <stdio.h>

int main (void)
{

	int score[]={78,70,80,98,96};
	int gokei,i;

	for(i=5; i<100; i++){
		score[i]=0;
	}
	
	for(i=0; score[i]!=NULL; i++){
		gokei=gokei+score[i];
	}

	printf("‡Œv‚Í%d‚Å‚·",gokei);

	return 0;
}