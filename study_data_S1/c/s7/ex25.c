/************************
ex25.c 最大値と最小値
************************/
#include <stdio.h>

int main (void)
{
	int saidai,saisho,gokei,cnt,i;
	int score[]={65,87,90,82,75,80,78,95,68,72};
	float ave;

	for(saisho=saidai=gokei=score[0],i=1; i<10; i++){	//配列にすでに値が入っているので初期値配列０から始めることができる
		if(saidai<score[i])
			saidai=score[i];
		if(saisho>score[i])
			saisho=score[i];
		gokei+=score[i];
		
	}

	ave=(double)gokei/i;
	printf("最大値：%d\n最小値：%d\n合計：%d\n平均：%.2f\n",saidai,saisho,gokei,ave);
	
	return 0;
}