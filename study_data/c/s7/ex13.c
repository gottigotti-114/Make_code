/**************************************
ex13.c �z��̕���
**************************************/
#include <stdio.h>

int main ( void )
{
	int h[5]={'a','b','c','a','a'};
	int t[5];
	int i;

	//����
	for(i=0; i<5; i++){
		t[i]=h[i];
	}
	//�z��P��\��
	printf("�z��P�F");
	for(i=0; i<5; i++){
		printf("%c",h[i]);
	}
	printf("\n");

	//�z��Q��\��
	printf("�z��Q�F");
	for(i=0; i<5; i++){
		printf("%c",t[i]);
	}

	return 0;
}