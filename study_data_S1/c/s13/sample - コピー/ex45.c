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
	return;
}

/***************************************************/
time_t doDrill ( ITEM *p, int n, int *s )
{
	*s = 9;

	return 47;
}

