/**************************************
ex02.c �z��̑���
**************************************/
#include <stdio.h>

int main ( void )
{
	//�z��̐錾
		int hairetu[5];
		int i;

	//�l�̊i�[
	hairetu[0]=50;
	hairetu[1]=10;
	hairetu[2]=30;
	hairetu[3]=40;
	hairetu[4]=20;

	//�z��̒l�̕\��
	for(i=0;i<5;i++){
		printf("%d",hairetu[i]);
	}

	return 0;
}