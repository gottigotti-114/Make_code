/****************************
ex52.c �O�p�֐��̗��p
***************************/

#include <stdio.h>
#include <math.h>
#define PAI 3.141592

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
	printf("(x,y)=(%.2f,%.2f)\n",r*cos(rad),r*sin(rad));

	return 0;
}