/*
ex36.c �f��
*/
#include <stdio.h>

int main ( void )
{
	int suti;

	//�����l�̓���
	printf("�����̓���>>");
	scanf("%d",&suti);

	//�����̐U�蕪��
	switch ( suti ){
		case 2:
			printf("�f���ł�\n");
			break;
		case 3:
			printf("�f���ł�\n");
			break;
		case 5:
			printf("�f���ł�\n");
			break;
		case 7:
			printf("�f���ł�\n");
			break;
		default:
			printf("�f���ł͂���܂���\n");
			break;

		//break�̓����F�u���b�N�����ꂽ�����̉򂩂甲����i�j

	}

	return 0;
}
