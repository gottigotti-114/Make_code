/**************************************
ex71.c ���K���
**************************************/
#include <stdio.h>

int main ( void )
{
	int hairetu[5];
	int i;

	//����
	for(i=0; i<5; i++){
	printf("�v�f%d�̓���>>",i);
	scanf("%d",&hairetu[i]);
	}

	//�o��
	printf("\n");
	for(i=4; i>=0; i--){
	printf("�v�f%d��%d�ł�\n",i,hairetu[i]);
	}

	return 0;
}