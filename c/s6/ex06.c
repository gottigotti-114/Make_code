/*
ex06.c �a��\��
*/
#include <stdio.h>

int main ( void )
{
	int year;

	//����N�̓���
	printf("����N�̓���>>");
	scanf("%d",&year);

	//�a��̕\��
	if ( year > 1988 )
	{
		if ( year > 2018 )
		{
			year = year - 2018;
			printf("�ߘa%d�N",year);
		}
		else
		{
			year = year - 1988;
			printf("����%d�N",year);
		}
	}
	else
	{
		printf("���a%d�N",year);
	}

	return 0;

}