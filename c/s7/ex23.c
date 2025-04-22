/************************
ex23.c
************************/
#include <stdio.h>

int main (void)
{

	int score[5]={78,70,80,98,96};
	int cnt,i;
	float total;

	for(i=0,total=0,cnt=0; i<5; i++){
		total+=score[i];
		cnt++;
	}

	printf("•½‹Ï‚Í%.1f‚Å‚·",total/cnt);

	return 0;
}