/****************************************
ex05.c 配列の操作
****************************************/

#include <stdio.h>
#define NUM 5

int main (void)
{
	int hairetu[NUM] = { 50,10,30,40,20};
	int i;
	int *p;

	p = hairetu;		//配列名は配列（hairetu[0]）の開始のアドレスとみなされる
							//ポインタ←基準となる地点のアドレス

	for(i = 0; i < NUM; i++){
		printf("%d",*(p+i));		//*p + iだと元の値（hairetu[0]）を+1してしまうことになる
	}
	
	return 0;
}