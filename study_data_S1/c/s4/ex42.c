/*
ex42.c ���K���4-2 ���ȏ�p59
*/
#include <stdio.h>

int main( void )
{
	int yen;
	int doll;
	int amari;

	//�~�̓���
	printf("�~����͂��Ă�������>>");
	scanf("%d",&yen);

	//���Z
	doll = yen / 96;
	amari = yen % 96;

	//���ʂ̕\��
	printf("%d�h���Ƃ��܂�%d�~�ł�\n",doll,amari);

	return 0;
}