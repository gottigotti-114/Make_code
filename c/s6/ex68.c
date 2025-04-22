/****************************************
ex68.c 図形描画
****************************************/

#include <stdio.h>

int main ( void )
{
	int n;
	int row,col;

	//数値の入力
	printf("数値を入力してください>>");
	scanf("%d",&n);

	//直線
	printf("\n直線\n");

	for(col=1;col<=n;col++)
		printf("―");
	printf("\n");

	//正方形
	printf("\n正方形\n");

	for(row=1;row<=n;row++){
		for(col=1;col<=n;col++){
			printf("■");
		}
		printf("\n");
	}

	//三角形
	printf("\n三角形\n");

	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			printf("▲");
		}
		printf("\n");
	}

	return 0;
}