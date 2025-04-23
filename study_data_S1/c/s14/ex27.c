/******************************
ex27.c バブルソート(交換法)　配列バージョン
*******************************/
#include <stdio.h>
#define NUM 5

void BubbleSort( int *p, int n);

int main (void)
{
	int date[NUM] = {50,30,80,20,60};
	int i;

	BubbleSort(date,NUM);

	for(i=0; i < NUM; i++)
		printf("%d ",date[i]);

	return 0;
}

/*******************************
void BubbleSort( int *p, int n);
*******************************/
void BubbleSort( int *p, int n)
{
	int i,j;
	int w;

	for(i=n-1; i>0; i--){
		for(j=0; j<i; j++){
			if(*(p+j) > *(p+j+1)){
				w = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = w;
			}
		}
	}

	return;
}