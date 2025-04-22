/********************************
ex18.c ���ς����߂�
*******************************/
#include <stdio.h>
#define KAMOKU 5

typedef struct {
	int no;
	char name[20];
	int ten[KAMOKU];
} SCORE;

int main ( void )
{
	SCORE x[] = {
		{201001,"AGO",{75,80,70,92,85}},
		{201002,"INOUE",{62,80,85,70,78}},
		{201003,"AOKI",{85,95,65,80,80}},
		{201004,"ETOU",{73,78,85,75,74}},
		{201005,"OKA",{80,82,70,92,82}},
		{0},
	};
	int i,j;
	int total;

	//���o���̕\��
	printf("%-6s %-20s | %-4s %-4s %-4s %-4s %-4s | %-4s\n","�ԍ�","����","����","���w","����","�Љ�","�p��","����");
	printf("-----------------------------------------------------------------\n");

	//�w�����̕\��
	for(i=0; x[i].no != 0; i++){
		printf("%-6d %-20s | ",x[i].no,x[i].name);

		for(j=0,total=0; j<KAMOKU; j++){
			total+=x[i].ten[j];
			printf("%4d ",x[i].ten[j]);
		}

		printf("| %.2f",(double)total/j);
		printf("\n");
	}

	return 0;
}