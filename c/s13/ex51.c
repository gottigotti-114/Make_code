/****************************
ex51.c ������
***************************/

#include <stdio.h>
#include <math.h>

int main (void)
{
	double suti,heiho;

	//���l�̓���
	printf("���l�̓���>>");
	scanf("%lf",&suti);

	//�����������߂�
	heiho = sqrt(suti);	//�ǂݕ�:�X�N�G�A���[�g�c�������ɕϊ�����

	//�\��
	printf("%f�̕�������%f�ł�\n",suti,heiho);

	return 0;
}