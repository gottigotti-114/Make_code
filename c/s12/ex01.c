/****************************
ex01.c
*****************************/
#include <stdio.h>

int main ( void )
{
	FILE *fp;
	char c;

	//前処理
	if((fp=fopen("test01.txt","r"))==NULL){		//この時点でポインタのfpにtest01.txtのアドレスを入れているのでこの後からは
		printf("open error\n");
		return -1;
	}


	//主処理
	while(fscanf(fp,"%c",&c) != EOF){
		printf("%c",c);
	}

	//後処理
	fclose(fp);

	return 0;

}