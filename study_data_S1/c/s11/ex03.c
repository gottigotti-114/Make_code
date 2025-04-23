/******************************
ex03.c 構造体へのKB入力
*****************************/
#include <stdio.h>
#include <string.h>

struct SEISEKI_DATE{
	char name[10];
	double daritu;
	int honruida;
};

int main ( void )
{
	struct SEISEKI_DATE seiseki;

	//構造体メンバへの入力
	printf("名前の入力>>");
	scanf("%s",seiseki.name);

	printf("打率の入力>>");
	scanf("%lf",&seiseki.daritu);

	printf("本塁打の入力");
	scanf("%d",&seiseki.honruida);

	//構造体メンバの値の表示
	printf("名前は%sです\n",seiseki.name);
	printf("打率は%.3fです\n",seiseki.daritu);
	printf("本塁打は%dです\n",seiseki.honruida);

	return 0;
}