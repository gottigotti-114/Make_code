/****************************
ex53.c �V��֐��E���֐�
***************************/

#include <stdio.h>
#include <math.h>

int main (void)
{
	double deg, rad;
	double r;

	//����

	printf("���a�̓���>>");
	scanf("%lf",&r);
	printf("�p�x�̓���>>");
	scanf("%lf",&deg);

	//�x�����烉�W�A�������߂�
	rad = PAI * deg / 180.0;

	//���W�̕\��
	printf("(x,y)=(%.2f,%.2f)\n",r*cos(rad),r*sin(rad));		//�����̓��W�A������Ȃ��Ƃ����Ȃ�

	return 0;
}