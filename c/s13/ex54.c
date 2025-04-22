/*****************************************
ex54.c BMIの計算
***************************************/

#include <stdio.h>
#include <math.h>

double CalcBMI(double w,double h);

int main (void)
{
	double weight,height;

	//身長と体重の入力
	printf("Input your height(cm)>>");
	scanf("%lf", &height);

	printf("Input your weight(kg)>>");
	scanf("%lf",&weight);

	//BMIの表示
	printf("BMI = %.1f\n",CalcBMI(weight,height));	//height/100でもOK

	return 0;
}

double CalcBMI(double w,double h)
{
	double bmi;
	bmi = w / (pow((h/100),2));

	return bmi;
}