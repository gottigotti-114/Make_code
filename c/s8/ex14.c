/*****************************
ex14.c �V�[�U�[�ԍ�
*****************************/
#include <stdio.h>

int main (void)
{
	char str[10];
	int i;

	//�����̓���
	printf("�����̓���>>");
	scanf("%s",str);

	//�Í���
	for(i=0; str[i] != '\0'; i++){
		str[i]+=3;
	}

	//�Í��̕\��
	printf("%s\n",str);

	return 0;
}