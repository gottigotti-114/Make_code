/*********************************
ex03.c OX ³k
*********************************/
#include <stdio.h>
#define NUM 100

void compress ( char *src, char *cmp);

int main ( void )
{
	char before[NUM] = "ABBCCCDDDDEEEEE";
	char after[NUM];

	compress( before, after);

	printf("³kO:%s\n",before);
	printf("³kγ:%s\n",after);

	return 0;
}

/******************************/

void compress ( char *src, char *cmp)
{
	int si=0;	   //srcͺbefore
	int ci=0;		//cmpͺafter
	int cnt;
	char key;

	while(src[si] != '\0'){
		key = src[si];
		for(cnt=0; src[si] == key; cnt++,si++);

		cmp[ci++] = key;
		cmp[ci++] = '0' + cnt;
	}

	//γΜΆ
	cmp[ci] = '\0';

	return;
}
