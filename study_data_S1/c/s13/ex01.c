/******************************
ex01.c isalpha()�̗��p
*******************************/
#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char moji;

	//�����̓���
	printf("�����̓���>>");
	scanf("%c",&moji);

	//�����팟��
	if(isalpha(moji)){
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else{
		printf("�A���t�@�x�b�g�ł͂���܂���\n");
	}

	return 0;
}