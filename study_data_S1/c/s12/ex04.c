/******************************
ex04.c
*******************************/
#include <stdio.h>

int main ( void )
{
	FILE *fp;
	char buf[100];

	//前処理
	if((fp = fopen("test02.txt","w")) == NULL){
		printf("ERROR!");
		return -1;
	}

	//主処理
	while(scanf("%s",buf) != EOF){
		fprintf(fp,"%s",buf);
	}

	//後処理
	fclose(fp);

	return 0;
}