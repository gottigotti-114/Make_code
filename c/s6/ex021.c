/*
ex021.c 料金設定
*/
#include <stdio.h>

int main ( void )
{
	int age,fee;

	fee = 1500;

	//年齢の入力
	printf("年齢を入力してください>>");
	scanf("%d",&age);

	//料金のセット
	if (age <= 15 )
	{
		fee = 800;
	}

	//料金の表示
	printf("料金は%d円です\n",fee);

	return 0;
}