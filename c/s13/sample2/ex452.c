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




/***************************************************/
time_t doDrill ( ITEM *p, int n, int *s )
{
	time_t start,end;
	int cnt = 0;
	int ans;
	int i;

	//�������Ԃ̎擾
	start = time(0);

	//�h�����̎��{
	for(i=0; i<n; i++){
		printf("[%2d] %2d + %2d =",
					i+1,(p+i)->num1,(p+i)->num2);
		scanf("%d",&ans);

		if(ans==(p+i)->sum)	cnt++;

	}

	//���𐔂𔽉f����
	*s = cnt;

	//�I�����Ԃ̎擾
	end = time(0);

	return end - start;

}