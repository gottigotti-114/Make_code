/*********************************
ex09.c 配列の平均
********************************/

#include <stdio.h>
#define NUM 5

int main (void)
{
	double sintyo[NUM] = {160.0, 170.0, 146.7, 180.5, 180.0};
	int i;
	double *p;
	double t, ave;

	p = sintyo;

	//合計を求める
	t = 0;
	for(i = 0; i < NUM; i++){
		t += *p;
		p++;
	}

	//平均を求める
	ave = t / NUM;

	//表示
	printf("%.1f\n",ave);

	return 0;
}