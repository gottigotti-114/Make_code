/****************************
ex07.c �G���g�X�e�l�X�̂ӂ邢
************************/
#include <stdio.h>
#define N 20
#define TRUE 1
#define FALSE 0

int main (void)
{
	char numbers[N];
	int i,j;

	//numbers[]��TRUE�ŏ�����
	for(i=0; i<N; i++){
		numbers[i] = TRUE;
	}

	//�f���łȂ����̂�FALSE�ɒu��������
	numbers[0]=numbers[1]=FALSE;

	for(i=2; i<N; i++){
		while(numbers[i]!=TRUE)	i++;

		for(j=i*2; j<N; j+=i)
			numbers[j]=FALSE;
	}

	//���ʂ̕\��
	for(i=0; i<N; i++)
		if(numbers[i]==TRUE)
			printf("%d ",i);

	return 0;
}