/*
ex31.c
*/
#include <stdio.h>

int main ( void )
{
	int gender,weekday,fee;

	//性別の入力
	printf("性別を入力してください（男性：１,女性：２）>>");
	scanf("%d",&gender);

	//曜日の入力
	printf("曜日を入力してください（月1,火2,水3,木4,金5,土6,日7 >>");
	scanf("%d",&weekday);

	//料金の設定
	if ( gender == 2 && weekday == 3)
		fee = 1000;
	else
		fee = 1500;

	//料金の表示
	printf("料金は%dです\n",fee);

	return 0;
}