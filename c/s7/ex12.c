/**************************************
ex12.c �v�f�̍폜
**************************************/
#include <stdio.h>

int main ( void )
{
	int h[5]={'A','B','C','D','E'};
	int i;

	//�����O
	printf("�����O:");
	for(i=0; i<5; i++){
		printf("%c",h[i]);
	}
	printf("\n");

	//�폜���� 
	for(i=3; i<5; i++){
		h[i]=h[i+1];
	}

	h[4]='\0';

	//������
	printf("������:");
	for(i=0; i<5; i++){
		printf("%c",h[i]);
	}
	printf("\n");

	return 0;
}