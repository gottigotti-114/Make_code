/*
ex06.c 書式指定子
*/

#include <stdio.h>

int main ( void )
{
	char	moji;
	int	seisu;
	double zissu;

	moji = 'A';
	printf("moji :%c %d %o %x\n",moji,moji,moji,moji);

	seisu = 10000;
	printf("seisu : %d %o %x\n",seisu,seisu,seisu);

	zissu = 12345.678;
	printf("zissu : %lf\n",zissu);

	return 0;
}
/*
コマンドプロンプトでフォルダー（ディレクトリ）"E\c\s2"からs3に移動する際はコマンド"cd(半角スペース).."を打てば現在地"E\c"になる
*/
