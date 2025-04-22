/******************************
ex04.c
*******************************/
#include <stdio.h>

int main ( void )
{
	FILE *fp;
	char buf[100];

	//‘Oˆ—
	if((fp = fopen("test02.txt","w")) == NULL){
		printf("ERROR!");
		return -1;
	}

	//åˆ—
	while(scanf("%s",buf) != EOF){
		fprintf(fp,"%s",buf);
	}

	//Œãˆ—
	fclose(fp);

	return 0;
}