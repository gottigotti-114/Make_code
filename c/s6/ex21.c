/*
ex21.c ���������߂�
*/
#include <stdio.h>

int main ( void )
{
	int cnt,date;

	//�����ϐ��̏�����
	cnt = 0;

	//�����𐔂���
	printf("���_����͂��Ă�������>>");
	while( scanf ("%d",&date) != EOF)	//EOF�Ƃ́c�t�@�C���̏I�����������߂̓��ʂȒl
	{
		cnt = cnt + 1;
		printf("���_����͂��Ă�������>>");
	}
	
	//�����̕\��
	printf("%d\n",cnt);

	return 0;
}
//�R�}���h�v�����v�g�Ńf�[�^�̓��͂��I�����Č��ʂ�\���������Ƃ�Ctrl + Z�i�t�@�C���̏I���j ������