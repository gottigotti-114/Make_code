/*****************************
ex65.c ���邤�N����
*****************************/
#include <stdio.h>

int isUruu ( int year );

int main ( void )
{
	int year;

	printf("�N����͂��Ă�������>>");
	scanf("%d",&year);

	if(isUruu ( year ))
		printf("�[�N�ł�\n");
	else
		printf("�[�N�ł͂���܂���\n");

	return 0;
}
/******************************/
int isUruu ( int year )
{
	int a;
	a = year % 4;
	if(a == 0&&year % 100 != 0)
		return 1;
	else
		return 0;
}