/*****************************
ex15.c �啶���ɕϊ�
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
		if(str[i]>='a' && str[i]<='z')
		str[i]-=32;
	}

	//�Í��̕\��
	printf("%s\n",str);

	return 0;
}