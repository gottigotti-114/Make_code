/******************************
ex03.c �\���̂ւ�KB����
*****************************/
#include <stdio.h>
#include <string.h>

struct SEISEKI_DATE{
	char name[10];
	double daritu;
	int honruida;
};

int main ( void )
{
	struct SEISEKI_DATE seiseki;

	//�\���̃����o�ւ̓���
	printf("���O�̓���>>");
	scanf("%s",seiseki.name);

	printf("�ŗ��̓���>>");
	scanf("%lf",&seiseki.daritu);

	printf("�{�ۑł̓���");
	scanf("%d",&seiseki.honruida);

	//�\���̃����o�̒l�̕\��
	printf("���O��%s�ł�\n",seiseki.name);
	printf("�ŗ���%.3f�ł�\n",seiseki.daritu);
	printf("�{�ۑł�%d�ł�\n",seiseki.honruida);

	return 0;
}