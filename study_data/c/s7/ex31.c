/************************
ex31.c �z��̃V�[�P���V�����T�[�`
************************/
#include <stdio.h>

int main (void)
{
	int date[7]={1,4,5,8,10,15,23};
	int low,middle,high;
	int num;
	
	//�T���l�̓���
	printf("���l����͂��Ă�������>>");
	scanf("%d",&num);

	//�T��
	low=0;
	high=6;

	while(low<=high){
		middle=low+high;

		if(date[middle]==num) break;

		if(date[middle]>num)	high=middle-1;
		else						low=middle+1;

	}

	//���ʂ̕\��
	if(low<=high)	printf("OK\n");
	else				printf("NG\n");

	return 0;
}