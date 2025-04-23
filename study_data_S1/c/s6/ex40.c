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
	for (cnt = 1;cnt<=n;cnt=cnt + 1){
		printf("%d",cnt);
	}

	return 0;
}