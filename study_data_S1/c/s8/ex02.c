/******************************
ex02.c ������̕\��
**************************/
#include <stdio.h>

int main (void)
{
	char hairetu[10]="TOKYO";
	int i;

	//%c�ŕ\��
	for(i=0; hairetu[i] != '\0'; i++)
		printf("%c",hairetu[i]);
	printf("\n");

	//%s�ŕ\��
	printf("%s\n",hairetu);	//%s�͕֗��Ȃ��Ƃɔz�񖼂��������Ύ����I��\0�܂ł̕�����\�����Ă����

	return 0;
}