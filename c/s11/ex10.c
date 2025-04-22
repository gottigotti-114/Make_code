/********************************
ex09.c 一番は誰？
******************************/
#include <stdio.h>
#define NUM 5

struct KOZIN_DATE{
	char name[20];
	int age;
	double height;
};

int main ( void )
{
	struct KOZIN_DATE date[NUM] = {
		{"TAGUTI",18, 160.5},
		{"INOUE", 18, 170.2},
		{"AOKI",  19, 172.0},
		{"ETOU",  20, 168.5},
		{"OKA",   19, 175.8}
	};
	int i;		//imax 最大値を持つデータの添え字
	
	//表示
	for(i = 0; i < NUM; i++){
		if(date[i].age / 10 == 1)
			printf("%-8s %d歳\n",date[i].name,date[i].age);			//%-8sにすると表記が右揃えになる
	}

	return 0;

};