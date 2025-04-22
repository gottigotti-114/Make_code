/*
ex03.c 合否の表示
*/
#include <stdio.h>

int main ( void )
{
	int score;

	//得点の入力
	printf("Input score >>");
	scanf("%d",&score);

	//合否の表示
	if (score >= 70)
	{
		printf("合格");
	}
	else
	{
		printf("不合格");
	}

	//スゴイの表示
	if ( score == 100 )
	{
		printf("スゴイ！");
	}


	return 0;
}