/*****************************************
ex54.c BMI�̌v�Z
***************************************/

#include <stdio.h>
#include <math.h>

double CalcBMI(double w,double h);

int main (void)
{
	double weight,height;

	//�g���Ƒ̏d�̓���
	printf("Input your height(cm)>>");
	scanf("%lf", &height);

	printf("Input your weight(kg)>>");
	scanf("%lf",&weight);

	//BMI�̕\��
	printf("BMI = %.1f\n",CalcBMI(weight,height));	//height/100�ł�OK

	return 0;
}

double CalcBMI(double w,double h)
{
	double bmi;
	bmi = w / (pow((h/100),2));

	return bmi;
}