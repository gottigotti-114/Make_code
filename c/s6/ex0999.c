/*
ex0999.c �ő�l�A�ŏ��l�A���ρA���v�����߂�
*/
#include <stdio.h>

int main ( void )
{
	int saidai,saishou,gokei,cnt,n;
	double heikin;

	saidai = -1;
	saishou = 99999;
	gokei = 0;
	cnt = 0;
	
	printf("���l����͂��Ă�������>>");
	while ( scanf("%d",&n) != EOF )
	{
		gokei = gokei + n;
		cnt = cnt + 1;

		if ( n >= saidai )
		{
			saidai = n;
		}
	
		if ( n <= saishou )
		{
			saishou = n;
		}
	
		printf("���l����͂��Ă�������>>");
	}
	
	heikin = (double) gokei / cnt;

	printf("���v��%d�A���ς�%.2f�A�ő�l��%d�A�ŏ��l��%d�ƂȂ�܂����B",gokei,heikin,saidai,saishou);

	return 0;
}