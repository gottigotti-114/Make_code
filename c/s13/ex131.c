/****************************
ex131.c ���K���13-1		�������̐���T��
***************************/

#include <stdio.h>
#include <ctype.h>

int main (void)
{
	char str[100];
	char cnt;
	int i;

	//������̓���
	printf("������̓���>>");
	scanf("%s",str);

	//�������̃J�E���g
	cnt = 0;
	for(i=0; str[i] != '\0'; i++){
		if(islower(str[i]))	cnt++;
	}

	//���ʂ̕\��
	printf("�������̌���%d�ł�\n",cnt);

	return 0;
}