/*
ex02.c
*/

#include <stdio.h>

int main ( void )
{
	int suti1,suti2;

	//input;
	printf("整数を2つ入力>>");//入力用メッセージ
	scanf("%d&%d",&suti1,&suti2);//コマンドプロンプトで入力する値&suti1から&suti2に移動する際に使う区切り文字を("%d%d")→("%d,%d")にする。この場合”，”カンマが区切り文字となる。例：コマンドプロンプトで整数を２つ入力>>1,4 入力された値は１と４です

	//Output
	printf("入力された値は %d と %d です\n",suti1,suti2);

	return 0;
}