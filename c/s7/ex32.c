/************************
ex31.c 配列のシーケンシャルサーチ
************************/
#include <stdio.h>

int main (void)
{
	int date[5]={4,2,3,5,1};
	int i,q;
	int r;	//なるべくwを使う…Working spaceという意味

	//配列の交換

	for(q=4; q>=1; q--){
		for(i=1; i<=q; i++){

			if(date[i]<=date[i-1]){

				r=date[i];
				date[i]=date[i-1];
				date[i-1]=r;

			}
		}
	}

	//出力

	for(i=0; i<5; i++){
		printf("%d",date[i]);
	}

	return 0;
}
