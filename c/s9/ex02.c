/****************************************
ex01.c �|�C���^�̗��p
****************************************/

#include <stdio.h>

int main (void)
{
	int suti;
	int *p;			//�|�C���^�̐錾

	p = &suti;		//�ϐ�p�ɕϐ�suti�̐擪�A�h���X���i�[�i�A�h���X�̃Z�b�g�j

	*p = 10;			//�|�C���^�ϐ�p�̃A�h���X���10����͂���i�|�C���^�̎Q�Ɓj

	printf("%d\n",*p);
	printf("%d\n",suti);

	return 0;
}