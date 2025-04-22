/***************************************
ex45.c	�����Z�h���� 
***************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10

typedef struct item {
	int num1;	/*�����*/
	int num2;	/*����*/
	int sum;		/*�a*/
} ITEM;

void mkDrill ( ITEM *p, int n );
time_t doDrill ( ITEM *p, int n, int *s );

int main ( void )
{
	ITEM	mondai[NUM];	/*���e�[�u��*/
	int	seikai;			/*������*/
	time_t time;			/*���p����(�b�j*/

	//���쐬
	mkDrill ( mondai, NUM );

	//�h����
	time = doDrill ( mondai , NUM , &seikai );

	//���ʕ\��
	printf("\n***%d�␳���ł��B���v����%d�b***\n",
						 seikai , time );
	return 0;
}

/************************************************/
void mkDrill ( ITEM *p, int n )
{
	int i;	//�J�E���^
	int no1;	//����1������ϐ�
	int no2;	//�����Q������ϐ�

	for(i=0; i<n; i++)
		//�����̐ݒ�
		srand(time(0));
		no1 = rand() %101 + 1;
		no2 = (rand() * rand()) % 101 + 1;

		//����z��ɑ��
		p[i]->num1 = no1;
		p[i]->num2 = no2;
		p[i]->sum = no1+no2;
	}
		
	return;
}

/***************************************************/
time_t doDrill ( ITEM *p, int n, int *s )
{
	*s = 9;

	return 47;
}

