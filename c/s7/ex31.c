/************************
ex31.c 配列のシーケンシャルサーチ
************************/
#include <stdio.h>

int main (void)
{
	int date[7]={1,4,5,8,10,15,23};
	int low,middle,high;
	int num;
	
	//探索値の入力
	printf("数値を入力してください>>");
	scanf("%d",&num);

	//探索
	low=0;
	high=6;

	while(low<=high){
		middle=low+high;

		if(date[middle]==num) break;

		if(date[middle]>num)	high=middle-1;
		else						low=middle+1;

	}

	//結果の表示
	if(low<=high)	printf("OK\n");
	else				printf("NG\n");

	return 0;
}