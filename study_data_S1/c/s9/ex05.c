/****************************************
ex05.c �z��̑���
****************************************/

#include <stdio.h>
#define NUM 5

int main (void)
{
	int hairetu[NUM] = { 50,10,30,40,20};
	int i;
	int *p;

	p = hairetu;		//�z�񖼂͔z��ihairetu[0]�j�̊J�n�̃A�h���X�Ƃ݂Ȃ����
							//�|�C���^����ƂȂ�n�_�̃A�h���X

	for(i = 0; i < NUM; i++){
		printf("%d",*(p+i));		//*p + i���ƌ��̒l�ihairetu[0]�j��+1���Ă��܂����ƂɂȂ�
	}
	
	return 0;
}