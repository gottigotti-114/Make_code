/*
ex22.c
*/

#include <stdio.h>

int main ( void )
{
	int date,gokei;

	gokei = 0;
	
	printf("���l����͂��Ă�������>>");
	while ( scanf("%d",&date) != EOF)
	{
		gokei = gokei + date;
		printf("���l����͂��Ă�������>>");
	}

	printf("���v��%d�ƂȂ�܂���\n",gokei);

	return 0;
}