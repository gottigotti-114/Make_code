/*
ex43.c ���K���4-3 ���ȏ�p58
*/
#include <stdio.h>

int main ( void )
{
	int zeinuki,zeikomi;
	int suryo;
	int kingaku;

	//���ʃf�[�^�̓���
	printf("�Ŕ������i�Ɣ���グ���ʂ���͂���������>>");
	scanf("%d %d",&zeinuki,&suryo);

	//���z�̌v�Z
	zeikomi = zeinuki * 1.05;
	kingaku = zeikomi * suryo;

	//���ʂ̕\��
	printf("�ō����i�́A%d�~�ł�\n",kingaku);

	return 0;
}