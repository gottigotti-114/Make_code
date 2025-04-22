/********************************
ex121.c —ûK–â‘è12-1
********************************/
#include <stdio.h>

int main ( void )
{
	FILE *fp;
	int n, total;

	//‘Oˆ—
	if((fp=fopen("test01.txt","r"))==NULL){
		printf("ERROR!\n");
		return -1;
	}

	//åˆ—
	total=0;
	while(fscanf(fp,"%d",&n) != EOF){
		total += n;
	}
	printf("%d\n",total);

	//Œãˆ—
	fclose(fp);

	return 0;
		
}