/********************************
ex05.c 構造体の配列
******************************/
#include <stdio.h>
#define NUM 3

struct SEISEKI_DATE{
	char name[10];
	double daritu;
	int honruida;
};

int main ( void )
{
	struct SEISEKI_DATE seiseki[NUM] = {
		{"OTANI",0.333,16},
		{"HASE",0.286,34},
		{"SATO",0.177,25}
	};
	int i;

	//構造体配列の表示
	for(i=0; i<NUM; i++){
		printf("名前は%sです\n",seiseki[i].name);
		printf("打率は%.3fです\n",seiseki[i].daritu);
		printf("本塁打は%dです\n\n",seiseki[i].honruida);
	}

	return 0;

};