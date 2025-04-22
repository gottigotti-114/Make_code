/***************************************
ex45.c	足し算ドリル 
***************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 10

typedef struct item {
	int num1;	/*被加数*/
	int num2;	/*加数*/
	int sum;		/*和*/
} ITEM;

void mkDrill ( ITEM *p, int n );
time_t doDrill ( ITEM *p, int n, int *s );

int main ( void )
{
	ITEM	mondai[NUM];	/*問題テーブル*/
	int	seikai;			/*正当数*/
	time_t time;			/*所用時間(秒）*/

	//問題作成
	mkDrill ( mondai, NUM );

	//ドリル
	time = doDrill ( mondai , NUM , &seikai );

	//結果表示
	printf("\n***%d問正解です。所要時間%d秒***\n",
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
		
		printf("%d問目| %d + %d = ",i +1,p[i]->num1,p[i]->num2);
		scanf("%d\n",&ans);

		if(p[i]->sum == ans)
			s++;

	}

	etime(time (0));



	return etime - stime ;
}