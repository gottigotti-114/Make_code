/***************************
ex10.c ������̕���
************************/

#include <stdio.h>

int main ( void )
{
	char str1[10],str2[10];
	int i;

	//������̓���
	printf("������̓���>>");
	scanf("%s",str1);

	//������̕���
	for(i=0; str1[i]!='\0'; i++){
		str2[i]=str1[i];
	}
	str2[i]='\0';

	//������̏o��
	printf("�������%s�ł�\n",str2);

	return 0;
}