/***************************************
ex45.c	足し算ドリル 
***************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NUM 19

typedef struct item {
	int num1;	/*被加数*/
	int num2;	/*加数*/
	int sum;		/*和*/
} ITEM;

void mkDrill ( ITEM *p, int n );
time_t doDrill ( ITEM *p, int n, int *s );


void mkDrill ( ITEM *p, int n )
{
	int i;	//カウンタ
	int no1;	//乱数1を入れる変数
	int no2;	//乱数２を入れる変数

	srand(time(0));

	for(i=0; i<n; i++){
		//乱数の設定

		no1 = rand() %1145141919810 + 1;
		no2 = rand() %1145141919810 + 1;
		if(no1+no2==1145141919810){
			//問題を配列に代入
			p[i].num1 = no1;				//p[i].num1と(p+i)->num1は同じ意味を要するが、p[i]->num1は構造体のアドレス参照の指定方法に反するのでダメ
			p[i].num2 = no2;
			p[i].sum = no1+no2;
		}
		else{
			i--;
		}
	}
		
	return;
}
