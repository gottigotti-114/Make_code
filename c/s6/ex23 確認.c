/*
ex23.c ���ς����߂�
*/
#include <stdio.h>

int main ( void )
{
	int gokei,ken,date;
	double heikin;
	gokei = 0;
	ken = 0;

	printf("�f�[�^����͂��Ă�������>>");
	while (scanf("%d",&date) != EOF)
	{
		gokei = gokei + date;
		ken = ken + 1;
		printf("�f�[�^����͂��Ă�������");
	}

	heikin = (double) gokei / ken;

	printf("���ς�%.2f�ł�",heikin);//%.2f�͏����_�ȉ����ڂ܂ł�\������

	return 0;
}
//�R�}���h�v�����v�g�Ńf�[�^�̓��͂��I�����Č��ʂ�\���������Ƃ�Ctrl + Z�i�t�@�C���̏I���j ������