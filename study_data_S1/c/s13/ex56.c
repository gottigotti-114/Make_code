/****************************************
ex56.c �O�p�`�̖ʐ� �w�����̌���
***************************************/

#include <stdio.h>
#include <math.h>

int isTriangle(int a,int b,int c);
double AreaTriangle(int a,int b,int c);

int main (void)
{
	int x,y,z;

	//3�ӂ̓���
	printf("3�ӂ̒����̓���>>");
	scanf("%d %d %d",&x,&y,&z);

	//�O�p�`�ł��邩�ǂ����̃`�F�b�N
	if(! isTriangle(x,y,z)){
		printf("error\n");
		return -1;
	}

	//�ʐς̌v�Z
	printf("%.2f\n",AreaTriangle)