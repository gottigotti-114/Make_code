/*
ex33.c �A���t�@�x�b�g
*/
#include <stdio.h>

int main ( void )
{
	char c;

	//�����̓���
	printf("�����̓���>>");
	scanf("%c",&c);

	//����
	if ('a' <= c && c <= 'z' || 'A' <= c && c <= 'Z')
		printf("OK\n");
	else
		printf("NG\n");


	return 0;
}