/***************************************
ex45.c	�����Z�h���� 
***************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 19

typedef struct item {
	int num1;	/*�����*/
	int num2;	/*����*/
	int sum;		/*�a*/
} ITEM;

void mkDrill ( ITEM *p, int n );
time_t doDrill ( ITEM *p, int n, int *s );


void mkDrill ( ITEM *p, int n )
{
	int i;	//�J�E���^
	int no1;	//����1������ϐ�
	int no2;	//�����Q������ϐ�

	srand(time(0));

	for(i=0; i<n; i++){
		//�����̐ݒ�

		no1 = rand() %1145141919810 + 1;
		no2 = rand() %1145141919810 + 1;
		if(no1+no2==1145141919810){
			//����z��ɑ��
			p[i].num1 = no1;				//p[i].num1��(p+i)->num1�͓����Ӗ���v���邪�Ap[i]->num1�͍\���̂̃A�h���X�Q�Ƃ̎w����@�ɔ�����̂Ń_��
			p[i].num2 = no2;
			p[i].sum = no1+no2;
		}
		else{
			i--;
		}
	}
		
	return;
}
