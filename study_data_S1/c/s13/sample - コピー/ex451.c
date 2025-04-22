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
	int i;	//カウンタ
	int no1;	//乱数1を入れる変数
	int no2;	//乱数２を入れる変数

	for(i=0; i<n; i++)
		//乱数の設定
		srand(time(0));
		no1 = rand() %101 + 1;
		no2 = (rand() * rand()) % 101 + 1;

		//問題を配列に代入
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

