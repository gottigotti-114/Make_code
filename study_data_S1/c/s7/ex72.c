/**************************************
ex72.c ���K���7-2
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
	printf("\n��Ԗڂ̒l��");
	for(i=0; i<5; i++){
		if(i%2==1){
			printf(" %d ",hairetu[i]);
		}
	}

	printf("�ł�");
	return 0;
}