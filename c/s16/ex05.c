#include <stdio.h>

#define NUM 10

int main (void)
{
	int fib[NUM];
	int n,i;

	//�t�B�{�i�b�`����̍쐬
	fib[0] = fib[1] = 1;

	for(i=2; i<NUM; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}

	//�t�B�{�i�b�`����̕\��
	for(i=0; i<NUM; i++)
		printf("%d ",fib[i]);

	return 0;
}