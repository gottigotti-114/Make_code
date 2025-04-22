/*
ex40.c 数字を表示する
*/
#include <stdio.h>

int main (void)
{
	int n;
	int cnt;

	//数値の入力
	printf("Input number>>");
	scanf("%d",&n);

	//数値を表示する
	cnt = 1;

	do{
		printf("%d",cnt);
		cnt = cnt + 1;
	}while(cnt <= n);

	return 0;
}