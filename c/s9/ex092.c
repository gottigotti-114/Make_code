/*********************************
ex09.c �z��̕���
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

	//���v�����߂�
	t = 0;
	for(i = 0; i < NUM; i++){
		t += *p;
		p++;
	}

	//���ς����߂�
	ave = t / NUM;

	//�\��
	printf("%.1f\n",ave);

	return 0;
}