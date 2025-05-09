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




/***************************************************/
time_t doDrill ( ITEM *p, int n, int *s )
{
	time_t start,end;
	int cnt = 0;
	int ans;
	int i;

	//愛し時間の取得
	start = time(0);

	//ドリルの実施
	for(i=0; i<n; i++){
		printf("[%2d] %2d + %2d =",
					i+1,(p+i)->num1,(p+i)->num2);
		scanf("%d",&ans);

		if(ans==(p+i)->sum)	cnt++;

	}

	//正解数を反映する
	*s = cnt;

	//終了時間の取得
	end = time(0);

	return end - start;

}