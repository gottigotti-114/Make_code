/************************
ex31.c �z��̃V�[�P���V�����T�[�`
************************/
#include <stdio.h>

int main (void)
{
	int date[5]={4,2,3,5,1};
	int i,q;
	int r;	//�Ȃ�ׂ�w���g���cWorking space�Ƃ����Ӗ�

	//�z��̌���

	for(q=4; q>=1; q--){
		for(i=1; i<=q; i++){

			if(date[i]<=date[i-1]){

				r=date[i];
				date[i]=date[i-1];
				date[i-1]=r;

			}
		}
	}

	//�o��

	for(i=0; i<5; i++){
		printf("%d",date[i]);
	}

	return 0;
}
