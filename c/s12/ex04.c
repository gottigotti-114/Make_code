/******************************
ex04.c
*******************************/
#include <stdio.h>

int main ( void )
{
	FILE *fp;
	char buf[100];

	//�O����
	if((fp = fopen("test02.txt","w")) == NULL){
		printf("ERROR!");
		return -1;
	}

	//�又��
	while(scanf("%s",buf) != EOF){
		fprintf(fp,"%s",buf);
	}

	//�㏈��
	fclose(fp);

	return 0;
}