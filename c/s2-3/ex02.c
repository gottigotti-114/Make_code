/******************************
ex02.c ������̒u��
******************************/
#include <stdio.h>
#define LEN 100

void replace( char *before, char *after, char *target, char *rep);

int main ( void )
{
	char before[LEN] = "That is a pen";
	char after[LEN];
	char target[] = "is";
	char rep[] = "was";

	replace( before,after,target,rep);

	printf("�u���O:%s\n",before);
	printf("�u����:%s\n",after);

	return 0;
}

/****************************/

void replace( char *before, char *after, char *target, char *rep)
{
	int bi,ai,ti,ri;
	int blen,tlen,rlen;
	char *pt;

	//before�̕�����,target�̕�����,rep�̕�����̕����������߂�
	for(blen=0; before[blen] != '\0'; blen++);
	for(tlen=0; target[tlen] != '\0'; tlen++);
	for(rlen=0; rep[rlen] != '\0'; rlen++);	//blen��tlen��rlen�̕�����(�����̒���)��ݒ�

	//�u��
	bi = ai = 0;
	while(bi < blen-tlen){
		//����   before[]�̒�����target[]����������
		for(ti = 0; ti<tlen; ti++)
			if(before[bi+ti] != target[ti]) break;

		if(ti >= tlen){
			//�u��
			for(ri = 0; ri < rlen; ri++){
				after[ai+ri] = rep[ri];
			}
			ai += rlen;		//ai += ri;
			bi += tlen;		//bi += ti;�ł�ok	��L��ri��
		}else{
			//���̂܂ܕ���
			after[ai++] = before[bi++];
		}
		
	}

	//�c��̕�����̏���
	while(bi < blen)
		after[ai++] = before[bi++];
	after[ai] = '\0';

	return;
}
