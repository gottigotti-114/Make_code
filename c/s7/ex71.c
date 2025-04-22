/**************************************
ex71.c —ûK–â‘è
**************************************/
#include <stdio.h>

int main ( void )
{
	int hairetu[5];
	int i;

	//“ü—Í
	for(i=0; i<5; i++){
	printf("—v‘f%d‚Ì“ü—Í>>",i);
	scanf("%d",&hairetu[i]);
	}

	//o—Í
	printf("\n");
	for(i=4; i>=0; i--){
	printf("—v‘f%d‚Í%d‚Å‚·\n",i,hairetu[i]);
	}

	return 0;
}