/**************************************
ex13.c 配列の複写
**************************************/
#include <stdio.h>

int main ( void )
{
	int h[5]={'a','b','c','a','a'};
	int t[5];
	int i;

	//複写
	for(i=0; i<5; i++){
		t[i]=h[i];
	}
	//配列１を表示
	printf("配列１：");
	for(i=0; i<5; i++){
		printf("%c",h[i]);
	}
	printf("\n");

	//配列２を表示
	printf("配列２：");
	for(i=0; i<5; i++){
		printf("%c",t[i]);
	}

	return 0;
}