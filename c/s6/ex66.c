/****************************************
ex66.c ���͂��ꂽ���̐����l�̊K������߂�
****************************************/

#include <stdio.h>

int main ( void )
{
	int n,kaijo;

	//���l�̓���
	printf("Input number>>");
	scanf("%d",&n);
	

	//�K��̌v�Z
	
	for(kaijo=1;n!=0;n--)	kaijo = kaijo * n;

	//�K��̕\��
	printf("%d\n",kaijo);

	return 0;
}