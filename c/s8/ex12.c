/*****************************
ex12.c
*****************************/
#include <stdio.h>

int main (void)
{
	char str[10];
	int i;

	//������̓���
	printf("������̓���>>");
	scanf("%s",str);

	//�J�E���g
	for(i=0; str[i] != '\0'; i++){
		;
	}
	
	//�������̏o��
	printf("��������%d�ł��B\n",i);

	return 0;
}