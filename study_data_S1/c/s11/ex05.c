/********************************
ex05.c �\���̂̔z��
******************************/
#include <stdio.h>
#define NUM 3

struct SEISEKI_DATE{
	char name[10];
	double daritu;
	int honruida;
};

int main ( void )
{
	struct SEISEKI_DATE seiseki[NUM] = {
		{"OTANI",0.333,16},
		{"HASE",0.286,34},
		{"SATO",0.177,25}
	};
	int i;

	//�\���̔z��̕\��
	for(i=0; i<NUM; i++){
		printf("���O��%s�ł�\n",seiseki[i].name);
		printf("�ŗ���%.3f�ł�\n",seiseki[i].daritu);
		printf("�{�ۑł�%d�ł�\n\n",seiseki[i].honruida);
	}

	return 0;

};