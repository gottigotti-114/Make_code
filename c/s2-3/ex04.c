/*********************************
ex04.c ���������O�X ��
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

	//���k
	compress( before, tmp);

	printf("���k�O:%s\n",before);
	printf("���k��:%s\n",tmp);


	//��
	decode ( tmp, after);

	printf("\n***��\n");
	printf("�O�F%s\n",tmp);
	printf("��F%s\n",after);
	
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