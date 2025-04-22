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
	int ans;
	time_t stime;
	time_t etime;

	stime(time (0));

	*s = 9;
	s = 0;
	for(i = 0; i < n; i++){
		
		printf("%d���| %d + %d = ",i +1,p[i]->num1,p[i]->num2);
		scanf("%d\n",&ans);

		if(p[i]->sum == ans)
			s++;

	}

	etime(time (0));



	return etime - stime ;
}