/*
ex46.c 練習問題
*/
#include <stdio.h>

int main ( void )
{
	int hh,mm,ss;

	printf("時間を入力してください(記述例：時間 分 秒>>");

	scanf("%d%d%d",&hh,&mm,&ss);

	ss = hh * 3600 + mm * 60 + ss;

	printf("%d秒となりました",ss);

	return 0;
}