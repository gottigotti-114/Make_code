/************************
ex26.c ���ʕt��
************************/
#include <stdio.h>

int main (void)
{
	int rank[10];
	int score[]={65,87,90,82,75,80,78,95,68,72};
	int i,j;

	//�����N�t��
	for(i=0; i<10; i++){
		rank[i]=0;	//rank[0]�`rank[10]�܂ŃS�~�������Ă���̂ň��L���C�ɂ��Ȃ��Ƃ����Ȃ�

		for(j=0; j<10; j++){
			if(score[i]<=score[j]){
				rank[i]++;
			}
		}
	}

	for(i=0; i<10; i++){
			printf("%d(%d��)\n",score[i],rank[i]);
	}
	return 0;
}