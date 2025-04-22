/****************************
ex07.c エラトステネスのふるい
************************/
#include <stdio.h>
#define N 20
#define TRUE 1
#define FALSE 0

int main (void)
{
	char numbers[N];
	int i,j;

	//numbers[]のTRUEで初期化
	for(i=0; i<N; i++){
		numbers[i] = TRUE;
	}

	//素数でないものをFALSEに置き換える
	numbers[0]=numbers[1]=FALSE;

	for(i=2; i<N; i++){
		while(numbers[i]!=TRUE)	i++;

		for(j=i*2; j<N; j+=i)
			numbers[j]=FALSE;
	}

	//結果の表示
	for(i=0; i<N; i++)
		if(numbers[i]==TRUE)
			printf("%d ",i);

	return 0;
}