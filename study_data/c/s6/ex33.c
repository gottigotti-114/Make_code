/*
ex33.c �p������
*/
#include <stdio.h>

int main ( void )
{
	char c;

	//�����̓���
	printf("�����̓���>>");
	scanf("%c",&c);

	//����
	if ('a' <= c && c <= 'z')
		printf("OK\n");
	else
		printf("NG\n");


	return 0;
}