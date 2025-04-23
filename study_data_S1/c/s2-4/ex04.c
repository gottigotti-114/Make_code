/*****************************
ex04.c クイックソート
******************************/
#include <stdio.h>
#define NUM 10

void quickSort ( int *x, int left, int right );

int main ( void )
{
	int date[NUM] = { 5, 14, 10, 15, 13, 4, 2, 7, 19, 12 };
	int i;

	quickSort ( date, 0, NUM - 1);

	for( i=0; i<NUM; i++ )
		printf("%d ",date[i]);

	return 0;
}

/****************************/

void quickSort ( int *x, int left, int right )
{
	int pivot, w_left, w_right;
	int w;

	//ピボットを求める
	w_left = left;
	w_right = right;
	pivot = x [ ( left + right ) / 2 ];

	//ピボットの場所を確定する
	while( 1 ){
		//左側にあるピボットより大きい要素を見つける...①
			while ( x[w_left] < pivot )	w_left++;
		//右側にあるピボットより小さい要素を見つける...②
			while ( x[w_right] > pivot )	w_right--;
	
		if( w_left >= w_right )	break;

		//①②を交換
		
		w = x[w_left];
		x[w_left] = x[w_right];
		x[w_right] = w;



		//次へ
		w_left++;
		w_right--;

	}

	//再起呼び出し
	if( left < w_left-1)	//左がまだ分けれる場合
		quickSort(x,left,w_left-1);
	if(w_right + 1 < right )	//右がまだ分けれる場合
		quickSort(x,w_right+1,right);

	return;
}