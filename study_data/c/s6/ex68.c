/****************************************
ex68.c �}�`�`��
****************************************/

#include <stdio.h>

int main ( void )
{
	int n;
	int row,col;

	//���l�̓���
	printf("���l����͂��Ă�������>>");
	scanf("%d",&n);

	//����
	printf("\n����\n");

	for(col=1;col<=n;col++)
		printf("�\");
	printf("\n");

	//�����`
	printf("\n�����`\n");

	for(row=1;row<=n;row++){
		for(col=1;col<=n;col++){
			printf("��");
		}
		printf("\n");
	}

	//�O�p�`
	printf("\n�O�p�`\n");

	for(row=1;row<=n;row++){
		for(col=1;col<=row;col++){
			printf("��");
		}
		printf("\n");
	}

	return 0;
}