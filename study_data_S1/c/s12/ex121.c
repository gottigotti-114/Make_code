/********************************
ex121.c 練習問題12-1
********************************/
#include <stdio.h>

int main ( void )
{
	FILE *fp;
	int n, total;

	//前処理
	if((fp=fopen("test01.txt","r"))==NULL){
		printf("ERROR!\n");
		return -1;
	}

	//主処理
	total=0;
	while(fscanf(fp,"%d",&n) != EOF){
		total += n;
	}
	printf("%d\n",total);

	//後処理
	fclose(fp);

	return 0;
		
}