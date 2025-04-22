/*********************************
ex03.c ���������O�X ���k
*********************************/
#include <stdio.h>
#define NUM 100

void compress ( char *src, char *cmp);

int main ( void )
{
	char before[NUM] = "ABBCCCDDDDEEEEE";
	char after[NUM];

	compress( before, after);

	printf("���k�O:%s\n",before);
	printf("���k��:%s\n",after);

	return 0;
}

/******************************/

void compress ( char *src, char *cmp)
{
	int si=0;	   //src��before
	int ci=0;		//cmp��after
	int cnt;
	char key;

	while(src[si] != '\0'){
		key = src[si];
		for(cnt=0; src[si] == key; cnt++,si++);

		cmp[ci++] = key;
		cmp[ci++] = '0' + cnt;
	}

	//������̕���
	cmp[ci] = '\0';

	return;
}
