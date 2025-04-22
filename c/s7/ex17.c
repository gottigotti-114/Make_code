/************************
ex17.c
************************/
#include <stdio.h>

int main (void)
{

	int score[5]={78,70,80,98,96};
	int gokei,i;

	for(i=0,gokei=0; i<5; i++){
		gokei+=score[i];
	}

	printf("‡Œv‚Í%d‚Å‚·",gokei);

	return 0;
}