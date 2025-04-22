/*
ex21.c 件数を求める
*/
#include <stdio.h>

int main ( void )
{
	int cnt,date;

	//件数変数の初期化
	cnt = 0;

	//件数を数える
	printf("得点を入力してください>>");
	while( scanf ("%d",&date) != EOF)	//EOFとは…ファイルの終わりを示すための特別な値
	{
		cnt = cnt + 1;
		printf("得点を入力してください>>");
	}
	
	//件数の表示
	printf("%d\n",cnt);

	return 0;
}
//コマンドプロンプトでデータの入力を終了して結果を表示したいときCtrl + Z（ファイルの終わり） をする