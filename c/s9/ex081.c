/**************************************
ex08.c 確認問題9.4
		 逆順に表示
**************************************/
#include <stdio.h>
#define NUM 11

int main (void)
{
	int hairetu[NUM] = {-5,-4,-3,-2,-1,0,1,2,3,4,5};
	int i;
	int *p;

	p = &hairetu[NUM-1];											//hairetu + NUM - 1;の場合もOK
																		//hairetuのみが使えるのはhairetu[0]のアドレスを代入するときのみ

	for(i = 0; i < NUM; i++){
		printf("%d",*p);
		p--;

	}

	return 0;
}