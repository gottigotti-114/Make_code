/******************************
ex02.c 文字列の表示
**************************/
#include <stdio.h>

int main (void)
{
	char hairetu[10]="TOKYO";
	int i;

	//%cで表示
	for(i=0; hairetu[i] != '\0'; i++)
		printf("%c",hairetu[i]);
	printf("\n");

	//%sで表示
	printf("%s\n",hairetu);	//%sは便利なことに配列名だけ書けば自動的に\0までの文字を表示してくれる

	return 0;
}