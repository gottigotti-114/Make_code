/*
ex03.c ���ۂ̕\��
*/
#include <stdio.h>

int main ( void )
{
	int score;

	//���_�̓���
	printf("Input score >>");
	scanf("%d",&score);

	//���ۂ̕\��
	if (score >= 70)
	{
		printf("���i");
	}
	else
	{
		printf("�s���i");
	}

	//�X�S�C�̕\��
	if ( score == 100 )
	{
		printf("�X�S�C�I");
	}


	return 0;
}