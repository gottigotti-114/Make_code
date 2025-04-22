/*********************************
ex03.c ƒ‰ƒ“ƒŒƒ“ƒOƒX ˆ³k
*********************************/
#include <stdio.h>
#define NUM 100

void compress ( char *src, char *cmp);

int main ( void )
{
	char before[NUM] = "ABBCCCDDDDEEEEE";
	char after[NUM];

	compress( before, after);

	printf("ˆ³k‘O:%s\n",before);
	printf("ˆ³kŒã:%s\n",after);

	return 0;
}

/******************************/

void compress ( char *src, char *cmp)
{
	int si=0;	   //src‚ªbefore
	int ci=0;		//cmp‚ªafter
	int cnt;
	char key;

	while(src[si] != '\0'){
		key = src[si];
		for(cnt=0; src[si] == key; cnt++,si++);

		cmp[ci++] = key;
		cmp[ci++] = '0' + cnt;
	}

	//ˆ—Œã‚Ì•¶š
	cmp[ci] = '\0';

	return;
}
