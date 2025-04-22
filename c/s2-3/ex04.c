/*********************************
ex04.c ランレングス 解凍
*********************************/
#include <stdio.h>
#define NUM 100

void compress ( char *src, char *cmp);
void decode ( char *src, char *dec );

int main ( void )
{
	char before[NUM] = "ABBCCCDDDDEEEEE";
	char after[NUM];
	char tmp[NUM];

	//圧縮
	compress( before, tmp);

	printf("圧縮前:%s\n",before);
	printf("圧縮後:%s\n",tmp);


	//解凍
	decode ( tmp, after);

	printf("\n***解凍\n");
	printf("前：%s\n",tmp);
	printf("後：%s\n",after);
	
	return 0;
}

/******************************/

void compress ( char *src, char *cmp)
{
	int si=0;	   //srcがbefore
	int ci=0;		//cmpがafter
	int cnt;
	char key;

	while(src[si] != '\0'){
		key = src[si];
		for(cnt=0; src[si] == key; cnt++,si++);

		cmp[ci++] = key;
		cmp[ci++] = '0' + cnt;
	}

	//処理後の文字
	cmp[ci] = '\0';

	return;
}

/*******************************/

void decode ( char *src, char *dec )
{
	int si = 0;
	int di = 0;
	char key;
	int cnt;
	int n;

	while ( src[si] != '\0' ){
		key = src[si++];
		cnt = src[si++] - '0';

		
		for(n=0; n < cnt; n++ ){
			dec[di++] = key;
		}
	}

	dec[di] = '\0';

	return; 
}