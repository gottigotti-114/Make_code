/********************************
ex09.c ��Ԃ͒N�H
******************************/
#include <stdio.h>
#define NUM 5

struct KOZIN_DATE{
	char name[20];
	int age;
	double height;
};

int main ( void )
{
	struct KOZIN_DATE date[NUM] = {
		{"TAGUTI",18,160.5},
		{"INOUE",18,170.2},
		{"AOKI",19,172.0},
		{"ETOU",20,168.5},
		{"OKA",19,175.8}
	};
	int i,imax;		//imax �ő�l�����f�[�^�̓Y����
	
	//�W�v
	imax = 0;
	for(i=1; i < NUM; i++){
		if(date[i].height > date[imax].height)
			imax=i;
	}

	//���ʂ̕\��
	printf("1�Ԕw�������̂�%s�i%.1fcm�j\n",date[imax].name,date[imax].height);

	return 0;

};