/**************************************
ex08.c �m�F���9.4
		 �t���ɕ\��
**************************************/
#include <stdio.h>
#define NUM 11

int main (void)
{
	int hairetu[NUM] = {-5,-4,-3,-2,-1,0,1,2,3,4,5};
	int i;
	int *p;

	p = &hairetu[NUM-1];											//hairetu + NUM - 1;�̏ꍇ��OK
																		//hairetu�݂̂��g����̂�hairetu[0]�̃A�h���X��������Ƃ��̂�

	for(i = 0; i < NUM; i++){
		printf("%d",*p);
		p--;

	}

	return 0;
}