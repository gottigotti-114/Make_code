/*
ex23.c 平均を求める
*/
#include <stdio.h>

int main ( void )
{
	int gokei,ken,date;
	double heikin;
	gokei = 0;
	ken = 0;

	printf("データを入力してください>>");
	while (scanf("%d",&date) != EOF)
	{
		gokei = gokei + date;
		ken = ken + 1;
		printf("データを入力してください");
	}

	heikin = (double) gokei / ken;

	printf("平均は%.2fです",heikin);//%.2fは小数点以下桁目までを表示する

	return 0;
}
//コマンドプロンプトでデータの入力を終了して結果を表示したいときCtrl + Z（ファイルの終わり） をする