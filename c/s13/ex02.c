/******************************
ex02.c toupper()�̗��p
*******************************/
#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char moji;
	char henkango;

	//�����̓���
	printf("�����̓���>>");
	scanf("%c",&moji);

	//�����̕ϊ�
	henkango = toupper(moji);

	//���ʂ̕\��
	printf("�ϊ���̕�����%c�ł�\n",henkango);

	return 0;
}