/*
ex35.c ���邤�N����
*/
#include <stdio.h>

int main ( void )
{
	int year;

	//�N�̓���
	printf("�N����͂��Ă�������>>");
	scanf("%d",&year);

	//���邤�N�̔���
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
		printf("���邤�N�ł���\n");
	else
		printf("���邤�N�ł͂Ȃ�\n");

	return 0;
}