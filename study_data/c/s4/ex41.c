/*
ex41.c ���K���4-1�@���ȏ��o58
*/
#include <stdio.h>

int main( void )
{
	double kodo;
	double kion;

	//���x�̓���
	printf("���x����͂��Ă�������>>");
	scanf("%lf",&kodo);	/*lf�i�G���G�t�j�͊֐�double���g���ۂɏ����Ȃ��Ƃ����Ȃ�*/

	//�C�����̌v�Z
	kion = kodo / 100 * 0.6;

	//�C�����̕\��
	printf("�C���́A%.1f�x������\n",kion);	/*".1"�͏����ȉ�1���ȉ��������B".3"���Ə����_�ȉ�3���ȉ�������*/

	return 0;
}