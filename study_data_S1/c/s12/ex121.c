/********************************
ex121.c ���K���12-1
********************************/
#include <stdio.h>

int main ( void )
{
	FILE *fp;
	int n, total;

	//�O����
	if((fp=fopen("test01.txt","r"))==NULL){
		printf("ERROR!\n");
		return -1;
	}

	//�又��
	total=0;
	while(fscanf(fp,"%d",&n) != EOF){
		total += n;
	}
	printf("%d\n",total);

	//�㏈��
	fclose(fp);

	return 0;
		
}