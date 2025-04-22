/**************************************
ex72.c —ûK–â‘è7-2
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
	printf("\nŠï””Ô–Ú‚Ì’l‚Í");
	for(i=0; i<5; i++){
		if(i%2==1){
			printf(" %d ",hairetu[i]);
		}
	}

	printf("‚Å‚·");
	return 0;
}