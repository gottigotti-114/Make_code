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
		{"TAGUTI",18,160.5},
		{"INOUE",18,170.2},
		{"AOKI",19,172.0},
		{"ETOU",20,168.5},
		{"OKA",19,175.8}
	};
	int i,imax;		//imax 最大値を持つデータの添え字
	
	//集計
	imax = 0;
	for(i=1; i < NUM; i++){
		if(date[i].height > date[imax].height)
			imax=i;
	}

	//結果の表示
	printf("1番背が高いのは%s（%.1fcm）\n",date[imax].name,date[imax].height);

	return 0;

};